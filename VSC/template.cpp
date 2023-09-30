#include<iostream>
using namespace std;
template <class T> 
T max(T& a, T& b)
{
    return (a>b?a:b);
    
}
int main()
{
    float j=2.0 , k=3.0 , l;
    int o=4 , n=5 , m;
    l= max(j,k);
    m= max(o,n);
    cout<<l<<endl;
    cout<<m<<endl;
    return 0;
}
