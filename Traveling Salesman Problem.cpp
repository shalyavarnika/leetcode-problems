

#include<bits/stdc++.h>
using namespace std;
int travelling_salesman(int distance[4][4], int start, int size)
{
  int cost=0;
  int visited[4]={0, 0, 0, 0};
  int count=0;
  int i=start;
  while(count<size)
  {
  visited[i]=1;
  int min=INFINITY;
  int pos=-1;
  for(int j=0; j<size; j++)
  {
  if(count == size-1)
  {
  min = distance[i][start];
  }
  else if(distance[i][j] < min && visited[j] == 0 && i!=j)
  {
  min = distance[i][j];
  pos = j;
  }
  }
  count++; visited[pos]=1; cost+=min; i=pos;
  }
  return cost;
}
int main()
{
  int distance[4][4] = {{0, 4, 1, 3}, {4, 0, 2, 1}, {1, 2, 0, 5}, {3, 1, 5, 0} };
  int start;
  cout<<"Enter the starting point: ";
  cin>>start;
  int cost = travelling_salesman(distance, start, 4);
  cout<<"The minimum cost is: "<<cost;
  return 0;
}
