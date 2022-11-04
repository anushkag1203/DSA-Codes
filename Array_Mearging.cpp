// #include <iostream>
// using namespace std;
// struct array
// {
//     int A[20];
//     int B[20];
//     int m;
//     int n;
// };
// void merge(struct array a)
// {
//     int i = 0, k = 0, j = 0;
//     int C[20];
//     while (i < a.m && j < a.n)
//     {
//         if (a.A[i] > a.B[j])
//         {
//             C[k] = a.B[j];
//             k++;
//             j++;
//         }
//         else if (a.A[i] < a.B[j])
//         {
//             C[k] = a.A[j];
//             k++;
//             i++;
//         }
//     }
//     for (; i < a.m; i++)
//     {
//         C[k] = a.A[i];
//         k++;
//     }
//     for (; j < a.n; j++)
//     {
//         C[k] = a.B[j];
//         k++;
//     }
//     for (int b = 0; b < k; b++)
//     {
//         cout << C[b] << " ";
//     }
// }
// int main()
// {
//     array a = {{3, 8, 16, 20, 25, 34}, {4, 10, 12, 22, 23, 34}, 6, 6};
//     merge(a);
//     return 0;
// }

// TIME COMPLEXITY theta(m+n)



//2nd method
  #include<iostream>
using namespace std;
struct array{
int A[20];
int l;
};
void merge(struct array a,struct array b){
    int i=0,k=0,j=0;
    int C[20];
    while(i<a.l && j<b.l){
        if(a.A[i]>b.A[j]){
            C[k]=b.A[j];
            k++;j++;
        }
    else if(a.A[i]<b.A[j]){
            C[k]=a.A[j];
            k++;i++;
        }
    }
    for(;i<a.l;i++){
            C[k]=a.A[i];k++;
        }
        for(;j<b.l;j++){
            C[k]=b.A[j];k++;
        }
for(int b=0;b<k;b++){
    cout<<C[b]<<" ";
}
}
int main(){
    array a={{3,8,16,20,25,34},6};
    array b={{4,10,12,22,23,34},6};
  merge(a,b);
    return 0;}
