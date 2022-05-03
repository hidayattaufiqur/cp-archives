d1, d2, d3 = map(int, input().split())

first = (d1 + d2) * 2
second = d1 + d2 + d3
third = (d1+d3) * 2
fourth = (d2+d3) * 2

list = []

list.append(first)
list.append(second)
list.append(third)
list.append(fourth)

print(min(list))
# print(list)


# if first <= second <= third <= fourth:
#     print(first)
# elif second <= first <= third <= fourth:
#     print(second)
# elif third <= first <= second <= fourth:
#     print(third)
# elif fourth <= first <= second <= fourth:
#     print(second)

# if d3 >= d1 + d2:
#     print((d1*2) + (d2*2))
# elif d3 <= d1 + d2:
#     print((d1) + (d3) + (d2))
# elif d3 >= d1 and d3 <= d2:
#     print((d1*2) + (d2) + (d3) + (d1))
# elif d3 <= d1 and d3 >= d2:
#     print((d2*2) + (d1) + (d3) + (d2))