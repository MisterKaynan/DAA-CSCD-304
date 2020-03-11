#include <iostream>
//#include <string>
using namespace std;

int main()
{

int i, k[30];
int j,l;
cout<<"Enter the number of items you wish to demonstrate bubble sort with\n"<<endl;
//for (i=0; i<j; i++)
  cin >>j;

cout<<"Enter the items you wish to demonstrate bubble sort with\n"<<endl;
for (int t =0; t<j; t++)
  cin >>k[t];
    
  
  cout<<"You have " <<j <<" elements in your array"<<endl;
  

for(i = 0; i < j; i++){
	for(int m =0; m <j-i; m++){
	if( k[i] > k[i+1]){
    int temp;
    temp = k[i];
    k[i]=k[i+1];
    k[i+1] = temp;
    
    for (int l = 0; l < j; l++)  
        cout << k[l] << " ";  
    cout << endl;
    }
}
}
	
return 0;
}


