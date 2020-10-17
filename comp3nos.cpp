#include<iostream>
using namespace std;

int main(){
int a,b,c;
cin>>a>>b>>c;

if(a>b && a>c)
cout<<a<<"is the greatest.\n";
else if(b>c)
cout<<b<<"is the greatest.\n";
else cout<<c<<"is the greatest.\n";

return0;
}
