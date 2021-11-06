
def swap(a ,b )
  temp = a
  a = b
  b = temp
end

def sort(list, length)
  puts(list)
  i = 0
  swap = 0
  while i < (length - 1) do  
      if list[i] > list[i + 1]
          swap = list[i]
          list[i] = list[i + 1]
          list[i + 1] = swap
          i = 0
      else
          i += 1
      end
  end
  puts(list)

sort([4, -123, 1, 3, 5], 5)

end
