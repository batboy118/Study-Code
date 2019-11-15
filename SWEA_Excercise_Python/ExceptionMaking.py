#-*- urf-8 -*-

data_list=list(range(1,11))

print("data_list: {0}".format(data_list))

def input_index():
    try:
        num =int(input("인덱스로 사용할 숫자를 입력하세요: (100:종료)"))
    except ValueError as exception:
        print(exception)
    else:
        return num

while True:
    try :
        num = input_index()
        if num == 100:
            print("프로그램이 종료됩니다.")
            break
        print("[{0}]:{1}".format(num, data_list[num]))

    except IndexError as exception:
        print(exception)
    except ValueError as exception:
        print("{0},{1}".format(type(exception), exception))

    except Exception as exception:
        print(exception)

