#include <iostream>
using namespace std;
int main()
{
    int A[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int n = 10;
    int count;
    for (int i = 0; i < n - 1; i++)
    {
        count = 1; // as during start of each and every loop the value of the count should be initlized to 1.
        if (A[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (A[i] == A[j])
                {
                    count++;
                    A[j] = -1;
                }
            }
        }
        if (count > 1)
        {
            cout << "Element: " << A[i] << " "
                 << "Repeated: " << count << endl;
        }
    }

    return 0;
}

//TC =O(n^2)



//2nd method
#include<iostream>
using namespace std;
int main(){
    int A[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int max=A[0],n=10;
    for(int i=0;i<n;i++){
        if(max<A[i])
        max=A[i];
    }
    int temp[max+1]={0};
    for(int i=0;i<n;i++){
        temp[A[i]]++;
    }
    for(int i=0;i<max+1;i++){
  if(temp[i]>1){
    cout<<"Element: "<<i<<" "<<"Repeated: "<<temp[i]<<endl;
  }
    }
    return 0;}

    //TC O(n);