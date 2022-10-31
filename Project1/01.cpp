#include <iostream>
using namespace std;
#include<string>;
//{<< "1 2 3 4" <<
//	
//	system("pause");
//
//	return 0;
//
//} //include <iostream> // allows program to perform input and output
//
//#include <iostream> // allows program to perform input and output
//using namespace std; // program uses names from the std namespace
//
//int main()
//{
//	cout << "1 2 3 4" << endl;// write your code here
//	cout << "1 2 3 4" << endl;
//cout << "1 2 3 4" << endl;
//	system("pause");
//
//	return 0;
//  end main
//int main()
//{
//	int a, b,c;
/*	cin >> a >> b;
    
	if (a != b)
	{
		if (a > b)
			c = a;
		else
			c = b;

		cout << c << " is larger" << endl;
		
	}
	else 
	cout << "These numbers are equal." << endl;
	
	system("pause");
	return 0;

		*}
 /*class gradebook
{
public:
	void displaymessage()
	{
		cout << "welcome to the grade book." << endl;
	}

};
int main (){
	gradebook mygradebook;
	mygradebook.displaymessage();
	
	system("pause");
	return 0;
}*/
//#include<string>
//int main() {//×Ö·û´®
//	char str[] = "helloworld";
//	cout << str << endl;
//	string str1 = "hellpworld";
//	cout << str1 << endl;
//	system("pause ");
//		return 0;
//}








//int a, b;
//class rectangle {
//private:
//	int l, w;
//public:
//	int area()
//	{
//		cin >> l >> w;
//		return (l * w);
//
//	}
//
//};
//int main()
//{
//	rectangle t;
//	cout << t.area() << endl;
//	system("pause");
//	return 0;
//}
//class sum
//{
//public:
//	int s()
//	{
//		int a, b;
//		cin >> a >> b;
//		return a + b;
//	}
//};




//int main()
//{
//	sum t;
//	cout << t.s() << endl;
//	system("pause");
//	return 0;
//}
//class Animal
//{
//public:
//    int age;
//    string name, extra;
//    string showName()
//    {
//        return name;
//    }
//    int showAge()
//    {
//        return age;
//    }
//    string showExtra()
//    {
//        return extra;
//    }
//    int setAge(){
//    }
//};
//    int main()
//    {
//        int age;
//        string name, extra;
//        cin >> name >> age >> extra;
//        Animal animal(name, age, extra);
//        cout << animal.showName() << endl;
//        cout << animal.showAge() << endl;
//        cout << animal.showExtra() << endl;
//        cin >> name >> age >> extra;
//        animal.setAge(age);
//        animal.setName(name);
//        animal.setExtra(extra);
//        cout << animal.showName() << endl;
//        cout << animal.showAge() << endl;
//        cout << animal.showExtra() << endl;
//    }



//int main()
//{
//	double x;
//	x = 3.14159;
//	int a;
//	cin >> a;
//	cout << "Diameter is " << 2 * a << endl;
//	cout << "Circumference is " << 2 * x * a << endl;
//	cout << "Area is " <<  x * a * a << endl;
//	system("pause");
//		return 0;
//}
//int main()
//{
//	int a, b, c, d, f;
//	cin >> a >> b >> c >> d >> f;
//
//	int x = max(max(max(max(a, b), c), d), f);
//	int y = min(min(min(min(a, b), c), d), f);
//	cout << "Largest is " << x << endl;
//	cout << "Smallest is " << y << endl;
//	system("pause");
//	return 0;
//}



//
//class Animal
//{
//public:
//	int age;
//	string name, extra;
//	void set(string a, int b, string c) {
//		name = a;
//		age = b;
//		extra = c;
//	}
//	
//	string showName() {
//		return name;
//	}
//	int showAge() {
//		return age;
//	}
//	string showExtra() {
//		return extra;
//	}
//	void setAge(int a) {
//		age = a;
//	}
//	void setName(string n) {
//		name = n;
//	}
//	void setExtra(string e)
//	{
//		extra = e;
//	}
//	
//
//	
//};
//int main()
//{
//	int age;
//	string name, extra;
//	cin >> name >> age >> extra;
//	Animal animal;
//	animal.set(name, age, extra);
//	cout << animal.showName() << endl;
//	cout << animal.showAge() << endl;
//	cout << animal.showExtra() << endl;
//	cin >> name >> age >> extra;
//	animal.setAge(age);
//	animal.setName(name);
//	animal.setExtra(extra);
//	cout << animal.showName() << endl;
//	cout << animal.showAge() << endl;
//	cout << animal.showExtra() << endl;
//	system("pause");
//	return  0;
//}

//class Clock
//{
//private:
//	int hour, minute, second;
//public:
//	Clock(int h, int m, int s)
//	{
//		hour = h;
//		minute = m;
//		second = s;
//	}
//	void showin24()
//	{
//		cout << hour << ":" << minute << ":" << second << endl;
//	}
//	void showin12()
//	{
//		if (hour > 12)
//			hour = hour - 12;
//		else
//			hour = hour;
//		cout << hour << ":" << minute << ":" << second << endl;
//
//	}
//};
//int main() {
//	int hour, minute, second;
//	cin >> hour >> minute >> second;
//	Clock clock(hour, minute, second);
//	clock.showin24();
//	clock.showin12();
//	system("pause");
//	return 0;
//}


