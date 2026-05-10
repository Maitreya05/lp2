#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> graph[10];
bool visited[10];

void DFS(int node)
{
    visited[node] = true;
    cout << node << " ";

    for (int next : graph[node])
    {
        if (!visited[next])
        {
            DFS(next);
        }
    }
}

void BFS(int start)
{
    queue<int> q;

    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int next : graph[node])
        {
            if (!visited[next])
            {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main()
{
    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(3);
    graph[2].push_back(4);

    cout << "DFS: ";
    DFS(0);

    for(int i=0;i<10;i++)
        visited[i]=false;

    cout << "\nBFS: ";
    BFS(0);

    return 0;
}