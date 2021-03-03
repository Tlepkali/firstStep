#include <iostream>;
#include <cmath>;

using namespace std;

/*
int main()
{
	int L;
	cin >> L;
	cout << L / 100;
}
*/

/*
int main()
{
	int M;
	cin >> M;
	cout << M / 1000;
}
*/

/*
int main()
{
	int B;
	cin >> B;
	cout << B / 1024;
}
*/

/*
int main()
{
	int B,A;
	cin >> A >> B;
	cout << A / B;
}
*/

/*
int main()
{
	int B, A;
	cin >> A >> B;
	cout << A % B;
}
*/

/*
int main()
{
	int B;
	cin >> B;
	cout << B / 10 << " " << B % 10;
}
*/

/*
int main()
{
	int B,a,b;
	cin >> B;
	a = B / 10;
	b = B % 10;
	cout << a + b << " " << a * b;
}
*/

/*
int main()
{
	int B, a, b;
	cin >> B;
	a = B / 10;
	b = B % 10;
	cout << b << a;
}
*/

/*
int main()
{
	int L;
	cin >> L;
	cout << L / 100;
}
*/

/*
int main()
{
	int L;
	cin >> L;
	cout << L % 10 << " " << (L % 100) / 10;
}
*/

/*
int main()
{
	int L;
	cin >> L;
	cout << L % 10 << (L % 100) / 10 << L / 100;
}
*/

/*
int main()
{
	int L;
	cin >> L;
	cout << (L % 100) / 10 << L % 10 << L / 100;
}
*/

/*
int main()
{
	int L;
	cin >> L;
	cout << L % 10 << L / 100 << (L % 100) / 10;
}
*/

/*
int main()
{
	int L;
	cin >> L;
	cout << (L % 100) / 10 << L / 100 << L % 10;
}
*/

/*
int main()
{
	int L;
	cin >> L;
	cout << L / 100 << L % 10 << (L % 100) / 10;
}
*/

/*
int main()
{
	int L;
	cin >> L;
	cout << (L % 1000) / 100;
}
*/

/*
int main()
{
	int L;
	cin >> L;
	cout << L / 1000;
}
*/

/*
int main()
{
	int L;
	cin >> L;
	cout << L / 60;
}
*/

/*
int main()
{
	int L;
	cin >> L;
	cout << L / 3600;
}
*/

/*
int main()
{
	int L;
	cin >> L;
	cout << L % 60;
}
*/

/*
int main()
{
	int L;
	cin >> L;
	cout << L % 3600;
}
*/

/*
int main()
{
	int L;
	cin >> L;
	cout << (L % 3600) / 60;
}
*/

/*
int main()
{
	int K;
	cin >> K;
	cout << K % 7;
}
*/

/*
int main()
{
	int K;
	cin >> K;
	cout << (K + 3) % 7;
}
*/

/*
int main()
{
	int K;
	cin >> K;
	cout << K % 7 + 1;
}
*/


/*
int main()
{
	int K;
	cin >> K;
	cout << (K + 4) % 7 + 1;
}
*/

/*
int main()
{
	int A;
	cin >> A;
	bool result = (A > 0);
	cout << result;
}
*/

/*
int main()
{
	int A;
	cin >> A;
	bool result = (A % 2 != 0);
	cout << result;
}
*/

/*
int main()
{
	int A;
	cin >> A;
	bool result = (A % 2 == 0);
	cout << result;
}
*/

/*
int main()
{
	int A,B;
	cin >> A >> B;
	bool result = (A > 2 && B <= 3);
	cout << result;
}
*/

/*
int main()
{
	int A, B;
	cin >> A >> B;
	bool result = (A >= 0 && B < -2);
	cout << result;
}
*/

/*
int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	bool result = (A < B && B < C);
	cout << result;
}
*/
 
/*
int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	bool result = ((A < B && B < C) || (A > B && B > C));
	cout << result;
}
*/

/*
int main()
{
	int A, B;
	cin >> A >> B;
	bool result = (A % 2 != 0 && B % 2 != 0);
	cout << result;
}
*/

/*
int main()
{
	int A, B;
	cin >> A >> B;
	bool result = (A % 2 != 0 || B % 2 != 0);
	cout << result;
}
*/

/*
int main()
{
	int A, B;
	cin >> A >> B;
	bool result = ((A % 2 != 0 && B % 2 == 0) || B % 2 != 0 && A % 2 == 0);
	cout << result;
}
*/

/*
int main()
{
	int A, B;
	cin >> A >> B;
	bool result = ((A % 2 == 0 && B % 2 == 0) || B % 2 != 0 && A % 2 != 0);
	cout << result;
}
*/

