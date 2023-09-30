#include <bits/stdc++.h>
using namespace std;
class operations_Array
{
public:
    void display(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int indInsertion(int arr[],int size, int element, int capacity, int index)
    {
        if(size>=capacity)
        {
            return -1;
        }
        for(int i=size-1; i>=index; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        return 1;
    }
    int indDeletion(int arr[], int size, int index)
    {
//        arr[size]=0;
        for(int i=index; i<=size; i++)
        {
            arr[i]=arr[i+1];
        }
        return 1;
    }
};
int main() {
    operations_Array op;
    int array[100]={7,8,12,27,88};
    int sizee=5,elements=45,indexx=3;
    op.display(array,sizee);
    op.indInsertion(array,sizee,elements,100,indexx);
    sizee+=1;
    op.display(array,sizee);
    op.indDeletion(array,sizee,indexx);
    sizee-=1;
    op.display(array,sizee);
    return 0;
}
