#include <stdio.h>
int p1[1010], p2[1000100][3], p3[1010][1010], p4[1010][1010];
void S(int *a, int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}
int T(int p, int r)
{
int x=p2[r][2], i=p-1, j=p, t;
for(;j<r; j++)
if(p2[j][2]>=x)
for(++i,t=-1; ++t<3; S(&p2[i][t],&p2[j][t]));
for(t=-1; ++t<3; S(&p2[i+1][t],&p2[r][t]));
return i+1;
}
void Q(int p, int r)
{
int q;
if(p<r)
{
q=T(p,r);
Q(p,q-1);
Q(q+1,r);
}
}
int main()
{
int u, v, nv, ne, j, k, l, i, w, u1, v1;
for(i=!scanf("%d %d",&nv,&ne); i<nv; i++)
for(j=0; j++<nv; p4[i][j-1]=-!(p3[i][j-1]=0));
for(j=0; j++<nv; p4[j-1][0]=j-1);
for(i=0; i++<ne; scanf("%d %d %d",&p2[i-1][0],&p2[i-1][1],&p2[i-1][2]));
for(Q(j=0,--i-1); j++<nv; p1[j-1]=j-1);
for(j=0; j<i; j++)
if(p1[u1=p2[j][0]]!=p1[v1=p2[j][1]] )
{
for(u=(p1[u1]<p1[v1])?p1[u1]:p1[v1],v=(p1[u1]<p1[v1])?p1[v1]:p1[u1],k=0; p4[u][k]!=-1; k++)
for(l=-1; p4[v][++l]!=-1; p3[p4[u][k]][p4[v][l]]=p3[p4[v][l]][p4[u][k]]=p2[j][2],p1[p4[v][l]]=p1[p4[u][k]]);
for(l=0; p4[v][l]!=-1; p4[u][k++]=p4[v][l++]);
}
for(j=0; j++<nv; printf("\n"))
for(k=0; k<nv; printf("%d ",p3[j-1][k++]));
return 0;
}
