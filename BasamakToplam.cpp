#include <iostream>
using namespace std;
int BasamakToplami(int n)
{
	if (n == 0)
		return 0;
	return(n % 10 + BasamakToplami(n / 10));
}
int main()
{
	int num = 12345;
	int sonuc = BasamakToplami(num);
	cout << "Basamaklarin Toplami: " << sonuc;
	
	
	return 0;
}
