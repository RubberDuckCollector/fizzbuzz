function main() {
  let msg = "";
  for (let i = 1; i < 101; i++) {
    if (i % 5 == 0 && i % 3 == 0) {
      msg = "FizzBuzz";
    } else if (i % 5 == 0) {
      msg = "Buzz";
    } else if (i % 3 == 0) {
      msg = "Fizz";
    } else {
      msg = i.toString();
    }

    console.log(`${i}: ${msg}`);
  }
}
main();
