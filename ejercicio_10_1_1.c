#include<stdio.h>
#include<stdlib.h>
typedef int ElementType;

typedef struct Node *PtrToNode;
typedef PtrToNode Stack;

struct Node{
    ElementType Element;
    PtrToNode Next;
};
Stack create_pile(Stack S){
    S=malloc(sizeof(struct Node));
    if(S==NULL)
        printf("No hay memoria");
    S->Next=S;
    return S;
}
void push(ElementType X, Stack S){
    PtrToNode TmpCell;
    TmpCell=malloc(sizeof(struct Node));
    if(TmpCell==NULL)
        printf("No hay memoria");
    else{
        TmpCell->Element = X;
        TmpCell->Next=S->Next;
        S->Next=TmpCell;
    }
}
ElementType Top(Stack S){
    if(S->Next!=S){
        return S->Next->Element;
    }
    else{
        printf("Empty Stack");
        return 0;
    }
}
void Pop(Stack S){
    PtrToNode FirstCell;
    if(S->Next== S){
        printf("Stack Empty");
    }
    else{
        FirstCell=S->Next;
        S->Next=S->Next->Next;
        free(FirstCell);
    }
}