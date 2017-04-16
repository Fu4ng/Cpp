#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	while (getline(cin, s)) {
		int h, a, p, k, y;
		h = a = p = k = y = 0;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == 'h')
				++h;
			if (s[i] == 'a')
				if (h) {
					++a;--h;
				}
			if (s[i] == 'p') {
				if (a) {
					++k;
					if (k % 2 == 0) {
						++p; --a;
					}
				}
			}
			if (s[i] == 'y')
				if (p) {
					++y; --p;
				}
		}
		cout << y << endl;
	}
	return 0;
}
