# include <iostream>
using namespace std;
int main()
{
    int b;
    cout<<"Enter the last number : ";
    cin>>b;
    for(int i = 0 ; i<b ; i++)
    {
        for(int j = 0; j<b ; j++)
        {
            cout<<j+1<<' ';
        }
        cout<<'\n';
    }

    return 0;
}