#include<iostream>
using namespace std;
class Symmetric{
    public:
    int n;
    int size;
    int *A;
    Symmetric(int n){
        this->n=n;
        size=3*n-2;
        A=new int[size];
    }

    void set(int i,int j,int x);
    void get(int i,int j);
    void display();
};
void Symmetric::set(int i,int j,int x){
    int index;
    if(i-j==1){
        index=i-2;
        A[index]=x;       
    }
    else if(i-j==0){
        index=n-i-2;
        A[index]=x;
    }
    else if(i-j==-1){
        index=2*n+i-2;
        A[index]=x;
    }
}

void Symmetric::get(int i,int j){
    int index;
    if(i-j==1){
        index=i-2;
        cout<<A[index]<<endl;       
    }
    else if(i-j==0){
        index=n-i-2;
        cout<<A[index]<<endl;
    }
    else if(i-j==-1){
        index=2*n+i-2;
        cout<<A[index]<<endl;
    }

}

void Symmetric::display(){
    int index;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i-j==1){
        index=i-2;
        cout<<A[index]<<" ";       
    }
    else if(i-j==0){
        index=n-i-2;
        cout<<A[index]<<" ";
    }
    else if(i-j==-1){
        index=2*n+i-2;
        cout<<A[index]<<" ";
    }
    else{
        cout<<0<<" ";
    }
        }
        cout<<endl;
    }
}
int main(){
    
   Symmetric m(4);
   m.set(1,1,3);
   m.set(2,2,8);
   m.set(3,3,9);
   m.set(4,4,2);
   m.set(1,2,5);
   m.set(2,3,6);
   m.set(3,4,7);
   m.set(4,3,1);
   m.set(2,1,1);
   m.set(3,2,4);
   m.set(4,3,3);

   m.get(3,4);
   m.get(2,1);

   m.display();
    return 0;}