#include<stdio.h>
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

Position Find(ElementType X, List L){
    Position P;

    P = L->Next;
    while(P != NULL && P-> Element != X)
        P = P-> Next;

    return P;
}
Position Header(List L){
    return L;
}
Position Advance(Position P){
    return P->Next;
}
void Modified_Node(ElementType Z,ElementType X, List L, Position P){
    P=Find(X,L);
    if(P!=NULL)
        P->Element = Z;    
}
int main(){
    List L;
    Position P;
    ElementType X,i,Z;
    X=10;
    L= MakeEmpty(L);
    P=Header(L);
    printf("Lista anterior\n");
    for(i=0;i<10;i++){
        X=i+1;
        Insert(X,L,P);
        printf("%d\n",P-> Next->Element);
        P= Advance(P);
    }
    X=3;
    Z=200;
    Modified_Node(Z,X,L,P);
    P=Header(L);
    printf("Lista modificada:\n");
    for(i=0;i<10;i++){
        printf("%d\n",P-> Next->Element);
        P=Advance(P);
    }
   return 0; 
}