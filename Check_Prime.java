public class Check_Prime {

    public static int checkPrime(int n) {
        int count = 0;
        int sqrtN = (int) Math.sqrt(n);

        for (int i = 1; i <= sqrtN; ++i) {
            if (n % i == 0) {
                    count++;
                if (i != n / i) count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        int n = 12;
        int ans = checkPrime(n);
        if(ans == 2){
            System.out.println("Prime");
        }else{
            System.out.println("Not Prime");
        }
    }
}
