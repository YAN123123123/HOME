#include <iostream>
using namespace std;
#include<math.h>
//"1——输出一个乘法表"
void circulate()
{
int a=15;
	int b=15;
	for(a=15;a<105;a+=10)
	{
		for(b=15;b<=a;b+=10)
		{
			cout<<b<<"*"<<a<<"="<<b*a<<"\t";

		}	
		cout<<endl;
	}
	system("pause");
	return ;
}

void menu()
{
cout<<"1——输出一个乘法表"<<endl;
cout<<"0——结束本次使用"<<endl;

}

int main()
{
int select =0;
while(true)
{
menu();
cin>>select;
switch(select)
{
case 1:circulate();
break;
case 0:cout<<""<<endl;
system("pause");
return 0;
break;
default:
break;
}
}
system("pause");
return 0;
}