/*
int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	bool result = (A > 0 && B > 0 && C > 0);
	cout << result;
}
*/

/*
int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	bool result = (A > 0 || B > 0 || C > 0);
	cout << result;
}
*/

/*
int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	bool result = ((A > 0 && B <= 0 && C <= 0) || (A <= 0 && B > 0 && C <= 0) || (A <= 0 && B <= 0 && C > 0));
	cout << result;
}
*/

/*
int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	bool result = ((A > 0 && B > 0 && C <= 0) || (A <= 0 && B > 0 && C > 0) || (A > 0 && B <= 0 && C > 0));
	cout << result;
}
*/

/*
int main()
{
	int a;
	cin >> a;
	bool res = (a % 2 == 0 && a / 10 > 0);
	cout << res;
}

*/

/*
int main()
{
	int a;
	cin >> a;
	bool res = (a % 2 != 0 && a / 100 > 0);
	cout << res;
}
*/

/*
int main()
{
	int a, b;
	cin >> a >> b;
	bool res(a % 2 == 1 && b % 2 == 1);
	cout << res;
}
*/

/* 13
int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	bool result = (A > 0 || B > 0 || C > 0);
	cout << result;
}
*/

/* 14
int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	bool result = ((A > 0 && B <= 0 && C <= 0) || (A <= 0 && B > 0 && C <= 0) || (A <= 0 && B <= 0 && C > 0));
	cout << result;
}
*/

/* 15
int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	bool result = ((A > 0 && B > 0 && C <= 0) || (A <= 0 && B > 0 && C > 0) || (A > 0 && B <= 0 && C > 0));
	cout << result;
}
*/

/* 16
int main()
{
	int a;
	cin >> a;
	bool res = (a % 2 == 0 && a / 10 > 0);
	cout << res;
}

*/

/* 17
int main()
{
	int a;
	cin >> a;
	bool res = (a % 2 != 0 && a / 100 > 0);
	cout << res;
}
*/

/* 18
int main()
{
	int a, b;
	cin >> a >> b;
	bool res(a % 2 == 1 && b % 2 == 1);
	cout << res;
}
*/

/* 19
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	bool res(a + b == 0 || b + c == 0 || a + c == 0);
	cout << res;
}
*/

/* 20
int main()
{
	int a,a1,a2,a3;
	cin >> a;
	a1 = a / 100;
	a2 = (a % 100) / 10;
	a3 = a % 10;
	bool res(a1 - a2 != 0 && a2 - a3 != 0 && a3 - a1 != 0);
	cout << res;
}
*/

/* 21
int main()
{
	int a, a1, a2, a3;
	cin >> a;
	a1 = a / 100;
	a2 = (a % 100) / 10;
	a3 = a % 10;
	bool res(a1 < a2 && a2 < a3);
	cout << res;
}
*/
 
/* 22
int main()
{
	int a, a1, a2, a3;
	cin >> a;
	a1 = a / 100;
	a2 = (a % 100) / 10;
	a3 = a % 10;
	bool res(a1 < a2 && a2 < a3 || a1 > a2 && a2 > a3);
	cout << res;
}
*/

/* 23
int main()
{
	int a, a1, a2, a3, a4;
	cin >> a;
	a1 = a / 1000;
	a2 = (a % 1000) / 100;
	a3 = (a % 100) / 10;
	a4 = a % 10;
	bool res(a1 == a4 && a2 == a3);
	cout << res;
}
*/

/* 24
int main()
{
	double a, b, c, D, x1 , x2;
	cin >> a >> b >> c;
	D = pow(b, 2) - 4 * a * c;
	bool res(D >= 0);
	cout << res;
}
*/

/* 25
int main()
{
	double x, y;
	cin >> x >> y;
	bool res(x < 0 && y > 0);
	cout << res;
}
*/

/* 26
int main()
{
	double x, y;
	cin >> x >> y;
	bool res(x > 0 && y < 0);
	cout << res;
}
*/

/* 27
int main()
{
	double x, y;
	cin >> x >> y;
	bool res(x < 0 && y > 0 || x < 0 && y < 0);
	cout << res;
}
*/

/* 28
int main()
{
	double x, y;
	cin >> x >> y;
	bool res(x > 0 && y > 0 || x < 0 && y < 0);
	cout << res;
}
*/

/* if2
int main()
{
	int x;
	cin >> x;
	if (x > 0)
	{
		x++;
	} 
	else {
		x -= 2;
	}
	cout << x;
}
*/

