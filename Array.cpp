#include <stdio.h>
int arr1[] = {1, 6, 5, 48};
int arr2[] = {4, 3, 5, 12};
int arr[] = {};
int m, n;
void ghepMang(int a[], int m, int b[], int n, int *ptr);
void timGiaTri(int a[], int length, int GiaTri); // GiaTri là số cần tìm
void xepTangDan(int *ptr, int length);
void xepGiamDan(int *ptr, int length);
int main()
{

    m = sizeof arr1 / 4; // m= kích trước arr1
    n = sizeof arr2 / 4; // n tương tự
    printf("\n m=%d; n= %d ; ", m, n);
    ghepMang(arr1, m, arr2, n, arr); 
    timGiaTri(arr, 8, 48);  
    xepTangDan(arr, 8);
    xepGiamDan(arr, 8);
}

void ghepMang(int a[], int m, int b[], int n, int *ptr)
{
    int length = m + n;
    // printf("\n h: %d", lenth);
    for (int i = 0; i < length; i++)
    {
        if (i < m)
        {
            *(ptr + i) = a[i];
        }
        else
        {
            *(ptr + i) = b[i - m];
        }
    }
}
void timGiaTri(int a[], int length, int GiaTri)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (a[i] == GiaTri)
        {
            printf(" \n Gia tri %d o vi tri arr[%d]", GiaTri, i);
            count++;
        }
    }
    count > 0 ?: printf(" \n Khong co gia tri %d trong mang ", GiaTri);
}

void xepTangDan(int *ptr, int length)
{
    int temp;
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {
                temp = arr[i];
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    printf("\n mang sau khi xep tang dan :  ");
    for (int j = 0; j < length; j++)
    {
        printf("%d , ", arr[j]);
    }
}

void xepGiamDan(int *ptr, int length)
{
    int temp;
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (*(ptr + i) < *(ptr + j))
            {
                temp = arr[i];
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    printf("\n mang sau khi xep giam dan :  ");
    for (int j = 0; j < length; j++)
    {
        printf("%d , ", arr[j]);
    }
}