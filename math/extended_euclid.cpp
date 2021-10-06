tuple<int, int, int> eea (int a, int b) {
  int s1 = 1, s2 = 0, t1 = 0, t2 = 1, r1 = a, r2 = b, q;
  while (r1 > 0) {
    q = r1 / r2;
    tie(r1, r2) = make_tuple(r2, r1 - q * r2);
    tie(s1, s2) = make_tuple(s2, s1 - q * s2);
    tie(t1, t2) = make_tuple(t2, t1 - q * t2);
  }

  return make_tuple(r1, s1, t1);
}