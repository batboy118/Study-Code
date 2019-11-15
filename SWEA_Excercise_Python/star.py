# print ("1번 for")
# for i in range(1,5):
#     print("*" * i)
#
# print ("1번 while")
# i=1;
# while i<=4:
#     print("*" * i)
#     i = i+1
#
# print ("2번 for")
# for i in range(1,3):
#     for k in range(1,5):
#         print("*" * k)
#
# print ("2번 while")
# i, k=1, 1;
# while i<=2:
#     while k <= 4:
#         print("*" * k)
#         k=k+1
#     i=i+1
#     k=1


print ("3번 while")
i, k=5, 1;
while i>=0:
    print("{0}{1}".format(" "*i,"*"*(2*k-1)))
    i=i-1
    k=k+1
