// #include <iostream>
using namespace std;

int main()
{
  cout << 5 + 7 ;
  return 0;

}

// This modulus is gonna give us the remainder 

#include <iostream>
using namespace std;
int main()
{
  cout << 10 % 3;

  return 0;

}

// Addition first then multiplication
#include <iostream>
using namespace std;
int main()
{
  cout << (4+5) *10;
  return 0 ; 
}

// Store number inside a string and also add 1 to the number
#include <iostream>
using namespace std;
int main()
{
  int wnum = 5 ;
  double dnum = 5.5;
  wnum ++;
  cout << wnum;
  return 0 ; 
}

// store number in a string and also deduct 1 from the number
#include <iostream>
using namespace std;
int main()
{
  int wnum = 5;
  double dnum = 5.5;
  wnum -- ;
  cout << wnum;
  return 0 ;
}

// store number in a string and also add 8 to the number
#include <iostream>
using namespace std;
int main()
{
  int wnum = 5;
  double dnum = 5.5;
  wnum+=8;
  cout << wnum;
  return 0 ;
}

// return division result with only integer
#include <iostream>
using namespace std;
int main()
{
  int wnum = 5;
  double dnum = 5.5;
  cout << 10/3;
  return 0;
}

// return the division with more decimal
#include <iostream>
using namespace std;
int main()
{
  int wnum = 5;
  double dnum = 5.5;
  cout << 10.0/3.0;
  return 0;
}

// import math function
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  // 2 is raised to the 5 power
  cout << pow (2,5);
  return 0;

}

// Using square root in C++
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  cout << sqrt (36);
  return 0 ; 
}

// round the number 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  cout << round (4.3);
  return 0 ; 
}


// round the number up using ceil
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  cout << ceil(4.6);
  return 0; 
}

// round the number down using floor
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  cout << floor(4.6);
  return 0 ;
}

// Taking two input and give us the one that is bigger
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  cout << fmax(3,10);
  return 0;
}