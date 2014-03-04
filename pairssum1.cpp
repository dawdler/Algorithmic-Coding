    #include<iostream>
    #include<map>
    using namespace std;
    int main()
    {
    int n;
    cin>>n;
    map<int,int>sum;
    int a[n],s;
    for(int i=0;i<n;i++)
    cin>>a[i];
    int max=0;
    for(int i=0;i<n;i++)
    {
    for(int j=i+1;j<n;j++)
    {
    s = a[i]+a[j];
	//cout<<"\nS:"<<s;cout<<"\nSum[s]:"<<sum[s];

    sum[s]++;
//cout<<"\n"<<sum[s]++;

    if(sum[s]>max)
    max = sum[s];
    }
    }
    cout<<max*2;
//cout<<"sum:"<<sum[s]++;
return 0;
    } 
