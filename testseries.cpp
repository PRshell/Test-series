#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a,b,c,d,e;
	while(t--)
	{
	    int Ind=0,Eng=0,Draw=0;
	    for(int i=0;i<5;i++)
	    {
	        int x;
	        cin>>x;
	        if(x==0)
	        {
	            Draw++;
	        }
	        else if(x==1)
	        {
	            Ind++;
	        }
	        else
	        {
	            Eng++;
	        }
	    }
	    
	    if(Ind>Eng)
	    {
	        cout<<"INDIA"<<endl;
	    }else if(Ind<Eng)
	    {
	        cout<<"ENGLAND"<<endl;
	    }else{
	        cout<<"DRAW"<<endl;
	    }
	}
	return 0;
}