//class Student
//{
//private:
//	string name1, name2; int s, i;
//public:
//	void set(string a,string b,int c,int d)
//	{
//		name1 = a;
//		name2 = b;
//		i= c;
//		s= d;
//	}
//	void shows(int s)
//	{
//		if (s <= 0)
//			s = 0;
//		else
//			s=s;
//		cout << i << endl;  cout << s << endl;
//
//	}
//	void shown()
//	{
//		cout << name1;cout<< name2 << endl;
//	}
//	void showss() {
//		cout << s * 1.1 << endl;
//	}
//};
//int main()
//{
//	string a, b; int c, d;
//	cin >> a >> b >> c >> d;
//	Student guy;
//	guy.set(a, b, c, d);
//	string x, y; int z, k;
//	cin >> x >> y >> z >> k;
//	Student guy2;
//	guy2.set(x, y, z, k);
//	guy.shown();
//	guy.shows(d);
//	guy2.shown();
//	guy2.shows(k);
//	guy.showss();
//	guy2.showss();
//	system("pause");
//	return 0;
//}	


//int main(){
//	int a[100];
//	int i, max;
//	for (i = 0; i < 100; i++) {
//		cin >> a[i];
//	}
//	for (max = 0, i = 0; i < 100; i++) {
//		if (a[max] < a[i])
//			max = i;
//	}
//
//}

//int main()
//{
//	int a, m, n;
//	a = 0;
//	m = 0; n = 0;
//	while (1) {
//		
//		while (n < 10)
//		{
//			cin >> a;
//			if (a == -1)
//				break;
//			n++;
//			if (a > m)
//				m = a;
//
//		}if (a == -1)
//			break;
//		cout << "Largest is " << m;
//		n = 0;
//		
//	}
//	
//}
		

//int main() {
//	int a = 0; int max = 0; int n = 0;
//	
//	while (1)
//	{
//		cin >> a;
//		n++;
//		if (a > max)
//			max = a;
//		if (n == 10)
//		{
//			cout << "Largest is " << max << endl;
//			n = 0;
//			max = 0;
//		}if (a == -1)
//			break;
//		
//	}
//
//}

//
//int main() {
//	int a = 0; int max = 0; int n = 0;
//	
//	while (1)
//	{
//		cin >> a;
//		n++;
//		if (a > max)
//			max = a;
//		if (n == 10)
//		{
//			cout << "Largest is " << max << endl;
//			n = 0;
//			max = 0;
//		}if (a == -1)
//			break;
//		
//	}
//
//}



//int main() 
//{
//	int a = 1;
//	int t = 2;
//	while (a <= 200)
//	{
//		while (a > t)
//		{
//			if (a % t == 0) {
//				cout << a << endl;
//				t = 2;
//			}
//			t++;
//		}
//		a++;
//		
//	}
//
//
//system("pause");
//		return 0;
//
//
//int main()
//{
//	int j;
//	for (int i=2; i<100;i++)
//	{
//		bool flag = 0;
//		for (j = 2; j <= sqrt(i); j++) {
//			
//			if (i == 2)
//			{
//				break;
//			}
//			if (i % j == 0)
//			{
//				flag = 1;
//				break;
//			}
//			
//			
//		}
//		if (flag == 0)cout << i << endl;
//	}
//}
//
//int main()  {
//	int n;
//	int t;
//	for (int n = 2; n <= 100; n++) {
//
//		bool flag = 0;
//		for (t = 2; t <= sqrt(n); t++) {
//			if (n % t == 0) {
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)cout << n << endl;
//
//
//
//
//}
//
//}
//
//int main() {
//	int n = 2;
//	int t = 2;
//	while(n <= 100) 
//	{
//
//		while(t <=n) {
//			
//			if (n == t ) { cout << n << endl; break; }
//			if (n % t == 0) break;
//			t++;
//		}
//		t = 2;
//
//
//		n++;
//	}
//
//}

//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j << "*" << i << "=" << j * i << "  ";
//		}
//
//		cout << endl;
//	}
//
//
//
//
////}
//int main() {
//	int a, b;
//	cin >> a >> b;
//	if (a % b != 0)
//		cout << a << " is not a multiple of " << b << endl;
//	else cout << a << " is a multiple of " << b;
//	system("pause");
//	return 0;
//
//}
//
//#include <iostream>
//using namespace std;
//
//class Account {
//private:
//    int a = 0;
//    int b = 0;
//public:
//    Account(int c) {
//        a = c;
//    }
//    int debit(int b)
//    {
//        if (a >= b)
//            a = a - b;
//        else
//        {
//            cout << "Debit amount exceeded account balance." << endl;
//            return a;
//        }
//    }
//    int getBalance() {
//        return a;
//    }
//
//};
//
//int main()
//{
//    int initialBalance_1;
//    int initialBalance_2;
//
//    cin >> initialBalance_1 >> initialBalance_2;
//
//    Account account1(initialBalance_1); // create Account object
//    Account account2(initialBalance_2); // create Account object
//
//    int withdrawalAmount; // stores withdrawal amount read from user
//
//    cin >> withdrawalAmount; // obtain user input
//    account1.debit(withdrawalAmount); // try to subtract from account1
//    cout << "account1 balance: $" << account1.getBalance() << endl;
//
//    cin >> withdrawalAmount; // obtain user input
//    account2.debit(withdrawalAmount); // try to subtract from account2
//    cout << "account2 balance: $" << account2.getBalance() << endl;
//} // end main

int main() {
	char a;
	cin >> a;
	cout << a<<"'s integer equivalent is "<<static_cast<int>(a);
}
