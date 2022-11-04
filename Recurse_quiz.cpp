//10
// int f(int n)
// {}static int i = 1
// if (n>=5)return n;
// n = n+i;
// i++;
// return f(n);
// }



// //2)keep in mind that if static then its value can be visible to main otherwise it is zero only....
// nt k = 0, j = 0;
// if (n = = 0) return;
// k = n % 10;
// j = n/10;
// sum = sum + k;
// foo (j, sum);
// printf(“%d”, k)
// }
// int main ()
// {
// int a = 2048, sum = 0;
// foo (a, sum);
// printf(“%d\n”, sum);
// }the value returned by f(1) is



// //3)here keep in mind that referance means static value
// int f (int &x, int c) 
// {   c = c — 1; 
// if (c = = 0) return 1; x = x + 1; 
// return f(x,c) * x;
//         }



// //4)
// int fun (int n)
//       { 
// int x=1, k; 
// if (n==1) return x; 
// for (k=1; k<n; ++k) 
// x=x + fun (k) * fun (n-k); 
// return x;  }

// The return value of fun (5) is
// //5)In this question remember:: whatever u write after yur function is called will be exceuted that many times till your all 
// //recursive calls get over 
// //here mainly u give ans 3 1 2 2 1 3 4 but actually ans is 3 1 2 2 1 3 4 4 4 as thelast 2 4s areprinted as the recursive calls get over
// //those are actually not in else but part of if only....if they whre part of else then it would have peinted only once
// #include<iostream>
// using namespace std;
// void count(int n) 
// {
// static int d = 1; 
// cout<<n ; 
// cout<< d; 
// d++; 
// if (n > 1) count (n-1); 
// cout<<d ;
//        }
// int main(){
//      count (3);
//     return 0;}