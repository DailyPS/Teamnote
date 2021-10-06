#define MAX 100005

deque<int> dq;
vector<int> g[MAX];
bool visited[MAX] = { 0 };

void bfs(int start) {
  dq.push_back(start);
  visited[start] = true;
  
  while(!dq.empty()) {
    int dq_size = dq.size();
    
    while(dq_size) {
      int item = dq.front();
      dq.pop_front();
      
      for (auto& w : g[item]) {
        if ((w == zero_value) && !visited[w]) {
          visited[w] = true;
          dq.push_front(w);
        }
        
        else {
          visited[w] = true;
          dq.push_back(w);
        }
      }
      
      dq_size--;
    }
  }
}