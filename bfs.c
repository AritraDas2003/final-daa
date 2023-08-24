#include <stdio.h>
#include <conio.h>

int a[20][20], q[20], visited[20], n, i, j, f = -1, r = -1; // front ,rare 

void bfs(int v) 
{
    printf("%4d", v);
    visited[v] = 1; //starting vertex visit kora hoye gache
    q[++r] = v;  // Add the current vertex to the queue from back
    while (f <= r) // que er moddhe thake 
    {
        v = q[f++];  // Dequeue a vertex

        for (i = 1; i <= n; i++) 
        {
            if (a[v][i] == 1 && visited[i] != 1) 
            {
                printf("%4d", i); // i take print kore dao
                visited[i] = 1; // oi jonno i take 1 kore dilo
                q[++r] = i;  // Enqueue the adjacent vertices if not visited
            }
        }
    }
}

int main() {
    int v;
    printf("\n Enter the number of vertices:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        q[i] = 0; // age thekke faka kore holo
        visited[i] = 0;
    }
    printf("\n Enter graph data in matrix form:\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    printf("\n Enter the starting vertex:");
    scanf("%d", &v);
    printf("\n The nodes which are reachable are:\n");
    bfs(v);
    // for (i = 1; i <= n; i++) {
    //     if (visited[i] == 1)
    //         printf("%d\t", i);
    // }
    printf("\n");
return 0;
}