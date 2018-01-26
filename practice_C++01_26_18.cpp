
/* practice_C++01_18_18*/
#include<iostream>
#include<string>

using namespace std;

/*
signed long long int q;
signed long long int qq;
signed long long int qFactorial (signed long long int = q  ){
  qq = q;
  if( q > 1 ) {
  	q = qFactorial(q - 1);
  }
  else if ( q = 1);
    cout << qq <<"! = " << q << '\n';
    return q;
  	
  else if (q < 0 ){
  	cout << "Error: Negative value entered. Please try again.\n";
  	;}
}  
*/

void printerSucks (void) {
    cout<< "I'm a parameterless function, thus I always map from the void to this string";
  }

string c(const string& a, const string& b) { // I made it bc this reminds me of R
  return a + b;
}
/*
auto c( int a, int b) 
{
  int array = [a, b];
  return array
} 
*/
double add (double A, double b){ // Remember functions have to come b4 int main()
  double r;
  r = A + b;
  cout<< A << " + " << b << " = " << r;
  cout << '\n';
  return r;
 }

template <class T, class t>
T add2(T a, t b) {
  T result;
  result = a + b;
  cout <<  result << '\n';
  return result;
}





int main() {
	std::cout<<"Nic's a cutie!\n";
	std::cout<<"I'm a C++ program.\n";
	std::cout<<"I'm looking forward to being shown to Nic! <3~<3\n";
	int beta = 12;
	int alpha = 14;
	const float pi = 3.1415;
	double result;
	result = pi * alpha * beta;
	std:cout<< result << '\n';
	string mystringycheese;
	mystringycheese = "Stringy cheesy goodness!";
	string cumOverBabi;
	cumOverBabi = "Come on over, come on over BayBey";
	std::cout << cumOverBabi << '\n';
	std::cout<< "(pi * pi /2) * beta(1)" << '\n' ;
	std::cout << (pi * pi /2) * beta << '\n';
	double DpiDbeta = 2 * pi / 2;
	std::cout << 
	"The derivitive of y = beta * (pi^2)/2 with respect to beta is approximately ";
	std::cout<< DpiDbeta << '\n';
	std::cout << "What is beta(1)?"<< '\n';
	std::cout << "what does this do?\n";


	/* a>b ? a : b      // evaluates to whichever is greater, a or b.   */

	double r = 1.0; // radius as a float
 	double circleArea = pi * r * r;
 	double circleDiam = pi * 2 * r ; 
	std::cout<< "The diameter of a circle with radius 1 is ";
	std::cout<< circleDiam << '\n';
	int x = 0;
	int i;
	float f = 3.14;
	i = (int) f; 
	// C style type casting, analogous to coersion in R, like int to numeric etc
  std::cout << i<< '\n';
  int a = 1LL;
  int n;
  for ( int n = 0; n < 5; ++n) {
  a = a * (a+1); }

  std::cout<< a << '\n' ;
  int l = 0;
  do {
  	l += 1;
  } 
  while (l < 100, l < 50, l < 15);  // just to see if I can chain conditions w/o a problem
  // it works!! :)
  std::cout<< l << '\n';

 
  n = 0;
  for( n; n < 500; ++n) {
  n *= n+1;
  if(n >= 400) {
  	cout<< "Too many loops. Stop!\n";
  	break;  // did this just to work with the break statement
  }
  } 
  cout<< n << '\n';
  float n2 = 1.25; //had to change from n -> n2 bc it won't let me redeclare n, as a new type or as the same type (for different reasons I think)
for(int i = 0; n2 < 450; ++i) {
  n2 += (n2 * n2)/(2 *n2);
  if(n2>=400) continue;
  std::cout << n2 << '\n';
} // did this to work with the continue statement, also to test if I can redeclare a variable
// no I cant; oh well :)


/* interesting
// goto loop example
#include <iostream>
using namespace std;

int main ()
{
  int n=10;
mylabel:
  cout << n << ", ";
  n--;
  if (n>0) goto mylabel;
  cout << "liftoff!\n";
}
from: http://www.cplusplus.com/doc/tutorial/control/
*/

// skipped switch ex


  add(3.1415, 70.0 );
 
 // qFactorial(5);

    
  add2(pi, alpha);
  add2(alpha, pi);

  int ray [500] = {}; 
  int e = 0;
  for (int i = 0; i < 500; ++i) {
    ray [i] = i + 1;
    std::cout << ray[i] << '\n' ;
  }
  


  int one, two;
  int * onep, * twop;
  onep = &one;
  *onep = 1000;
  twop = &two;
  *twop = 14;
  std::cout << "The value I pointed to first ever (explicitly) is " << one << '\n';
  std::cout << "The second value I pointed to is " << two << '\n';
  std::cout << "The value of the first pointer I assigned is " << onep << '\n';
  std::cout << "The value of the second pointer I assigned is " << twop << '\n';


/* couldn't get this function working right :( ; I wanted to overload the function so I could throw all versions at the top of a script and just run em. I'm just lazy that way I guess. XD
  int alphbeta;
  alphbeta =  c(alpha, beta);
  cout << alphbeta; 
*/
  cout << '\n';
  return 0;
}
 