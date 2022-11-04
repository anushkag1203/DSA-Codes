  #include<iostream>
  using namespace std;
  int main(){
    int A[]={3,2,4,5,6,7,8};
    int n=7,flag;
    for(int i=0;i<n-1;i++){//for n-1 passes
    flag=0;
      for(int j=0;j<n-1-i;j++){//n-1-i is taken as after 1 pass the largest element is at end so no need to compare it
          if(A[j]>A[j+1]){
            int temp;
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
            flag=1;
          }
      }
      if(flag==0){
    break;
      }
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;}

    //TC=O(n) when already sorted(Comparisions)
    //TC=O(n^2)quadratic (Comparisions)
    //no of passes n-1
    //swaps=O(n^2)
    