#define MOD 100000007

int power(int a, int n) {
  int ret = 1;

  while(n) {
    if (n % 2) {
      ret = (ret * a) % MOD;
    }

    a = (a * a) % MOD;
    n /= 2;
  }

  return ret;
}