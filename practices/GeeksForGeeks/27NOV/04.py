def xor_1_to_n(n):
    if n % 4 == 0:
        return n
    if n % 4 == 1:
        return 1
    if n % 4 == 2:
        return n + 1
    return 0

def subsetXOR(n):
    total = xor_1_to_n(n)
    need = total ^ n
    
    # Case 1: Already equal
    if need == 0:
        return list(range(1, n+1))
    
    # Case 2: Remove 1 number
    if 1 <= need <= n:
        return [x for x in range(1, n+1) if x != need]
    
    # Case 3: Remove 2 numbers
    for a in range(1, n+1):
        b = a ^ need
        if a < b and 1 <= b <= n:
            return [x for x in range(1, n+1) if x != a and x != b]
    
    # Should never happen for the constraints
    return []
def main():
    subsetXOR(6)
