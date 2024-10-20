#include<stdio.h>
#include<stdlib.h>

struct graph{
    int v;
    int e;
    int **adj;
};

struct graph *adjmatrixofgraph(){  
    int u,v,i;
    struct graph *g = (struct graph*)malloc(sizeof(struct graph));
    
    if(!g){
        printf("No memory allocated\n");
        return NULL;
    }
    
    printf("Enter number of nodes and edges:\n");
    scanf("%d %d",&g->v,&g->e);
    g->adj = (int **)malloc(g->v *sizeof(int *));
    for(i=0;i<g->v;i++){
        g->adj[i]=(int *)malloc(g->v *sizeof(int));
    }
    for(u=0;u<g->v;u++){
        for(v=0;v<g->v;v++){
            g->adj[u][v]=0;
        }
    }
    printf("Enter node pairs for edges:\n");
    for(i = 0;i<g->e;i++){
        scanf("%d %d",&u,&v);
        g->adj[u][v]=1;
        g->adj[v][u]=1;
    }
    return g;
}
void printgraph(struct graph* g) {
    if (g == NULL) {
        printf("Graph not initialized.\n");
        return;
    }
    printf("Adjacency Matrix:\n");
    for (int i=0;i<g->v;i++) {
        for (int j=0; j<g->v;j++) {
            printf("%d ", g->adj[i][j]);
        }
        printf("\n");
    }
}

int main(){
    struct graph *g=adjmatrixofgraph();
    if(g){
        printf("Graph created successfully!\n");
        printgraph(g);
    }
    return 0;
}