# DISCRETE_MATHEMATICS
# Implication (p->q) 
# Meaning of Variables:
# p = You get a 4.0 GPA this semester.
# q = Your parents buy you a new laptop.

# STEP 1: Truth Value Inputs
p = True  # You get a 4.0 GPA this semester.
q = False  # Your parents buy you a new laptop.

# STEP 2: Checking the Implication
# A  conditional statement is ONLY false if p is true and q is false. In all other cases, it is true.
if p == True and q == False:
    p_implies_q = False   # You got the GPA but NO laptop, Promise broken!
else:
    p_implies_q = True    # You got the GPA and the laptop, promise kept!
                          # No GPA but got the laptop anyway, promise kept!
                          # No GPA and no laptop, Total fairness!

# STEP 3: Print the result
print("Does the implication (p->q) hold True?")  
print(p_implies_q)             