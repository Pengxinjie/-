//方法一：无脑算法

//返回区间[2,n]中有几个质数
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

/*时间复杂度为O（n^2）,用isPrime来辅助的思路不够高效，isPrime的实现也有点多余！*/

//方法二：isPrime函数微调
boolean isPrimePlus(int n)
{
  for(int i=2;i*i<=n;i++)
  {
    if(n%i==0)
      return false;
  }
  return true;
}
/*i根本不需要遍历到n! isPrime的时间复杂度降到了O（sqrt（n））*/

//方法三：高效实现countPrime函数
/*核心思路：与常规思路相反。
首先从2开始，2是个质数，但是任何大于等于2的整数乘以它得到的数都不是质数了；
同样的道理：3也是质数，任何大于等于2的整数乘以它得到的数都不是质数了！*/

//排除法代码的逻辑
int countPrimePlus(int n)
{
  boolean[] isPrim=new boolean [n];
  //将数组初始化成真
  Array.fill(isPrim,true);
  
  for(int i=2;i<n;i++)
  {
    if(isPrim[i])
    {
      //i的倍数就不能是质数了
      for(int j=2*i;j<n;j+=i)
        isPrim[j]=false;
    }
  }
  int count=0;
  for(int i=2;i<n;i++)
  {
    if(isPrim[i])count++;
  }
  return count;
}






