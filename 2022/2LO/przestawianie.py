# coding: utf-8
def przestawianie(s):
    t=''
    for i in range(0,len(s)-1,2):
        t=t+s[i+1]+s[i]
    if len(s)%2 !=0:
        t=t+s[len(s)-1]
    return t
    
