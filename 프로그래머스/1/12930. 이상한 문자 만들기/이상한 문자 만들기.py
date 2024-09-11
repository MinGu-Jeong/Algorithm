def solution(s):
    answer = ''
    words = s.split(' ')
    for idx,word in enumerate(words):
        for i in range(0,len(word)):
            if i%2!=0:
                answer+=word[i].lower()
            else:
                answer+=word[i].upper()
        if idx != len(words)-1:
            answer+=' '
    return answer