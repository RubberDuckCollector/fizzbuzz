def main():
    msg = ""
    for i in range(1, 101):
        if i % 5 == 0 and i % 3 == 0:
            msg = "FizzBuzz"
        elif i % 5 == 0:
            msg = "Buzz"
        elif i % 3 == 0:
            msg = "Fizz"
        else:
            msg = str(i)

        print(f"{i}: {msg}")


if __name__ == "__main__":
    main()
