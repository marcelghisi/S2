def rostring(param_1):
	left_trim = param_1.lstrip()
	two_sides_trim = left_trim.rstrip()
	print(two_sides_trim.split()[0])
	first_word = two_sides_trim.split()[0]
	new_array = two_sides_trim.split()
	new_array.pop(0)
	return new_array.append(first_word)

rostring("abc ")