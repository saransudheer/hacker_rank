return_day, return_month, return_year= [int(i) for i in input().strip().split(' ')]
day, month, year = [int(j) for j in input().strip().split(' ')]
if return_year < year:
    print(0)
if return_year == year:
    if return_month == month:
        if return_day <= day:
            print(0)
        else:
            print(15*(return_day-day))
    elif return_month < month:
        print(0)
    else:
        print(500*(return_month-month))
else:
    print(10000)
