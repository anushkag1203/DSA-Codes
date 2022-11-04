#include<iostream>
using namespace std;
struct array{
    int A[20];
    int length;
};
void display(struct array a){
    for(int i=0;i<a.length;i++)
    cout<<a.A[i]<<" ";
}
int insert(struct array *a,int key){
int i;
    for( i=0;i<8;i++){
        if(a->A[i]>key)
        break;
    }
    for(int j=a->length;j>i;j--){
       a-> A[j]=a->A[j-1];
    }
   a-> A[i]=key;
    a->length++;
}
int main(){
     array a={{1,4,7,10,12,14,17,20},8};
    int key;
    cout<<" Enter key: ";
    cin>>key;
    cout<<"Original array: ";
    display(a);
    cout<<endl;
    insert(&a,key);
    cout<<"Inserted array: ";
    display(a);

    return 0;}



//2nd method
#include <iostream>
using namespace std;
struct array
{
    int A[10];
    int size;
    int length;
};
void display(struct array a)
{
    for (int i = 0; i < a.length; i++)
        cout << a.A[i] << " ";
}
int insert(struct array *a, int key)
{
    int i = a->length - 1;
    if (a->length == a->size)
    {
        return 0;
    }
    else
    {
        while (a->A[i] > key)
        {
            a->A[i + 1] = a->A[i];
            i--;
        }
        a->A[i + 1] = key; // here i+1 is imp to understand.A[8]=A[7]=20,A[7]=A[6]=17 and it will stop as A[5]<16 but on next line it is i=--
        // where i will reduce by oso we have to write A[i+1]=key.
        a->length++;
    }
}
int main()
{
    array a = {{1, 4, 7, 10, 12, 14, 17, 20}, 10, 8};
    int key;
    cout << "Enter key: ";
    cin >> key;
    insert(&a, key);
    display(a);

    return 0;
}