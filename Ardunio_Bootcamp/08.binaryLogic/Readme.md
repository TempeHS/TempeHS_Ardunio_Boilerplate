# LOGIC FLOWCHARTS
## IF Statement
![IF Statement](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/08.binaryLogic/if_statement.drawio.png)

    int x = 3;
    if (x == 3) {
        //statement(s)
    }

## IF ELSE Statement
![IF ELSE Statement](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/08.binaryLogic/if_else_statement.drawio.png)

    int x = 3;
    if (x == 3) {
        //true statement(s)
    } else {
        //false statement(s)
    }

## IF IF ELSE ELSE Statement
![IF IF ELSE ELSE Statement](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/08.binaryLogic/if_else_if_statement.drawio.png)

    int x = 3;
    if (x == 3) {
        //true statement(s)
    } else if (x == 2) {
        //true statement(s)
    } else {
        //false statement(s)
    }

## WHILE Statement
![WHILE Statement](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/08.binaryLogic/while_statement.drawio.png)

    int x = 0;
    while (x < 200) {
        // do statement(s) something repetitive 200 times
        x = x + 1;
    }

## DO WHILE Statement
![DO WHILE Statement](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/08.binaryLogic/do_while_statement.drawio.png)

    int x = 0;
    do {
        // do statement(s) something repetitive 200 times
        x = x + 1;
    } while (x < 200);

## FOR Statement
![Tux, the Linux mascot](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/08.binaryLogic/for_statement.drawio.png)

    for (int i = 0; i <= 255; i++) {
        analogWrite(PWMpin, i);
        delay(10);
    }

## FOR EACH Statement
![Tux, the Linux mascot](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/08.binaryLogic/foreach_statement.drawio.png)

    int arr[]={1,2,3,4,5};   //array initialization
    Serial.print("The elements are: ");
    for(int i : arr)
    {
    	Serial.print(i);
        Serial.print(", ");
    }

## SWITCH CASE Statement
![Tux, the Linux mascot](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/08.binaryLogic/switch_case_statement.drawio.png)

int x = random(0, 3);
switch (x) {
  case 1:
    //do something when x equals 1
    break;
  case 2:
    //do something when x equals 2
    break;
  default:
    // if nothing else matches, do the default
    // default is optional
    break;
}