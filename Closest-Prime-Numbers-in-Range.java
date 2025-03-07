class Solution {
    public int[] closestPrimes(int left, int right) {
        boolean[] isPrime = new boolean[right+1];
        Arrays.fill(isPrime,true);
        isPrime[0]=false;
        isPrime[1]=false;
        for(int i=2;i<=right;i++)
            if(isPrime[i]&&(long)i*(long)i<=right)
                for(int j=i*i;j<=right;j+=i)    isPrime[j]=false;
        List<Integer> primes = new ArrayList<Integer>();
        for(int i=left;i<=right;i++)    if(isPrime[i])  primes.add(i);
        if(primes.size()<2) return new int[]{-1,-1};
        if(primes.get(1)-primes.get(0)==2)  return new int[]{primes.get(0),primes.get(1)};
        int mi=1000000,minInd=0,diff;
        for(int i=0;i<primes.size()-1;i++){
            diff=primes.get(i+1)-primes.get(i);
            if(diff<mi){
                mi=diff;
                minInd=i;
            }
        }
        return new int[]{primes.get(minInd),primes.get(minInd+1)};
    }  
}
