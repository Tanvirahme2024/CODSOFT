
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    srand(time(0));

    int randomNum = rand();
    cout<<randomNum<<endl;

    cout << "Guess the Number:";
    cin>>x;
    if(x<randomNum)
    {
        cout<<"Too Low"<<endl;
    }
    else if(x>randomNum)
    {
        cout<<"Too High"<<endl;
    }
    else
    {
        cout<<"Your Guess Number is Right."<<endl;
    }

    return 0;
}




