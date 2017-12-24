const int IN1 = 7;
const int IN2 = 6;
const int ENA = 9;

void setup(){
    // put your setup code here, to run once:
    pinMode(ENA, OUTPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
}

void loop(){
    // put your main code here, to run repeatedly:
    /**
    * 
    */
    analogWrite(ENA, 255);
    /**
    * Parameter - HIGH, LOW
    * HIGH or LOW determines the current rotates in. Controls the direction of the electricity flow.
    * Parameter - IN1, IN2
    * Sets what pin it's digitally writing to.
    * 
    */
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    //Delay the spin by 1000 milliseconds
    delay(1000);
 }
