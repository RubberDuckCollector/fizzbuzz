fn main() {
    for i in 1..101 {
        if i % 5 == 0 && i % 3 == 0 {
            println!("{i}: FizzBuzz")
        } else if i % 5 == 0 {
            println!("{i}: Buzz")
        } else if i % 3 == 0 {
            println!("{i}: Fizz")
        } else {
            println!("{i}: {i}");
        }
    }
}
