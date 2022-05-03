n = int(input())
p = int(input())
count = 0


arr = []
  
for i in range(n):
      
    # Append an empty sublist inside the list
    arr.append([])
    x = i+2
    for j in range(i+2, i+4):
        arr[i].append(j)
print(arr)
# if abs(n-p) < abs(1-p):
#     i = n
#     while i >= 1:
#         if i % 2 == 0:
#             if i == p or i+1 == p:
#                 break
#             else: count+=1 
#         else:
#             if i == p or i - 1 == p:
#                 break 
#             else: count+=1 
#         i-=2
# else:
#     i = 1  
#     while i <= n:
#         if i % 2 == 0:
#             if i == p or i+1 == p:
#                 break
#             else: count+=1 
#         else:
#             if i == p or i - 1 == p:
#                 break 
#             else: count+=1 
#         i+=2

# print(count)
