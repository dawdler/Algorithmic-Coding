#include<iostream>
using namespace std;

int main()
{
int vp,vd,t,f,c;
int dis_p=0,dis_d=0,count=0;
int new_t;

cin>>vp>>vd>>t>>f>>c;
if(vp>=vd) { cout<<count; return 0; }
//distance travelled by princess in t hrs
dis_p=vp*t;
if(dis_p>=c) { cout<<count; return 0; }
while(dis_p<c) {
	/*	dis_p+=vp;
		dis_d+=vd;
		if(dis_d>dis_p) {//if dragon overtakes the princess then she will put the trap
				++count;
			dis_d=0;
			dis_p+=vp*f;
			

			}*/
new_t=dis_p/(vd-vp);
if((dis_p*new_t)>=c) { cout<<count; return 0; }
	else { dis_p=dis_p*new_t; ++count; } 
dis_p+=vp*f;
}
cout<<count<<endl;

return 0;
		

}
		
		

