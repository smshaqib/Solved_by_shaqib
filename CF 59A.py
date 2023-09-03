s = input()

c = 0

for i in s:
  if i>='a' and i<='z':
    c+=1

if c>= (len(s)-c):
  print(s.lower())
else:
  print(s.upper())
