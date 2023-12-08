#include<stdio.h>
#include<limits.h>
void Mergesort(int B[], int low, int high);
void Merge(int B[], int p,int q, int r);
int main(){
    int B[] = {8,4,2,7,9,12,-45,3,-46,5,34,23,10,0,33,-10,-8,6};
    int count = sizeof(B)/sizeof(B[0]);
    Mergesort(B,0,count-1);
    for (int i = 0; i < count; i++) {
        printf("%d ", B[i]);
        }
    return 0;
}
void Mergesort(int B[], int low, int high){
    if(low<high){
        int mid = (low + high)/2;
        Mergesort(B,low,mid);
        Mergesort(B,mid+1,high);
        Merge(B,low,mid,high);
    }
}
void Merge(int B[], int p,int q, int r){ // p = low,q=mid, r = high
    int n1= q-p+1;
    int n2= r - q;
    int L[n1+1], R[n2+1];
    int i,j;
    for(i = 1; i<=n1;i++){
        L[i]=B[p+i-1];
    }
    for(j = 1; j<=n2;j++){
        R[j]=B[q+j];
    }
    L[n1+1] =  R[n2+1] = INT_MAX;
    i = j = 1;
    for (int k =p;k<=r;k++){
        if(L[i]<=R[j]){
            B[k] = L[i];
            i++;
        }
        else{
            B[k] = R[j];
            j++;
        }
    }
}