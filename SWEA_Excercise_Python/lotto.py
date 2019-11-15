# -*- coding : utf-8 -*-

import random


def input_start():
    star=0
    try:
        start=int(input("로또 번호의 시작번호를 입력하세요 (기본값:1 ): "))
    except:
        start=1
    finally:
        return start

def input_end():
    end=0
    try:
        end=int(input("로또 번호의 끝 번호를 입력하세요 (기본값:45 ): "))
    except:
        end=45
    finally:
        return end

def input_count():
    count=0
    try:
        count=int(input("뽑을 로또 공의 수를 입력하세요 (기본값:6 ): "))
    except:
        count=6
    finally:
        return count

def print_lotto(start, end, count, loop) :

    for j in range (1, loop+1):
        print("%d번째 행운의 로또 번호는 " %j, end="")
        lotto = random.sample(range(start, end + 1, 1), count)
        # print(sorted(lotto),end="")  => [있음]
        for i, num in enumerate(sorted(lotto)):
            if i==len(lotto)-1:
                print("{0}".format(num),end=" ")            else:
                print("{0},".format(num), end=" ")
        print("입니다.")

def how_many_lotto():
    loop = 0
    try:
        loop = int(input("몇 개의 번호 조합을 출력할지 입력하세요 (기본값:1 ): "))
    except:
        loop = 1
    finally:
        return loop