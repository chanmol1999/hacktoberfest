def primesieve(n):
    primelst = [0 for i in range(n)]
    for i in range(3, n):
        if i % 2 != 0:
            primelst[i] = 1
    primelst[2] = 1
    for i in range(3, n):
        if primelst[i] == 1:
            for j in range(i*i, n, i):
                primelst[j] = 0
    return primelst



if __name__ == "__main__":
    l,h  = map(int, (input().split(" ")))
    list_p = primesieve(10**6)
    c_up = list_p[:h]
    c_lo = list_p[:l]
    print(sum(c_up) - sum(c_lo))

    
