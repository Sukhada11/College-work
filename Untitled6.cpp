def addBegin(low,  high,  diff) :

    for i in range (0,diff):
      low = "0" + low;
      high = "0" + high;


      carry = 0;

      for  i in range (len(low)-1, 0,-1):

        sum = low[i] - '0' + high[i] - '0' + carry;
        carry = 0;
        if (sum > 9) :

          sum -= 10;
          carry = 1;
        result =  int(sum)+ result;


    return result;


def add ( a, b):
      a=str(a)
      b=str(b)
      diff = len(a)- len(b);

      if (diff <= 0) :
       return addBegin(a, b, abs(diff));
      else :
       return addBegin(b, a, diff);
