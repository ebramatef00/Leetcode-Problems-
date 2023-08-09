class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        prevMap = {}  # Dictionary to store previously seen numbers and their indices

        for i, n in enumerate(nums):
            diff = target - n  # Calculate the difference between the target and the current number

            if diff in prevMap:
                # If the difference is already present, return the indices of the two numbers
                return [prevMap[diff], i]

            prevMap[n] = i  # Add the current number and its index to the dictionary

        return []  # Return an empty list if no solution is found
