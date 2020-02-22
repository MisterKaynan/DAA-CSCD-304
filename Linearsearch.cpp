#include <iostream>
//#include <string>
using namespace std;

int main()
{

int i, k[30];
int j,l;
cout<<"Enter the number of items you wish to demonstrate linear search with\n"<<endl;
//for (i=0; i<j; i++)
  cin >>j;

cout<<"Enter the items you wish to demonstrate linear search with\n"<<endl;
for (int t =0; t<j; t++)
  cin >>k[t];
    
  /*for(i=0; i < j; i++){
  	cin>>k[i];
  }*/
  cout<<"You have " <<j <<" elements in your array"<<endl;
  cout<<"What are you looking for?"<<endl;
  cin>>l; 

for(i = 0; i < j; i++){
	if(l == k[i]){
    cout<< "Yes It is in"<<endl;
}else if(i!=k[i] && i==j-1)
cout<<"Item is non-existant in array"<<endl;
}	
return 0;
}


