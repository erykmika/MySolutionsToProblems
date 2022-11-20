# Implement a function that receives two IPv4 addresses, and returns the number
# of addresses between them (including the first one, excluding the last one).
# All inputs will be valid IPv4 addresses in the form of strings. The last address
# will always be greater than the first one.

def calculate_ipv4_value(address):
    nums = address.split('.')
    sum = 0
    for i in range(4):
        sum += int(nums[i]) * (256 ** (3 - i))
    return sum


def ips_between(start, end):
    return (calculate_ipv4_value(end) - calculate_ipv4_value(start))
