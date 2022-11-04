#include<iostream>
using namespace std;
class Matrix{
    public:
    int n;
    int *A;

    Matrix(int n){
        this->n=n;
        A=new int[n*n];
    }

    void set(int i,int j,int x);
    void get(int i,int j);
    void display();
};
void Matrix::set(int i,int j,int x){
    int index;
    if(i<=j){
        index=j-i;
        A[index]=x;
    }
    else{
        index=n+i-j-1;
        A[index]=x;
    }
}
void Matrix::get(int i,int j){
    int index;
    if(i<=j){
        index=j-i;
        cout<<A[index]<<endl;
    }
    else{
        index=n+i-j-1;
        cout<<A[index]<<endl;
    }

}

void Matrix::display(){
    int index;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j){
                index=j-i;
                cout<<A[index]<<" ";
            }
            else{
                index=n+i-j-1;
                cout<<A[index]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    Matrix m(4);

    m.set(1,1,3);
    m.set(1,2,7);
    m.set(1,3,9);
    m.set(1,4,5);
    m.set(2,1,8);
    m.set(3,1,4);
    m.set(4,1,2);

    m.get(1,4);
    m.get(3,1);
    

    m.display();
    return 0;}

    