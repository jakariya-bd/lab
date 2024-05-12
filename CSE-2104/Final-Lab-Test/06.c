#include <stdio.h>
#include <stdlib.h>

// Structure for an adjacency list node
struct AdjListNode {
    int dest;
    struct AdjListNode* next;
};

// Structure for an adjacency list
struct AdjList {
    struct AdjListNode* head;
};

// Structure for a graph
struct Graph {
    int V;
    struct AdjList* array;
};

// Function to create a new adjacency list node
struct AdjListNode* newAdjListNode(int dest) {
    struct AdjListNode* newNode = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

// Function to create a graph with V vertices
struct Graph* createGraph(int V) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;

    // Create an array of adjacency lists. Size of the array will be V
    graph->array = (struct AdjList*)malloc(V * sizeof(struct AdjList));

    // Initialize each adjacency list as empty by making head as NULL
    for (int i = 0; i < V; ++i)
        graph->array[i].head = NULL;

    return graph;
}

// Function to add an edge to an undirected graph
void addEdge(struct Graph* graph, int src, int dest) {
    // Add an edge from src to dest
    struct AdjListNode* newNode = newAdjListNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;

    // Since the graph is undirected, add an edge from dest to src also
    newNode = newAdjListNode(src);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}

// Function to perform Breadth First Search (BFS) on a graph starting from vertex 's'
void BFS(struct Graph* graph, int s) {
    // Array to keep track of visited vertices
    int* visited = (int*)malloc(graph->V * sizeof(int));
    for (int i = 0; i < graph->V; i++)
        visited[i] = 0;

    // Create a queue for BFS
    int queue[graph->V];
    int front = 0, rear = 0;

    // Mark the current node as visited and enqueue it
    visited[s] = 1;
    queue[rear++] = s;

    // Iterate through the queue
    while (front < rear) {
        // Dequeue a vertex from queue and print it
        s = queue[front++];
        printf("%d ", s);

        // Get all adjacent vertices of the dequeued vertex s. If an adjacent vertex has not been visited, then mark it visited and enqueue it.
        struct AdjListNode* pCrawl = graph->array[s].head;
        while (pCrawl) {
            int adjVertex = pCrawl->dest;
            if (!visited[adjVertex]) {
                visited[adjVertex] = 1;
                queue[rear++] = adjVertex;
            }
            pCrawl = pCrawl->next;
        }
    }
    free(visited);
}

// Function to perform Depth First Search (DFS) on a graph starting from vertex 's'
void DFSUtil(struct Graph* graph, int s, int* visited) {
    // Mark the current node as visited and print it
    visited[s] = 1;
    printf("%d ", s);

    // Recur for all the vertices adjacent to this vertex
    struct AdjListNode* pCrawl = graph->array[s].head;
    while (pCrawl) {
        int adjVertex = pCrawl->dest;
        if (!visited[adjVertex])
            DFSUtil(graph, adjVertex, visited);
        pCrawl = pCrawl->next;
    }
}

// Function to perform Depth First Search (DFS) on a graph starting from vertex 's'
void DFS(struct Graph* graph, int s) {
    // Array to keep track of visited vertices
    int* visited = (int*)malloc(graph->V * sizeof(int));
    for (int i = 0; i < graph->V; i++)
        visited[i] = 0;

    // Call the recursive helper function to print DFS traversal
    DFSUtil(graph, s, visited);
    free(visited);
}

int main() {
    int V = 5;
    struct Graph* graph = createGraph(V);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    printf("Breadth First Traversal (starting from vertex 0): ");
    BFS(graph, 0);
    printf("\n");

    printf("Depth First Traversal (starting from vertex 0): ");
    DFS(graph, 0);
    printf("\n");

    return 0;
}
