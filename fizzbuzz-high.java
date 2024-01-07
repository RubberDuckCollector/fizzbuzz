class FizzBuzzHigh {

    public static void main(String[] args) {
        for (int i = 1; i <= 9999; i ++) {
            if (i % 5 == 0 && i % 3 == 0) {
                System.out.println("FizzBuzz");
            } else if (i % 5 == 0) {
                System.out.println("Buzzz");
            } else if (i % 3 == 0) {
                System.out.println("Fizz");
            } else {
                System.out.println(Integer.toString(i));
            }
        }
    }
}