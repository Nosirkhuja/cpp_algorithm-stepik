//По данному числу 1<=n<=10^9 найдите максимальное число k, для которого n можно представить как сумму k различных натуральных слагаемых. Выведите в первой строке число k, во второй — k слагаемых.
def main():
    n = int(input())
 
    result, part = [], 1

    while n != 0:
        while part * 2 >= n and part != n:
            part += 1

        result.append(part)
        n -= part

        part += 1

    print(str(len(result)) + '\n' + ' '.join([str(i) for i in result]))


if __name__ == "__main__":
    main()
