#include<bits/stdc++.h>
using namespace std;
void divided(int data_1,int data_2)
{
        int divided;
        divided = data_1/data_2;
        cout<<data_1<<" / "<<data_2<<" = "<<divided<<endl;
}
int main()
{
	int value1,value2;
	cout<<"enter value: ";
	cin>>value1;
	cout<<"enter value: ";
	cin>>value2;
	divided(value1,value2);
	return 0;
}
