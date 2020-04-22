#include <iostream>

using namespace std;

int main()
{
    int i,n;
    cin>>n;
     cout<<"*";
     for(i=1;i<=(n-3)/2;i++){
        cout<<" ";
    }
    for(i=1;i<=(n+1)/2;i++)
    cout<<"*";
 cout<<endl;
 cout<<"*";
 for(i=1;i<=(n-3)/2;i++){
     cout<<" ";
 }
 cout<<"*";
 cout<<endl;
 cout<<"*";
 for(i=1;i<=(n-3)/2;i++){
     cout<<" ";
 }
 cout<<"*";
 cout<<endl;
 for(i=1;i<=n;i++)
 cout<<"*";
 cout<<endl;
 for(i=1;i<=((n-3)/2)+1;i++){
     cout<<" ";
 }
 cout<<"*";
 for(i=1;i<=(n-3)/2;i++)
 cout<<" ";
 cout<<"*";
 cout<<endl;
 for(i=1;i<=((n-3)/2)+1;i++){
     cout<<" ";
 }
 cout<<"*";
 for(i=1;i<=(n-3)/2;i++)
 cout<<" ";
 cout<<"*";
 cout<<endl;
 for(i=1;i<=(n+1)/2;i++)
 cout<<"*";
 for(i=1;i<=(n-3)/2;i++)
 cout<<" ";
 cout<<"*";

    return 0;
}

