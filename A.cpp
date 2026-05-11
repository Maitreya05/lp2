#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

struct Node
{
    int x, y, cost;
};

struct Compare
{
    bool operator()(pair<int, Node> a, pair<int, Node> b)
    {
        return a.first > b.first;
    }
};

int heuristic(int x, int y, int gx, int gy)
{
    return abs(gx - x) + abs(gy - y);
}

int main()
{
    priority_queue<pair<int, Node>,
                   vector<pair<int, Node>>,
                   Compare> pq;

    int goalX = 2;
    int goalY = 2;

    pq.push({0, {0, 0, 0}});

    while (!pq.empty())
    {
        Node current = pq.top().second;
        pq.pop();

        cout << "(" << current.x << "," << current.y << ")" << endl;

        if (current.x == goalX && current.y == goalY)
        {
            cout << "Goal Reached";
            break;
        }

        if (current.x + 1 <= goalX)
        {
            int h = heuristic(current.x + 1, current.y, goalX, goalY);

            pq.push({current.cost + h,
                    {current.x + 1, current.y, current.cost + 1}});
        }

        if (current.y + 1 <= goalY)
        {
            int h = heuristic(current.x, current.y + 1, goalX, goalY);

            pq.push({current.cost + h,
                    {current.x, current.y + 1, current.cost + 1}});
        }
    }

    return 0;
}