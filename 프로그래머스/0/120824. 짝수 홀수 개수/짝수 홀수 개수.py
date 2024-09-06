def solution(num_list):
    answer = []
    even = sum(1 for num in num_list if num%2 == 0)
    odd = sum(1 for num in num_list if num%2 != 0)
    answer.append(even)
    answer.append(odd)
    return answer