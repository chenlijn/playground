
def product(*nums, scale=1):
    p = scale
    for n in nums:
        p *= n
    return p


def authorize(quote, **speaker_info):
    print('>', quote)
    print('-'*(len(quote) + 2))
    for k, v in speaker_info.items():
        print(k, v, sep=": ")

if __name__=='__main__':

    info = {'sonnet': 18,
            'line': 1,
            'author': 'Shakespear'}

    x = 3
    foo = 'fighter'
    y = 4
    bar = 'bell'
    z = 5

    print("{z}^2 = {x}^2 + {y}^2".format(x=x, y=y, z=z))
    print("keys: {z}^2 = {x}^2 + {y}^2".format(**locals()))



