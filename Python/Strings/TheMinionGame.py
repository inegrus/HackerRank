
string = str(input())

def minion_game(string):
    stuart = 0
    kevin = 0

    vowels = 'AEIOU'
    for i in range(0, len(string)):
        if string[i] in vowels:
            kevin = kevin + len(string) - i
        else:
            stuart = stuart + len(string) - i
    
    if kevin > stuart:
        print('Kevin', kevin)
    elif kevin < stuart:
        print('Stuart', stuart)
    else:
        print('Draw')
    
minion_game(string)