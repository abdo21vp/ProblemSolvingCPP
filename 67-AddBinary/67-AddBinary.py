# Last updated: 11/22/2026, 9:48:14 AM
class Solution:
    def addBinary(self, a: str, b: str) -> str:
        sumDec = int(a, 2) + int(b, 2)
        sumBin = bin(sumDec)

        return str(sumBin[2:])
