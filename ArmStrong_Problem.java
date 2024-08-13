public class ArmStrong_Problem {
    public static void ArmStrongNumber(int n){
        double sum = 0;
        int dup = n;

        while(n > 0) {
            int ld = n % 10;
            sum = sum + Math.pow(ld, 3);
            n = n / 10;
        }
        if(sum == dup){
            System.out.println("True");
        }else {
            System.out.println("False");
        }
    }

    public static void main(String[] args) {
        int n = 153;
        ArmStrongNumber(n);
    }
}
