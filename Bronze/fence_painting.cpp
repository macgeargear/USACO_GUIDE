#include <iostream>
using namespace std;

int main() {
	freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);

	int a,b,c,d;
	cin >> a >> b >> c >> d;

	int total = (b-a) + (d-c);
	int interesct = max(min(b,d) - max(a,c), 0); // subtract the interesction
	int ans = total - interesct;
	cout << ans << "\n";

	// a b
	// 7 10
	// c d
	// 4 8
	// 6
}
