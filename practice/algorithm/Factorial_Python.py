# Date:2016-10-10
# Author Cla
# Description:factorial by recursion & tail recursion
class Factorial():
    def __init__(self, n):
        self.n = n

    def factorial_by_recursion(self, n):
        if n == 0:
            return 0
        if n == 1:
            return 1
        if n > 1:
            return n * self.factorial_by_recursion(n - 1)

    def factorial_by_tail_recursion(self, n, a):
        if n == 0:
            return 0
        if n == 1:
            return a
        if n > 1:
            return self.factorial_by_tail_recursion(n - 1, n * a)


fr = Factorial(10)
print(fr.factorial_by_recursion(10))
print(fr.factorial_by_tail_recursion(20, 1))
