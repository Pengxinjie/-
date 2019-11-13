//方法一：无脑算法

//返回区间(2,n)中有几个质数
int countPrimes(int n)
{
  int count=0;
    for(int i=2;i<n;i++)
    {
      if(isPrime(i))count++;
    }
    return count;
}

//判断整数n是否为质数
boolean isPrime(int n)
{
  for(int i=2;i<n;i++)
  {
    if(n%i==0)
      return false;
  }
  return true;
}

/*时间复杂度为O（n^2）,两个函数都不够高效*/
