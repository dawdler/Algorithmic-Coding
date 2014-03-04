#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
char tempx,temp1x;
int sy,ey,sx,ex,count=0;
int temp1,temp2;
cin>>tempx>>sy;
cin>>temp1x>>ey;
sx=(int)tempx;
ex=(int)temp1x;
temp1=sx,temp2=sy;
while(sx!=ex || sy!=ey) {
		if(sx<ex) ++sx;
		if(sx>ex) --sx;
		if(sy<ey) ++sy;
		if(sy>ey) --sy;
	//cout<<endl
++count;
}
cout<<count<<endl;
sx=temp1;
sy=temp2;
while(sx!=ex || sy!=ey) {
		if(sx<ex) ++sx,cout<<"R";
		if(sx>ex) --sx,cout<<"L";
		if(sy<ey) ++sy,cout<<"U";
		if(sy>ey) --sy,cout<<"D";
	cout<<endl;
}

return 0;
}


