# include <iostream>
# include <string>
# include <cstdio>
# include <cstring>
# include <queue>
using namespace std;
 
int Input;
bool exist[20000];
int parent[20000];
char digit[20000];
char buffer[51];
 
int main(int argc, char const *argv[])
{
    int N,remainder,current;
        cin >> N;
        for (int i = 0; i < N; i++)
        {
                cin >> Input;
                queue <int> Queue;
                memset(exist,0,sizeof(exist));
                if (Input == 1)
                {
                        cout << "1" << endl;
                        continue;
                }
                parent[1] = -1;
                digit[1] = '1';
                exist[1] = true;
                Queue.push(1);
                while (!Queue.empty())
                {
                        current = Queue.front();
                        Queue.pop();
                        remainder = current * 10;
                        remainder %= Input;
                        if(!exist[remainder])
                        {
                                exist[remainder] = true;
                                parent[remainder] = current;
                                digit[remainder] = '0';
                                if(remainder==0) break;
                                Queue.push (remainder);
                        }
                        remainder++;
                        remainder %= Input;
                        if(!exist[remainder])
                        {
                                exist[remainder] = true;
                                parent[remainder] = current;
                                digit[remainder] = '1';
                                if(remainder==0) break;
                                Queue.push (remainder);
                        }
                }
                int len = 0;
                current = 0;
                while(true)
                {
                        buffer[len++] = digit[current];
                        if(parent[current] >= 0)
                                current = parent[current];
                        else break;
                }
                while((--len)>=0)
                {
                        cout << buffer[len];
                }
                cout << endl;
        }
        return 0;
}
