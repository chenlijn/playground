
#class Counter(object):
#
#    def __init__(self, low, high):
#        self.current = low
#        self.high = high
#
#
#    def __iter__(self):
#        return self
#
#    def __next__(self):
#
#        if self.current > self.high:
#            raise StopIteration
#        else:
#            self.current += 1
#            return self.current-1

class Counter(object):
    def __init__(self, low, high):
        # set class attributes inside the magic method __init__
        # for "inistalise"
        self.current = low
        self.high = high

    def __iter__(self):
        # first magic method to make this object iterable
        return self
        
    def __next__(self):
        # second magic method
        if self.current > self.high:
            raise StopIteration
        else:
            self.current += 1
            return self.current - 1

    def next(self):
        return self.__next__()


if __name__=='__main__':

    for c in Counter(3, 8):
        print c
