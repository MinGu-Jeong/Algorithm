def solution(n):
    answer = 0
    s_n = str(n)
    sort_n = ''.join(sorted(s_n, reverse=True))
    answer = int(sort_n)
    return answer