/* if3
int main()
{
	int x;
	cin >> x;
	if (x > 0)
	{
		x++;
	}
	else if (x == 0) {
		x = 10;
	}
	else {
		x -= 2;
	}
	cout << x;
}
*/

/* if4
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	if (x > 0 && y > 0 && z > 0)
	{
		cout << "3";
	}
	else if (x <= 0 && y <= 0 && z <= 0)
	{
		cout << "0";
	}
	else if (x > 0 && y > 0 && z <= 0 || x <= 0 && y > 0 && z > 0 || x > 0 && y <= 0 && z > 0)
	{
		cout << "2";
	}
	else {
		cout << "1";
	}
}
*/

/*
int main()
{
	int x, y, z;
	setlocale(LC_ALL, "Rus");
	cin >> x >> y >> z;
	if (x > 0 && y > 0 && z > 0)
	{
		cout << "3 положительнх и 0 отрицательных числа";
	}
	else if (x <= 0 && y <= 0 && z <= 0)
	{
		cout << "0 положительных и 3 отрицательных числа";
	}
	else if (x > 0 && y > 0 && z <= 0 || x <= 0 && y > 0 && z > 0 || x > 0 && y <= 0 && z > 0)
	{
		cout << "2 положительных и 1 отрицательное число";
	}
	else {
		cout << "1 положительное и 2 отрицательных числа";
	}
}
*/

/*
int main()
{
	int x, y;
	cin >> x >> y;
	if (x > y)
	{
		cout << x;
	}
	else
	{
		cout << y;
	}
}
*/

/*
int main()
{
	int K, N;
	cin >> K >> N;
	for (int i = 0; i < N; i++)
	{
		cout << K;
	}
}
*/


//int main()
//{
//	double A, B, C;
//	cin >> A >> B >> C;
//	if (A >= B && B >= C || C >= B && B >= A)
//	{
//		cout << B;
//	}
//	else if (A <= B && A >= C || C >= A && A >= B)
//	{
//		cout << A;
//	}
//	else if (A == B && A == C)
//	{
//		cout << "A = B = C" << endl << A;
//	}
//	else if (A >= C && C >= B || B >= C && C >= A)
//	{
//		cout << C;
//	}
//}

//int main()
//{
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	if (b == c && c == d)
//	{
//		cout << "1";
//	}
//	else if (a == c && a == d)
//	{
//		cout << "2";
//	}
//	else if (a == b && b == d)
//	{
//		cout << "3";
//	}
//	else
//	{
//		cout << "4";
//	}
//}

//int main()
//{
//	double A, B, C;
//	cin >> A >> B >> C;
//	if (abs(A - B) > abs(A - C))
//	{
//		cout << C << endl << abs(A - C);
//	}
//	else if (abs(A - B) < abs(A - C))
//	{
//		cout << B << endl << abs(A - B);
//	}
//	else
//	{
//		cout << "distance between A and B = dis between A and C";
//	}
//}
// if 21
//int main()
//{
//	int x,y;
//	cin >> x >> y;
//	if (x == 0 && y == 0)
//	{
//		cout << "0";
//	}
//	else if (x == 0 && y != 0)
//	{
//		cout << "1";
//	}
//	else if (y == 0 && x != 0)
//	{
//		cout << "2";
//	}
//	else
//	{
//		cout << "3";
//	}
//}

//int main()
//{
//	double x;
//	cin >> x;
//	if (x > 0)
//	{
//		cout << 2 * sin(x);
//	}
//	else if (x <= 0)
//	{
//		cout << 6 - x;
//	}
//}


//int main()
//{
//	double x;
//	cin >> x;
//	if (x < -2)
//	{
//		cout << 2 * x;
//	}
//	else if (x > 2)
//	{
//		cout << -3 * x;
//	}
//	else
//	{
//		cout << "error";
//	}
//}


//int main()
//{
//	double x;
//	cin >> x;
//	if (x <= 0)
//	{
//		cout << -x;
//	}
//	else if (0 < x && x < 2)
//	{
//		cout << pow(x,2);
//	}
//	else if (x >= 2)
//	{
//		cout << "4";
//	}
//	else
//	{
//		cout << "errorist";
//	}
//}

//int main()
//{
//	double x;
//	cin >> x;
//	if (x < 0)
//	{
//		cout << "0";
//	}
//	else if ((int)x % 2 == 0)
//	{
//		cout << "1";
//	}
//	else if ((int)x % 2 != 0)
//	{
//		cout << "-1";
//	}
//	else
//	{
//		cout << "errorist";
//	}
//}

