#include <stdio.h>
int ARR1[]={2,2,4};
int ARR2[]={2,2,4};

int size(int arr[])  // do kich thuoc cua mang
{
    int i;
    while (arr[i] != 0)
    {
        i++;
    }

    return i;
}

int soSanhValue(int arr1[],int arr2[]){ // so sanh gia tri cua 2 mang
    for (int i = 0; i <  size(arr1); i++)
    {
        if(arr1[i]!=arr2[i]){
            printf("\nLARR1[%d]=%d,LARR2[%d]=%d",i,arr1[i],i,arr2[i]);
            return 0;
        }
        
    }
    
    return 1;

}

int isEqual(int arr1[],int arr2[]){
   int s1 = size(arr1);
   int s2= size(arr2);
    if(s1==s2){
      printf("\nsize2:%d",s1);

        soSanhValue(arr1,arr2);
    }
    else {
        return 0;
    }

}

int main()
{
    for (int i = 0; i <=size(ARR1); i++)
    {
        printf("\nARR1[%d]=0x%x", i, ARR1[i]);
    }
    for (int j = 0; j <=size(ARR2); j++)
    {
        printf("\nARR2[%d]=0x%x", j, ARR2[j]);
    }
    printf("\nsize1:%d",size(ARR1));
    printf("\nsize2:%d",size(ARR2));

   printf("\nKQ=%d",isEqual(ARR1,ARR1));

   
}
