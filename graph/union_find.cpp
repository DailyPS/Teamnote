int fi(int a) {
  if (a = parent[a])
    return a;
  
  else
    return parent[a] = find(parent[a]);
}

void uni(int a, int b) {
  a = fi(a);
  b = fi(b);

  if (rank[a] == rank[b]) {
    rank[a]++;
    parent[b] = a;
    return;
  }
  
  if (rank[a] > rank[b]) {
    parent[b] = a;
    return;
  }

  parent[a] = b;
}