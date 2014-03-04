#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
 
#define MAX 100
 
map<char, int> num;
 
bool mySort(char a, char b)
{
    if(num[a] == num[b])
    {
        return a < b;
    }
    else
    {
        return num[a] > num[b];
    }
}
 
char arr[MAX][MAX];
 
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int n, m;
 
void FloodFill(char letter, int _x, int _y)
{
    if(_x < m && _x >= 0 && _y < n && _y >= 0)
    {
        if(arr[_y][_x] == letter)
        {
            arr[_y][_x] = '?';
            for(int i = 0; i < 4; i++)
            {
                FloodFill(letter, _x + dx[i],  _y + dy[i]);
            }
        }
    }
}
 
int main()
{
    int t;
    cin >> t;
    for(int c = 1; c <= t; c++)
    {
        cin >> n >> m;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
 
        vector<char> languages;
        map<char, bool> langUsed;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(arr[i][j] != '?')
                {
                    if(!langUsed[arr[i][j]])
                    {
                        langUsed[arr[i][j]] = true;
                        num[arr[i][j]] = 0;
                        languages.push_back(arr[i][j]);
                    }
 
                    num[arr[i][j]]++;
                    FloodFill(arr[i][j], j, i);
                }
            }
        }
        sort(languages.begin(), languages.end(), mySort);
        cout << "World #" << c << endl;
        for(int i = 0; i < languages.size(); i++)
        {
            cout << languages[i] << ": " << num[languages[i]] << endl;
        }
    }
    return 0;
}
