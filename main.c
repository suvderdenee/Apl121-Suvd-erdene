#include <stdio.h>

int main (void) {
    double hours, rate, salary, DailyHours, MaxHours;
    double DeductionPercent;
    double NetSalary;
    int MaxDay;
    
    hours = 0;

printf("Өдөр | Ажилласан цаг\n");
printf("----------------------\n");

MaxHours = -1;
MaxDay = 0;

for (int day = 1; day <=7; day++) {
    printf("%d -р өдрийн ажилласан цаг\n", day);
    scanf("%lf", &DailyHours );
    while (DailyHours < 0 || DailyHours > 24) {
        printf("Ажилласан цаг 0–24 хооронд байх ёстой.\n");
        scanf("%lf", &DailyHours);
    }
    if (DailyHours > MaxHours){
        MaxHours = DailyHours;
        MaxDay = day;
    }
printf ("%d | %.2f\n", day, DailyHours);
hours = hours + DailyHours;

}
printf("7 хоногт нийт ажилласан цаг: %.2f\n", hours);
printf("Хамгийн их ажилласан өдөр: %d\n", MaxDay);
printf("Тухайн өдрийн ажилласан цаг: %2f\n", MaxHours);

printf("Цагийн хөлс\n");
scanf("%lf", &rate);
if(hours > 40){ 
    salary = 40 * rate + (hours - 40 ) * rate * 1.5;
} else {

salary = hours * rate;
}

printf("Нийт цалин: %.2f\n", salary);
printf("Суутгалын хувь оруулна уу: ");
scanf("%lf", &DeductionPercent);
NetSalary = salary - salary * DeductionPercent / 100;

printf("Гар дээр ирэх цалин: %.2lf\n", NetSalary);

    return 0;
}