class Vertex():
    def __init__(self, vertex):
        self.vertex = vertex
        self.color = "white"
        self.parent = None
        self.level = 0
        self.d = None
        self.f = None

    def __repr__(self) -> str:
        return self.vertex

class DirectedAdjacencyList():
    def __init__(self, verticies):
        self.adj = {vertex: [] for vertex in verticies}

    def add_edge(self, u, v):
        self.adj[u].append(v)

class UndirectedAdjacencyList():
    def __init__(self, verticies):
        self.adj = {vertex: [] for vertex in verticies}

    def add_edge(self, u, v):
        self.adj[u].append(v)
        self.adj[v].append(u)

class WeightedDirectedAdjacencyList():
    def __init__(self, verticies):
        self.adj = {vertex: [()] for vertex in verticies}

    def add_edge(self, u, v, w):
        self.adj[u].append((v, w))

class WeightedUndirectedAdjacencyList():
    def __init__(self, verticies):
        self.adj = {vertex: [()] for vertex in verticies}

    def add_edge(self, u, v, w):
        self.adj[u].append((v, w))
        self.adj[v].append((u, w))


"""
def main():
    vertices = [Vertex("A"), Vertex("B"), Vertex("C"), Vertex("D")]

    adjaceneyList = DirectedAdjacencyList(vertices)
    adjaceneyList.add_edge(vertices[0], vertices[1])
    adjaceneyList.add_edge(vertices[2], vertices[1])
    adjaceneyList.add_edge(vertices[0], vertices[2])
    adjaceneyList.add_edge(vertices[1], vertices[3])

    print(adjaceneyList.adj)


main()"""