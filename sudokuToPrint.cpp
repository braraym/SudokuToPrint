#include <iostream>
#include <string>

using namespace std;

int main()
{
	string c;
	cout << "#=================#=================#=================#" << endl;
	for(int y = 0; y <= 8; y++)
	{
		getline(cin, c);
		cout << "H     |     |     H     |     |     H     |     |     H" << endl;
		cout << "H  " << c[0] << "  |  " << c[1] << "  |  " << c[2] << "  H  " << c[3] << "  |  " << c[4] << "  |  " << c[5] << "  H  " << c[6] << "  |  " << c[7] << "  |  " << c[8] << "  H" << endl;
		cout << "H     |     |     H     |     |     H     |     |     H" << endl;

		if(y%3 == 2)
			cout << "#=================#=================#=================#" << endl;
		else
			cout << "#-----+-----+-----+-----+-----+-----+-----+-----+-----#" << endl;
	}
	return 0;
}
