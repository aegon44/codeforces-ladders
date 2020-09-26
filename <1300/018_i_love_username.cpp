#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, max , min, points, amazings;
    cin >> n >> max;
    amazings = 0;
    min = max;
    while(--n)
    {
        cin >> points;
        if(max < points)
        {
            max = points;
            amazings++;
        }
        if(min > points)
        {
            min = points;
            amazings++;
        }
    }
    cout << amazings << '\n';
    return 0;
}