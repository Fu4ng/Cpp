#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	while (getline(cin, s)) {
		int result = 0;
		int flag1 = -1, flag2 = 0, flag3 = 0, flag4 = 0, flag5 = 0;
		while (1) {
			flag1 = s.find("h", flag1 + 1);
			if (flag1 == -1)
				break;
			else {
				int pos2 = ((flag1 + 1) > (flag2 + 1)) ? flag1 + 1 : flag2 + 1;
				flag2 = s.find("a", pos2);
				if (flag2 == -1)
					break;
				else {
					int pos3 = ((flag2 + 1) > (flag3 + 1)) ? flag2 + 1 : flag3 + 1;
					flag3 = s.find("p", pos3);
					if (flag3 == -1)
						break;
					else {
						int pos4 = ((flag3 + 1) > (flag4 + 1)) ? flag3 + 1 : flag4 + 1;
						flag4 = s.find("p", pos4);
						if (flag4== -1)
							break;
						else {
							int pos5 = ((flag4 + 1) > (flag5+ 1)) ? flag4 + 1 : flag5 + 1;
							flag5 = s.find("y", pos5);
							if (flag5 == -1)
								break;
							else {
								++result;
							}
						}
					}
				}
			}
		}
		cout << result << endl;
	}
	return 0;
}
