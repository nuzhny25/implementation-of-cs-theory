from adjacency_list import Vertex, DirectedAdjacencyList


def BFS(adj, source):
    frontier = [source]
    source.color = "black"
    i = 0

    while frontier: 
        next = []
        print(f"level {i}: {frontier}")
        for u in frontier:
            for v in adj.adj[u]: # where does the alpabetical ordering come into play?
                if v.color == "white":
                    v.color = "black"
                    v.parent = u
                    v.level = i
                    next.append(v)
        frontier = next
        i += 1


def main():
    vertices = [Vertex("a"), Vertex("b"), Vertex("c"), Vertex("d"), Vertex("e"), Vertex("f"), Vertex("g"), Vertex("h")]

    adjaceneyList = DirectedAdjacencyList(vertices)
    adjaceneyList.add_edge(vertices[0], vertices[1])
    adjaceneyList.add_edge(vertices[0], vertices[3])
    adjaceneyList.add_edge(vertices[1], vertices[4])
    adjaceneyList.add_edge(vertices[1], vertices[7])
    adjaceneyList.add_edge(vertices[2], vertices[5])
    adjaceneyList.add_edge(vertices[2], vertices[4])
    adjaceneyList.add_edge(vertices[3], vertices[1])
    adjaceneyList.add_edge(vertices[4], vertices[3])
    adjaceneyList.add_edge(vertices[4], vertices[6])
    adjaceneyList.add_edge(vertices[5], vertices[5])
    adjaceneyList.add_edge(vertices[6], vertices[3])

    BFS(adjaceneyList, vertices[0])

main()
