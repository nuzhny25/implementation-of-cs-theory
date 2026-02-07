from adjacency_list import Vertex, DirectedAdjacencyList

time = 0

def DFS_visit(adj, u):
    global time
    time += 1
    u.d = time
    u.color = "gray"

    for v in adj.adj[u]:
        if v.color == "white":
            v.parent = u
            print(f"{u}-->{v}")
            DFS_visit(adj, v)

    u.color = "black"
    time += 1
    u.f = time

def DFS(adj):
    for vertex in adj.adj:
        if vertex.color == "white":
            DFS_visit(adj, vertex)


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

    DFS(adjaceneyList)

main()

