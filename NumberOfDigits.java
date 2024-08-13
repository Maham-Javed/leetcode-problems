public class NumberOfDigits {

    public static void CountNumberOfDigits(int n, int count){
        while(n > 0){
            int lastDigit = n % 10;
            count++;
            n = n/10;
        }
        System.out.println("Number of Digits: " + count);
    }

    public static void main(String[] args) {
        int n = 1235;
        int count = 0;

        CountNumberOfDigits(n, count);
    }
}