//int main()
//{
//	int x;
//	cin >> x;
//	if (x % 4 == 0)
//	{
//		if (x % 100 == 0 && x % 400 != 0)
//		{
//			cout << "365";
//		}
//		else
//		{
//			cout << "366";
//		}
//	}
//	else 
//	{
//		cout << "365";
//	}
//}

//int main()
//{
//	int x;
//	cin >> x;
//	if (x < 0)
//	{
//		if (x % 2 == 0)
//		{
//			cout << "even negative";
//		}
//		else
//		{
//			cout << "odd negative";
//		}
//	}
//	else if (x == 0)
//	{
//		cout << "null";
//	}
//	else
//	{
//		if (x % 2 == 0)
//		{
//			cout << "even positive";
//		}
//		else
//		{
//			cout << "odd positive";
//		}
//	}
//}


//int main()
//{
//	int x;
//	cin >> x;
//	if (x % 2 == 0)
//	{
//		if (x / 100 > 0)
//		{
//			cout << "triple digit even";
//		}
//		else if (x / 10 > 0)
//		{
//			cout << "double digit even";
//		}
//		else
//		{
//			cout << "one digit even";
//		}
//	}
//	else
//	{
//		if (x / 100 > 0)
//		{
//			cout << "triple digit odd";
//		}
//		else if (x / 10 > 0)
//		{
//			cout << "double digit odd";
//		}
//		else
//		{
//			cout << "one digit odd";
//		}
//	}
//	}

//int main()
//{
//	int a;
//	cout << "How is your mood in 5 points scale?";
//	TryAgain:
//	cout << "\n1 - Bad	2 - Dissatisfied	3 - Satisfied	4 - Good	5 - Awesome" << endl;
//	cin >> a;
//	switch (a)
//	{
//	case 1:
//		cout << "Bad";
//		break;
//	case 2:
//		cout << "Dissatisfied";
//		break;
//	case 3:
//		cout << "Satisfied";
//		break;
//	case 4:
//		cout << "Good";
//		break;
//	case 5:
//		cout << "Awesome";
//		break;
//	default:
//		cout << "error";
//		goto TryAgain;
//	}
//}
// if 22
//int main()
//{
//	double x, y;
//	cin >> x >> y;
//	if (x > 0 && y > 0)
//		cout << "1";
//	if (x < 0 && y > 0)
//		cout << "2";
//	if (x < 0 && y < 0)
//		cout << "3";
//	if (x > 0 && y < 0)
//			cout << "4";
//}

//int main()
//{
//	int x1, y1, x2, y2, x3, y3,x4,y4;
//	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//	if (x1 == x2)
//		x4 = x3;
//	if (x2 == x3)
//		x4 = x1;
//	if (x3 == x1)
//		x4 = x3;
//	if (y1 = y2)
//		y4 = y3;
//	if (y2 == y3)
//		y4 = y1;
//	if (y3 == y1)
//		y4 = y2;
//	cout << x4 << " " << y4;
//}

//int main()
//{
//	int x1, y1, x2, y2;
//	cin >> x1 >> y1 >> x2 >> y2;
//	bool x1Check = (x1 > 0 && x1 < 9);
//	bool y1Check = (y1 > 0 && y1 < 9);
//	bool x2Check = (x2 > 0 && x2 < 9);
//	bool y2Check = (y2 > 0 && y2 < 9);
//	if (x1Check && y1Check && x2Check && y2Check)
//	{
//		bool res(abs(x1 - x2) < 2 && abs(y1 - y2) < 2);
//		cout << res;
//	}
//	else
//	{
//		cout << "NO!";
//	}
//}

//int main()
//{
//	link:
//	cout << "Choose the operation:" << endl;
//	char symbol;
//	int N;
//	double A, B;
//	cout << "+" << endl;
//	cout << "-" << endl;
//	cout << "*" << endl;
//	cout << "/" << endl;
//	cin >> symbol;
//	cout << "Choose the numbers" << endl;
//	cin >> A >> B;
//	switch (symbol)
//	{
//	case '+':
//		cout << A + B << endl;
//		break;
//	case '-':
//		cout << A - B << endl;
//		break;
//	case '*':
//		cout << A * B << endl;
//		break;
//	case '/':
//		cout << A / B << endl;
//		break;
//	default:
//		cout << "error";
//		goto link;
//		break;
//	}
//}

