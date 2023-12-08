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
    L = malloc(sizeof(struct Node));
    if(L==NULL)
        printf("Out of Memory!");
    L->Next=L;
    return L;
}
void Insert(ElementType X, List L, Position P){
    Position TmpCell;
    TmpCell= malloc(sizeof(struct Node));
    TmpCell->Element = X;
    P->Next = TmpCell;
    TmpCell->Next= L;
}
void Delete(ElementType X, List L){
    Position P, TmpCell;
    P=L;
    while(P->Next!= L &&P->Next->Element!=X)
        P=P->Next;
    if(P->Next!=L){
        TmpCell= P->Next;
        P->Next=TmpCell->Next;
        free(TmpCell);
    }
}
Position Find(List L, ElementType X){
    Position P=L->Next;
    while(P!=L &&P->Element !=X)
        P=P->Next;

    return P;
}
void RotateLeft(List L){
    Position P = L->Next;
    while(P->Next != L)
        P=P->Next;
    P->Next=L->Next;
    L->Next=L->Next->Next;
}
void RotateRight(List L){
    Position P = L->Next;
    while(P->Next->Next != L)
        P=P->Next;
    P->Next->Next=L->Next;
    L->Next=P->Next;
    P->Next=L;
}