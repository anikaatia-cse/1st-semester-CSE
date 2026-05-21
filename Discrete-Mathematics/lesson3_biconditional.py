# DISCRETE_MATHEMATICS
# Biconditional (p<->q)
# Meaning of Variables:
# p = You get a 4.0 GPA this semester.
# q = Your parents buy you a new laptop.

# STEP 1: Truth Value Inputs
p = True
q = False

# STEP 2: Checking the Biconditional
# A biconditional statement is ONLY true if both p and q have the same truth value (both true or both false). In all other cases, it is false.
if p == q:
    p_iff_q = True   # The logic holds TRUE because they match!
                     # (True, True) -> Both happened, promise kept!
                     # (False, False) -> Neither happened, Fair deal!
else:
    p_iff_q = False  # The logic is FALSE because they do not match!
                     # (True, False) -> Got GPA, but no laptop, Promise broken!
                     # (False, True) -> No GPA, but got laptop anyway, Promise broken!

# STEP 3: Print the result
print("Does the biconditional (p<->q) hold True?")
print(p_iff_q)                    