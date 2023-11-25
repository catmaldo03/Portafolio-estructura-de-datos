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
List DeleteLast(List L){
    Position P, Previous;
    P = First(L);
    Previous = Header(L);

    while (P->Next != NULL) {
        Previous = P;
        P = Advance(P);
    }

    free(P);
    Previous->Next = NULL;
    return L;
}

int main(){
    List L1;
    ElementType i;
    L1= MakeEmpty(L1);;
    Position P;
    P=Header(L1);
    for(i=0;i<13;i+=2){
        Insert(i,L1,P);
        printf("%d ",P->Next->Element);  
        P= Advance(P);  
    }
    printf("\n");
    
    
    DeleteLast(L1);
    P=First(L1);
    while(P!=NULL){
        printf("%d ",P->Element);  
        P= Advance(P);
    }
    return 0;
}