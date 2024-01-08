main = function ()
  local msg = ""
  for i = 1, 100 do
    if i % 5 == 0 and i % 3 == 0 then
      msg = "FizzBuzz"
    elseif i % 5 == 0 then
      msg = "Buzz"
    elseif i % 3 == 0 then
      msg = "Fizz"
    else
      msg = tostring(i)
    end
    print(i .. ": " .. msg)
  end
end

main()
