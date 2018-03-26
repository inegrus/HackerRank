
s = str(input())
k = int(input())

def search_subs(sub_str):
    uniq_str = ''
    for i in range(0, len(sub_str)):
        if sub_str[i] not in uniq_str:
            uniq_str += sub_str[i]

    print(uniq_str)

def merge_the_tools(s, k):
    n = len(s)

    poz_str = 0
    for i in range(0, n//k):
        sub_str = s[poz_str : (poz_str + k)]
        search_subs(sub_str)
        poz_str += k

merge_the_tools(s, k)