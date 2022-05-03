def subset_sum(numbers, target, total,partial=[]):
    s = sum(partial)
    # check if the partial sum is equals to target
    if s == target: 
        total += 1
        # print("sum(%s)=%s" % (partial, target))
    if s >= target:
        return  # if we reach the number why bother to continue

    for i in range(len(numbers)):
        n = numbers[i]
        # remaining = numbers[i+1:]
        subset_sum(numbers, target, total, partial + [n]) 

N = int(input())
if __name__ == "__main__":
    # total = 0
    subset_sum([1,2,3,4,5,6,7,8,9,10],N, total, partial=[])
    print(total)
