public class Numbers_of_Ones_bit_191 {

    public static int OneBit(int n){
        int count = 0;

        while(n != 0){
            int digit = n & 1;
            if(digit == 1){
                count++;
            }
            n = n >> 1;
        }
        return count;
    }

    public static void main(String[] args) {
        int n = 128;
        int ans = OneBit(n);
        System.out.println(ans);
    }
}
