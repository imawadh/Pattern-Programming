# include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b;
    cin>>b;
    for(int i = 0 ; i<b ; i++)
    {
        for(int j = 0 ; j <=i ;j++ )
        {
            cout<<a<<' ';
            a++;
        }
        cout<<'\n';
    
    }
    
}