#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,i,j,u,v,n,ne=1;
	int min,mincost=0;
	int visited[10]={0};
	int cost[10][10];
	scanf("%d",&n);
	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
			cost[i][j]=999;
		}
	}
	printf("\n");
	visited[1]=1;
	while(n>ne){
	
	for(i=1,min=999;i<n;i++)
	for(j=1;j<n;j++)
	if(cost[i][j]<min)
	if(visited[i]!=0){
		min=cost[i][j];
		a=u=i;
		b=v=j;
	}
	if(visited[u]==0||visited[v]==0){
		visited[b]=1;
		mincost=min+mincost;
		printf("%d Edge:(%d %d) Cost: %d",++ne,a,b,min);
	}
	cost[a][b]=cost[b][a]=999;
}
	printf("\n Minimun cost=%d",mincost);
	getch();
}
