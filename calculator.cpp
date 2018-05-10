#include<bits/stdc++.h>
using namespace std;
void sum(int data_1,int data_2)
{
      int  sum;
      sum=data_1+data_2;
      cout<<data_1<<" + "<<data_2<<" = "<<sum<<endl;
}
void divided(int data_1,int data_2)
{
        int divided;
        divided = data_1/data_2;
        cout<<data_1<<" / "<<data_2<<" = "<<divided<<endl;
}
void multiplication(int data_1,int data_2)
{
    int mulvalue;
    mulvalue =  data_1*data_2;
    cout<<data_1<<" * "<<data_2<<" = "<<mulvalue<<endl;
}
void subtract(int data_1,int data_2)
{
    int sub;
    sub = data_1-data_2;
    cout<<data_1 << " - " << data_2 <<" = "<< sub << endl;

}
int main()
{
	int value1,value2;
	cout<<"enter value: ";
	cin>>value1;
	cout<<"enter value: ";
	cin>>value2;
	subtract(value1,value2);
	divided(value1,value2);
  sum(value1,value2);
	multiplication(value1,value2);
  return 0;
}
