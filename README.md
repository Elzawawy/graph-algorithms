# GraphAlgorithms

<p align='center'><img src="https://miro.medium.com/max/2560/1*dtmsuTMqRvYzkUCS25tLDA.jpeg"/></p>

This repository contains a C++ implementation of some of the Graph Algorithms: Minimum spanning tree (Prim's Algorithm) &amp; Shortest Path Finding (Dijkstra’s Algorithm). 

This team (me and [@oswidan97](https://github.com/oswidan97)) work was developed as assignment for Data Structures & Algorithms Course Spring 2018 offering at CCE department, Faculty of Engineering, Alexandria University.

## Overview & goals

- The **main goal** is to become familiar with the graph data structure, its algorithms and applications.

- A **Graph** is a non-empty finite set V of elements called vertices together with a possibly empty set E of pairs of vertices called edges G(V,E). 

- A **weighted graph** is a graph, in which each edge has a weight (some real number). 

- **Weight of a Graph** is the sum of the weights of all edges.

- A **Minimum Spanning Tree** in an undirected connected weighted graph is a spanning tree of minimum weight (among all spanning trees). The minimum spanning tree may not be unique. However,
if the weights of all the edges are pairwise distinct, it is indeed unique.

---

## Algorithms Implemented

### Prim's Algorithm

- **Solves the MST (MInimum Spanning Tree)Problem:** Given a connected weighted undirected graph G , design an algorithm that outputs a minimum spanning tree (MST) of G.

- The Prim’s algorithm makes a nature choice of the cut in each iteration – it grows a single tree and adds a light edge in each iteration.

- **Input:** Weighted undirected graph, single source s.

- **Output:** Edges (MST) using Prim’s algorithm starting from s to include all vertices.

<p align='center'> <img src="https://www.dotnetlovers.com/Images/PrimsAlgorithmforMinimumSpanningTreeMST120201934156AM.png"/></p>

### Dijkstra's Algorithm

- **Solves the Shortest Path Finding Problem:** The shortest path between two vertices is a path with the shortest length (weight).

- In particular, the Dijkstra’s algorithm is a solution to the single-source shortest path problem in graph theory, and solves for both directed and undirected graphs.

- Constraints:
  - All edges must have nonnegative weights.
  - Graph must be connected.
  
- **Input:** Weighted directed graph with positive edge weights, single source s.

- **Output:** the distance of a shortest path from the source vertex to every other vertex in the directed graph using Dijkstra’s algorithm.

<p align='center'> <img src="https://www.researchgate.net/profile/Mohammed_Al-Ebadi/publication/271518595/figure/fig1/AS:360670886416384@1463002048984/a-Network-topology-b-Steps-of-Dijkstra-algorithm.png"/></p>

## References

*1. [Minimum Spanning Tree (MST) using Prim’s Algorithm Tutorial, Used the figure.](https://www.dotnetlovers.com/article/232/minimum-spanning-tree-mst-using-prims-algorithm)*

*2.[A New Hardware Architecture for Parallel Shortest Path Searching Processor Based-on FPGA Technology, Used the figure.](https://www.researchgate.net/figure/a-Network-topology-b-Steps-of-Dijkstra-algorithm_fig1_271518595)*

---

<h3 align='center'>Made with :heart:</h3>
