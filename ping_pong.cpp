#include<iostream>
using namespace std;

int main()
{
int path[101][101];
int input[101][1];
	int n;
	int no_relation=0;
	int a,b,op;
	for(int i=0;i<101;++i) 
	for(int j=0;j<101;++j) cin>>path[i][j];
cin>>n;
	for(int i=1;i<=n;++i) {
		cin>>op>>a>>b;
	if(op==1) { //add the interval
		cout<<"I m here\n"<<endl;
		no_relation++;
    		input[no_relation][0]=a;
		input[no_relation][1]=b;

for( int k=1;k<no_relation;++k) {
 
if((input[k][0]>input[no_relation][0] && input[k][0]<input[no_relation][1]) || (input[k][1]>input[no_relation][0] && input[k][1]<input[no_relation][1])) {
		path[no_relation][k]=path[k][no_relation]=1;
					
							
	}
}
//check for transivity
	
	
	for(int d=1;d<=no_relation;++d) 
			for(int e=1;e<=no_relation;++e) 
				for(int f=0;f<=no_relation;++f) 
					if(path[e][d] && path[d][f])
						path[e][f]=1;
			
		
	
}
		if(op==2) { //check whether path exists okr not
			cout<<"I m here\n";
				if(path[a][b]) cout<<"YES\n";
			else cout<<"NO\n";
	}
	}
return 0;
}
			
