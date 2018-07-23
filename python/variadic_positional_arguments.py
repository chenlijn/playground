
# accept any number of arguments
def product(*nums):
    p = 1 # scale
    print nums

    for n in nums:
        p *= n
    return p

#variadic keyword arguments
def authorize(quote, **info):
    print quote
    print("-" * (len(quote)+2) )
    for k,v in info.items():
        print(k,v)

if __name__ == "__main__":

    print product(2,3)

    # info = {'sonnet':18, 'line': 1, 'author': 'kan'}

    authorize("test programme", a="hello", b="world")

    print "this is {word} funny!".format(word="so much")

    print "{0} {b} {1} {a} {2}".format("this", "be", "better", a="much", b="should")


    #unpack local variables
    x = 3
    foo = "fighter"
    y = 4
    bar = "bell"
    z = 5

    print("{z}^2 = {x}^2 + {y}^2".format(x=x, y=y, z=z))
    print("{foo}, {bar}".format(**locals()))

    print locals(), globals()





