#include <iostream>

using namespace std;

#define V 4

int graph[V][V] = {
    {0,1,1,1},
    {1,0,1,0},
    {1,1,0,1},
    {1,0,1,0}
};

int color[V];

bool isSafe(int node, int c)
{
    for (int i = 0; i < V; i++)
    {
        if (graph[node][i] && color[i] == c)
        {
            return false;
        }
    }

    return true;
}

bool solve(int node, int m)
{
    if (node == V)
        return true;

    for (int c = 1; c <= m; c++)
    {
        if (isSafe(node, c))
        {
            color[node] = c;

            if (solve(node + 1, m))
                return true;

            color[node] = 0;
        }
    }

    return false;
}

int main()
{
    int m = 3;

    if (solve(0, m))
    {
        for (int i = 0; i < V; i++)
        {
            cout << "Vertex " << i
                 << " -> Color "
                 << color[i] << endl;
        }
    }
    else
    {
        cout << "No Solution";
    }

    return 0;
}