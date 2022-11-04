#include<iostream>
using namespace std;
class Matrix{
    public:
    int *A;//array to diagonal matrix
    int n;//order of the matrix
    Matrix(int n){
        this->n=n;
        A=new int[5];
    }
};
void set(Matrix *m,int i,int j,int x){
    if(i==j){
        m->A[i-1]=x;
    }
}

void get(Matrix m,int i,int j){
    if(i==j){
        cout<<m.A[i-1]<<endl;
    }
    else{
        cout<<0<<endl;
    }
}
void display(Matrix m){
    for(int i=0;i<m.n;i++){
        for(int j=0;j<m.n;j++){
            if(i==j){
                cout<<m.A[i]<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    Matrix m(5);
    set(&m,1,1,3);
    set(&m,2,2,8);
    set(&m,3,3,9);
    set(&m,4,4,1);
    set(&m,5,5,4);


    get(m,1,2);
    get(m,3,3);
    
    display(m);
    return 0;}