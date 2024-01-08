def main()
  msg = ""
  for i in 1..101
    if i % 5 == 0 && i % 3 == 0
      msg = "FizzBuzz"
    elsif i % 5 == 0
      msg = "Buzz"
    elsif i % 3 == 0
      msg = "Fizz"
    else
    msg = i.to_s()
    end
    puts "#{i}: #{msg}"
  end
end

main()
