import re


s = "aa W 2 R 3g aaa aSDSa  34A"
#print(" ".join(w.capitalize() for w in s.split()))
#print(s.title())


# print(string.capwords("hello worldD"))

print(re.sub(r'(\s[a-z])|(^[a-z])', lambda w: w.group().upper(), s))
