size = int(input())

def generate_line(middle_letter, nth_letter, length_line):
    result = chr(middle_letter) 
    for j in range(middle_letter + 1, nth_letter + 1):
        result = chr(j) + '-' + result + '-' + chr(j)
    prefix = int((length_line - len(result)) / 2)
    result = prefix * '-' + result + prefix * '-'
    return result

def print_rangoli(size):    
    length_line = 4 * size - 3
    nth_letter = 97 + size - 1

    for i in range(0, size):
        middle_letter = nth_letter - i
        print(generate_line(middle_letter, nth_letter, length_line))
    
    for i in range(size -2, -1, -1):
        middle_letter = nth_letter - i
        print(generate_line(middle_letter, nth_letter, length_line))
    

print_rangoli(size)