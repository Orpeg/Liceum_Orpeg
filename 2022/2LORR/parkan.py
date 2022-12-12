# coding: utf-8
def parkan(s):
    w = ''
    for i in range(0,len(s),2):
        w = w+s[i]
    for i in range(1, len(s),2):
        w = w+s[i]
    return w
    
