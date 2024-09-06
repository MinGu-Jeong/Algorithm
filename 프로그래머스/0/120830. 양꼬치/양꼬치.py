def solution(n, k):
    answer = 0
    total = 12000*n + 2000*k
    discount = 2000 * (n//10)
    answer = total - discount
    return answer