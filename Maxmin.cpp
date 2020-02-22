#include <iostream>
using namespace std;

int main(){
	
int i, k[30];
int j,l;
int max, min;
cout<<"Enter the number of items you wish to demonstrate maxmin search with.\n"<<endl;

  cin >>j;

cout<<"Enter the items you wish to demonstrate minmax search with. \n"<<endl;
for (int t =0; t<j; t++)
  cin >>k[t];
  

   //cout<< "What is your maximum and minimum respectivey?"<<endl;


min=k[0];
for(i =0; i<j; i++){
	if (min > k[i])
	min=k[i];
}

max=k[0];
for(i =0; i<j; i++){
	if (max< k[i])
	max=k[i];
}

cout<<"You have " << min <<" as your minimum & \n"<< max<< " as your maximum."<<endl;
return 0;
}
