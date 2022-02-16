// Traveling Salesman Problem (TSP)

// Given a set of cities and distances between every pair of cities, the problem is to find the shortest possible route that visits every city exactly once and returns to the starting point. 
// Consider city 1 as the starting and ending point. Since the route is cyclic, we can consider any point as a starting point.
// Generate all (n-1)! permutations of cities.
// Calculate the cost of every permutation and keep track of the minimum cost permutation.
// Return the permutation with minimum cost.

// Input consider following values:
// { 0, 10, 15, 20 },{ 10, 0, 35, 25 },{ 15, 35, 0, 30 },{ 20, 25, 30, 0 }

#include <stdio.h>
#include <stdbool.h>

int min(int a,int b);
int tsp();
int tsp(int graph[][4],bool v[],int currPos,
            int n, int count, int cost, int ans) {
                if(count==n  &&  graph[currPos][0]>0) {
                    ans=min(ans, cost+graph[currPos][0]);
                    return ans;
                }
                for(int i=0;i<n;i++) {
                if(!v[i] && graph[currPos][i] > 0) {
                    v[i]=true;
                    ans=tsp(graph,v,i,n,count+1, 
                        cost+graph[currPos][i],ans);
                        v[i]=false;
                }
                }
                return ans;
            }
int min(int a,int b) {
    return a > b ? b : a;
}
int main()
{
    int n=4;
    int graph[][4]= {
        { 0,10,15,20 },
        { 10,0,35,25 },
        { 15,35,0,30 },
        { 20,25,30,0 }
    };
    bool v[4];
    for(int i=0; i<n;i++) {
        v[i]=false;
    }
    v[0]=true;
    int ans=100000;
    ans=tsp(graph,v,0,n,1,0,ans);
    printf("%d",ans);
    return 0;
}

// Output : 80
