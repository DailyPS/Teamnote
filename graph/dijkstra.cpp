vector<pair<int, int>> g[MAX];
int cost[MAX] = { INITIALIZED BY INF };

void dijkstra(int start) {
  priority_queue<pair<int, int>> pq;
  pq.push(start, 0);

  while (!pq.empty()) {
    int now_v = pq.front().first;
    int now_cost = -pq.front().second;

    for (auto& i : g[now_v]) {
      int nxt_cost = i.second;

      if (cost[i] > nxt_cost) {
        cost[i] = nxt_cost;
        pq.push(make_pair(i.first, -nxt_cost));
      }
    }
  }
}