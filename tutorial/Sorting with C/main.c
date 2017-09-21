#include <stdio.h>

int main() {
    int L[20],temp,i,j,n=6,idx;
    printf("pengurutan berdasarkan Counting sort \n masukkan %d elements : \n", n);
    for (i = 0; i<n; i++){
    scanf("%d", &L[i]);
    }
    printf("\n Sebelum sorting :");
    for (i=0; i<n; i++){
        printf("%d ",L[i]);
    }
    printf("\n");
    for (i=0; i<(n-1); i++)
    {
        idx=i;
        for(j=i+1; j<n; j++){
            if(L[j]<L[idx]){
                idx=j;
            }
        }
        temp = L[i];
        L[i] = L[idx];
        L[idx] = temp;
    }

    printf("Setelah Sorting : ");
    for (i=0; i<n; i++){
        printf(" %d ", L[i]);
    }
    printf("\n");
    return 0;
}