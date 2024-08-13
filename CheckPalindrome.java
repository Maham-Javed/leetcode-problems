public class CheckPalindrome {
    public static void ReverseNumber(int n, int reverseNum){
        int dup = n;

        while(n > 0){
            int lastDigit = n % 10;
            reverseNum = (reverseNum * 10) + lastDigit;
            n = n/10;
        }
        if(dup == reverseNum){
            System.out.println("True");
        }else {
            System.out.println("False");
        }
    }

    public static void main(String[] args) {
        int n = 121;
        int reverseNum = 0;

       ReverseNumber(n, reverseNum);
    }
}
