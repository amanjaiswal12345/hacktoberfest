#include
#include
using namespace std;
int main()
{
vector primes;
for(int i = 2; i < 1000; i++)
{
if(primes.empty() || primes[primes.size() - 1] % i!= 0)
{
primes.push_back(i);
}
}
for(int i = 0; i < primes.size(); i++)
{
cout << "The " << i + 1 << "st prime number is " << primes[i] << endl;
}
return 0;
}
