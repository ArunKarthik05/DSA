#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int persons,bal;
        cin>>persons>>bal;
        int amount[persons];
        for(int x=0;x<persons;x++)
        {
            cin>>amount[x];
        }
        for(int y=0;y<persons;y++)
        {
            if(amount[y] <= bal)
            {
                bal=bal-amount[y];
                cout<<"1";
            }
            else{cout<<"0";}
        }
    }
	// your code goes here
	return 0;
}

