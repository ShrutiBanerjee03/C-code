#include <iostream>
using namespace std;
int main()
{
    int i=1,j=2,k=3,l=4,m;
    //1     //2    //3  //4   //1   //2    //3  //4   //2   //1  //4   //3
    m=i++ + j++ + k++ + l++ - --i - --j - --k - --l + ++i - --j + ++k - --l;
    cout<<i<<endl;//2 //1//2
    cout<<j<<endl;//3 //2 //1
    cout<<k<<endl;//4 //3 //4
    cout<<l<<endl;//5 //4 //3
    cout<<m<<endl;//2


}