#include <stdio.h>
#include<stdlib.h>
typedef int ElementType;

typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

struct Node{
    ElementType Element;
    Position Next;
    Position Prev;
};
List MakeEmpty(List L){
    //if(L != NULL)
    //    DeleteList(L); FALTA BORRAR LA LISTA

    L = malloc(sizeof(struct Node));
    if (L == NULL)
        printf("Out of memory!");
    L->Next = NULL;
    L->Prev= NULL;
    return L;
}
Position Header(List L){
    return L;
}
Position Advance(Position P){
    return P->Next;
}
Position First(List L){
    return L->Next;
}
Position Backward(Position P){
    return P->Prev;
}
void Insert (ElementType X, List L, Position P){
    Position TmpCell;

    TmpCell = malloc(sizeof(struct Node));
    if (TmpCell == NULL)
        printf("Out of memory!");
    
    TmpCell -> Element = X;
    TmpCell -> Next = P -> Next;
    if(P->Next!=NULL)
     P -> Next->Prev = TmpCell;
    
    TmpCell -> Prev=P;
    P -> Next = TmpCell;
}
Position Find(List L,ElementType X){
    Position P;
    P=First(L);
    while(P!=NULL&&P->Element!=X){
        P=Advance(P);
    }
    if(P==NULL){
        printf("El elemento no existe\n");
        return NULL;
    }
    else
        return P;
}
void Delete (List L, ElementType X){
    Position P;
    P = Find(L,X);
    if(P !=NULL){
    P->Next->Prev= P->Prev;
    P->Prev=P->Next;
    free(P);
    }
}
void InvertDisplayList(List L){
    Position P;
    P = First(L);
    while(P->Next!=NULL){
        P=Advance(P);
    }
    while(P!=L){
        printf(" %d ", P->Element);
        P=Backward(P);
    }
}
void DisplayList(List L){
    Position P;
    P = First(L);
    while(P!=NULL){
        printf(" %d ", P->Element);
        P=Advance(P);
    }
}
void DeleteLast(List L){
    Position P;
    P = First(L);
    while(P->Next!=NULL){
        P=Advance(P);
    }
    
    P->Prev->Next=NULL;
    free(P);
}
void InsertLast(ElementType X,List L){
    Position TmpCell;
    Position P;
    P=First(L);
    while(P->Next!=NULL){
        P=Advance(P);
    }
    TmpCell = malloc(sizeof(struct Node));
    if (TmpCell == NULL)
        printf("Out of memory!");
    
    TmpCell -> Element = X;
    TmpCell -> Next =NULL;
    if(P->Next!=NULL)
     P -> Next->Prev = TmpCell;
    
    TmpCell -> Prev=P;
    P -> Next = TmpCell;
}
int main(){
    List L;
    Position P;
    ElementType i;
    L=MakeEmpty(L);
    P=Header(L);
    for(i=0;i<10;i++){
        Insert(i+1,L,P);
        P=Advance(P);
    }
    DisplayList(L);
    printf("\n");
    InvertDisplayList(L);
    printf("\n");
    InsertLast(200,L);
    DisplayList(L);
    printf("\n");
    DeleteLast(L);
    DisplayList(L);
    printf("\n");
    return 0;
}