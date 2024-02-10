# include <iostream>
using namespace std;
int main()
{
    int a;
    char b;
    cout<<"Enter the character : ";
    cin>>b;
    cout<<"Enter the height of triangle : ";
    cin>>a;
    for(int i =0 ; i<a ; i++)
    {
        for(int j = 0 ; j<=i ; j++)
        {
            cout<<b<<' ';
        }
        cout<<'\n';
    }
}