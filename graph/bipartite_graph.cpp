#define RED 1
#define BLUE 2
#define MAX 100005

vector<int> g[20005];
queue<int> q;
int visited[20005] = { 0 };

void bfs(int start) {
  int color = RED;

  visited[start] = RED;
  q.push(start);

  while(!q.empty()) {
    int now = q.front();
    q.pop();

    if (visited[now] == RED)
      color = BLUE;

    else
      color = RED;

    for (auto& i : g[start]) {
      if (!visited[i]) {
        visited[i] = color;
        q.push(i);
      }
    }
  }
}

bool check_bipartite() {
  for (int i = 1; i <= vertex_num; i++) {
    for (auto& j : g[i]) {
      if (visited[i] == visited[j])
        return false;
    }
  }

  return true;
}
