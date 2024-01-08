fn main() {
    for i in 1..=100 {
        match (i % 5, i % 3) {
            (0, 0) => println!("{i}: FizzBuzz"),
            (0, _) => println!("{i}: Buzz"),
            (_, 0) => println!("{i}: Fizz"),
            _ => println!("{i}: {i}"),
        }
    }
}
