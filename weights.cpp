#include<iostream>

using namespace std;
#define MAX 1001

int main()
{
string list;
cin>>list;
//cout<<list<<endl;
int m;
int i=0,previous=-1;
int count=0;
int result[MAX]={0};
int left=0,right=0;
cin>>m;
//cout<<m<<endl;
int a=0,b=0;
int flag=0;
int temp=list[i]-'0';

while(1) {  
while(temp!=1) { 
if(i>9) i=0;
++i;	
temp=list[i]-'0';
//cout<<"I m here1\n";
}
//put in left pan
temp=list[i]-'0';
if(previous!=(i+1) && left+(i+1)>right) { 
left+=(i+1);
result[a++]=(i+1);
previous=(i+1);
++count;
if(count==m) { flag=1; cout<<"YES";break; }
}
else   { 
	cout<<"NO"<<endl;
	flag=0;
	break;
	} 
i++;
temp=list[i]-'0';
//for right pan
while(temp!=1) { 
if(i>9) i=0;	
++i;
temp=list[i]-'0';
	}
i++;
temp=list[i]-'0';
if(previous!=i && right+i>left) { 
	right+=i;
	result[a++]=i;
	previous=i;
	++count;
	if(count==m) {  flag=1; cout<<"YES"<<endl;break; }
	}
else  { 
	cout<<"NO"<<endl;
	flag=0;
	break;
	}
i++;
temp=list[i]-'0';
}
if(flag) { 
//	cout<<"YES"<<endl;
	for(int i=0;i<m;++i) cout<<result[i]<<" ";
	}
return 0;
} 
