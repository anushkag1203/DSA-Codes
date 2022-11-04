// #include <iostream>
// using namespace std;
// int main()
// {
//     int A[] = {6, 3, 9, 10, 15, 6, 8, 12, 3, 6};
//     int max = A[0];
//     int n = 10;
//     for (int i = 0; i < 10; i++)
//     {
//         if (max < A[i])
//         {
//             max = A[i];
//         }
//     }
//     int temp[max + 1] = {0};
//     for (int i = 0; i < 10; i++)
//     {
//         temp[A[i]]++;
//     }
 //   int k = 0, i = 0;
    //    while(i<max+1) {
    //      if(temp[i]!=0){
    //         while(temp[i]!=0){
    //             A[k]=i;
    //              cout<<A[k]<<" ";
    //             k++;
    //             temp[i]--;
    //         }
    //      }
    //      i++;

    //     }

//     while (i < max + 1)
//     {
//         if (temp[i] > 0)
//         {
//             A[k] = i;
//             cout << A[k] << " ";
//             k++;
//             temp[i]--;
//         }
//         else
//         {
//             i++;
//         }
//     }

//     return 0;
// }

// Time complexity=O(n)linear



#include <iostream>
using namespace std;
int max_element(int A[], int n)
{
    int max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    return max;
}
void count_sort(int A[], int n)
{
    int max, i = 0, j = 0;
    max = max_element(A, n);
    int temp[max + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        temp[A[i]]++;
    }
    while(i<max+1){
        if(temp[i]!=0){
           A[j]=i;
           cout<<A[j]<<" ";
           j++;temp[i]--;
        }
        else{
            i++;
        }
    }
}
int main()
{
int A[]={4,2,9,6,2,1,4,8,0,9};
int n=10;
count_sort(A,n);
    return 0;
}
