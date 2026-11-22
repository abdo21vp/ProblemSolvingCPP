# Last updated: 11/22/2026, 9:48:15 AM
class Solution:
    def plusOne(self, digits: list[int]) -> list[int]:
        number = 0
        for x in range(0, (len(digits))):
            number += digits[x] * pow(10, (len(digits) - x - 1))
        number += 1
        digits = []
        for x in range(0, int(len(str(number)))):
            digits.append(int(str(number)[x]))
        return digits
