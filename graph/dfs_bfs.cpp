#define MAX 100005

bool visited[MAX];
vector<int> g[MAX];
queue<int> q;

void dfs(int start) {
  visited[start] = true;

  for (auto& i : g[start]) {
    if (!visited[i]) {
      visited[i] = true;
      dfs(start);
    }
  }
}

void bfs(int start) {
  queue.push(start);
  visited[start];

  while(!q.empty()) {
    int now = q.front();
    q.pop();

    for (auto& i : g[now]) {
      if (!visited[i]) {
        visited[i] = true;
        q.push(i);
      }
    }
  }
}