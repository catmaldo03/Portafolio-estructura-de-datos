#include <stdio.h>
#include<stdlib.h>
typedef int ElementType;

typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

struct Node{
    ElementType Element;
    Position Next;
};
List MakeEmpty(List L){
    //if(L != NULL)
    //    DeleteList(L); FALTA BORRAR LA LISTA

    L = malloc(sizeof(struct Node));
    if (L == NULL)
        printf("Out of memory!");
    L->Next = NULL;
    return L;
}
void Insert (ElementType X, List L, Position P){
    Position TmpCell;

    TmpCell = malloc(sizeof(struct Node));
    if (TmpCell == NULL)
        printf("Out of memory!");
    
    TmpCell -> Element = X;
    TmpCell -> Next = P -> Next;
    P -> Next = TmpCell;
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
//con una tercera lista
List Merge(List L1, List L2){
    List L3;
    Position P, Q;
    L3= MakeEmpty(L3);
    P=First(L1);
    Q=Header(L3);
    while(P!=NULL){
        Insert(P->Element,L3,Q);
        P=Advance(P);
    }
    P=First(L2);
    while(P!=NULL){
        Insert(P->Element,L3,Q);
        P=Advance(P);
    }
    return L3;
}
//Sin crear una tercera lista
List Merge2(List L1, List L2){
    Position P,Q;
    P=First(L2);
    while (P->Next!=NULL)
    {
        P=Advance(P);
    }
    Q=First(L1);
    while (Q!=NULL)
    {
        Insert(Q->Element,L2,P);
        Q=Advance(Q);
    }
    return L2;
}
int main(){
    List L1, L2,L3,L4;
    ElementType i;
    L1= MakeEmpty(L1);
    L2 = MakeEmpty(L2);
    L3=MakeEmpty(L3);
    L4=MakeEmpty(L4);
    Position P;
    P=Header(L1);
    for(i=0;i<13;i+=2){
        Insert(i,L1,P);
        P= Advance(P);
    }
    P=Header(L2);
    for(i=1;i<13;i++){
        Insert(i,L2,P);
        P= Advance(P);
    }
    L4=Merge(L1,L2);
    L3=Merge2(L1,L2);
    P=Header(L4);
    while(P->Next!=NULL){
        printf(" %d ",P->Element);
        P= Advance(P);
    }
    printf("\n");
    P=Header(L3);
    while(P->Next!=NULL){
        printf(" %d ",P->Element);
        P= Advance(P);
    }
    printf("\n");

    return 0;
}