#include <iostream>

using namespace std;

void vietHoa(string &str) {
	for (int i = 0; i < str.size(); i++) 
		if (str[i] >= 'a' && str[i] <= 'z') 
			str[i] -= 32;		
}

int main() {
	string s;
	cin >> s;
	vietHoa(s);
	cout << s;
	return 0;
}