//int main(
//)
//{
//	cout << "choose the option" << endl;
//	int x;
//	cout << "1 - dm" << endl;
//	cout << "2 - km" << endl;
//	cout << "3 - m" << endl;
//	cout << "4 - mm" << endl;
//	cout << "5 - cm" << endl;
//	cin >> x;
//	double y;
//	cout << "Length:";
//	cin >> y;
//	switch (x)
//	{
//	case 1:
//		cout << y / 10;
//		break;
//	case 2:
//		cout << y * 1000;
//		break;
//	case 3:
//		cout << y;
//		break;
//	case 4:
//		cout << y / 1000;
//		break;
//	case 5:
//		cout << y / 100;
//		break;
//	default:
//		cout << "error";
//		break;
//	}
//}

//int main()
//{
//	cout << "choose the option" << endl;
//	int x;
//	double y;
//	cout << "1 - kg" << endl;
//	cout << "2 - mg" << endl;
//	cout << "3 - g" << endl;
//	cout << "4 - t" << endl;
//	cout << "5 - c" << endl;
//	cin >> x;
//	cout << "Weight" << endl;
//	cin >> y;
//	switch (x)
//	{
//	case 1:
//		cout <<(double) y;
//		break;
//	case 2:
//		cout << (double)y / 1000000;
//		break;
//	case 3:
//		cout << (double)y / 1000;
//		break;
//	case 4:
//		cout << (double)y * 1000;
//		break;
//	case 5:
//		cout << (double)y * 10;
//		break;
//	default:
//		cout << "error";
//		break;
//	}
//}

//int main()
//{
//	cout << "choose the option" << endl;
//	int x,c,n;
//	double y;
//	cout << "1 - N" << endl;
//	cout << "2 - W" << endl;
//	cout << "3 - S" << endl;
//	cout << "4 - E" << endl;
//	cout << "Choose the action:" << endl;
//	cout << "0 - keep action" << endl;
//	cout << "1 - turn left" << endl;
//	cout << "-1 - turn right" << endl;
//	cout << "ishodnoe n" << endl;
//	cin >> n;
//	switch (n)
//	{
//	case 1:
//		cout << "WEST";
//		break;
//	case 0:
//		cout << "NORTH";
//		break;
//	case -1:
//		cout << "EAST";
//		break;
//	default:
//		cout << "error";
//		break;
//	}
//}

//int main()
//{
//	cout << "choose the option" << endl;
//	int x,c,n1,n2;
//	double y;
//	cout << "1 - N" << endl;
//	cout << "2 - W" << endl;
//	cout << "3 - S" << endl;
//	cout << "4 - E" << endl;
//	cout << "Choose the action n1:" << endl;
//	cout << "2 - turn 180 degree" << endl;
//	cout << "1 - turn left" << endl;
//	cout << "-1 - turn right" << endl;
//	cin >> n1;	
//	cout << "Choose the action n2:" << endl;
//	cout << "2 - turn 180 degree" << endl;
//	cout << "1 - turn left" << endl;
//	cout << "-1 - turn right" << endl;
//	cin >> n2;
//	switch (n1)
//	{
//	case 2:
//		if (n2 == 2)
//		{
//		cout << "NORTH";
//		}
//		else if (n2 == 1)
//		{
//			cout << "EAST";
//		}
//		else if (n2 == -1)
//		{
//			cout << "WEST";
//		}
//		else
//		{
//			"error";
//		}
//		break;
//	case 1:
//		if (n2 == 2)
//		{
//			cout << "EAST";
//		}
//		else if (n2 == 1)
//		{
//			cout << "SOUTH";
//		}
//		else if (n2 == -1)
//		{
//			cout << "NORTH";
//		}
//		else
//		{
//			"error";
//		}
//		break;
//	case -1:
//		if (n2 == 2)
//		{
//			cout << "WEST";
//		}
//		else if (n2 == 1)
//		{
//			cout << "NORTH";
//		}
//		else if (n2 == -1)
//		{
//			cout << "SOUTH";
//		}
//		else
//		{
//			"error";
//		}
//	default:
//		cout << "error";
//		break;
//	}
//}


//int main()
//{
//	int a,a1,a2,a3,a4,a5,a6;
//	cin >> a;
//	a1 = a / 100000;
//	a2 = (a % 100000) / 10000;
//	a3 = (a % 10000) / 1000;
//	a4 = (a % 1000) / 100;
//	a5 = (a % 100) / 10;
//	a6 = a % 10;
//	bool res(a1 + a2 + a3 == a4 + a5 + a6);
//	cout << res;
//}
//

//int main()
//{
//	int a, b;
//	char symbol;
//	cin >> a >> b;
//	cin >> symbol;
//	for (int i = 0; i < b; i++)
//	{
//		for (int j = 0; j < a; j++)
//		{
//			cout << symbol;
//		}
//		cout << endl;
//	}
//}
