#include<iostream>
using namespace std;
int main()
{
long long int red,green,blue;
cin>>red>>green>>blue;
if(red==0 && green==0 && blue==0) { cout<<"0"<<endl; return 0; }
long long int count=0;
int div=0;
/*if(red%3==0) ++div;
if(green%3==0) ++div;
if(blue%3==0) ++div;
if(div>=2) {
		


while(red>0 && green>0 && blue>0) {
	--red;
	--green;
	--blue;
	++count;
	}
if(red>=3) count+=red/3;
if(green>=3) count+=green/3;
if(blue>=3) count+=blue/3;
	}
else {
	count+=red/3;
	count+=green/3;
	count+=blue/3;
	red=red%3;
	green=green%3;
	blue=blue%3;
	while(red>0 && green>0 && blue>0) {
        --red;
        --green;
        --blue;
        ++count;
        }

if(red>=3) count+=red/3;
if(green>=3) count+=green/3;
if(blue>=3) count+=blue/3;

}
*/
int flag=0;
while(1)
	{
	if(red>3) { red=red-3; ++count; }
	if(blue>3) {blue=blue-3;++count; }
	if(green>3) { green=green-3; ++count; }
	if(red<=3 && blue<=3 &green<=3)  { flag=1;break; }
	else continue;
}
if(flag==1) {
	while(1) {
		--red;
		--green;
		--blue;
		count+=1;
	if(red==0 || green==0 ||blue==0) break;
	}

}		
cout<<count<<endl;
return 0;
}

