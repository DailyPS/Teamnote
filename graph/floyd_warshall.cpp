int cost[MAX] = { INITIALIZED BY INF };

for (int k = 0; k < n; k++) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (cost[i][j] > cost[i][k] + cost[k][j])
        cost[i][j] = cost[i][k] + cost[k][j];
    }
  }
}