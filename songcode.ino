void setup() {
  // put your setup code here, to run once:

int C5 = 523;
int output = 13;
int D5 = 587;
int B5 = 988;
int A5 = 880;
int F4 = 370;
int D4 = 294;
int E4 = 330;
int G4 = 392;

int whole = 2222;
int half = 1111;
int dotquarter = 834;
int quarter = 556;
int sixteenth = 139;
int eighth = 278;

int miniDelay = 10;

noTone (output);
delay (half);
delay(miniDelay);

noTone (output);
delay (eighth);
delay(miniDelay);

tone (output, B5);
delay (eighth);
noTone(output);
delay(miniDelay);

tone (output, B5);    
delay (sixteenth);
noTone(output);
delay(miniDelay);

tone (output, B5);    
delay (sixteenth);
noTone(output);
delay(miniDelay);

tone (output, D5);
delay (quarter);
noTone(output);
delay(miniDelay);

tone (output, B5);
delay (quarter);
noTone(output);
delay(miniDelay);

noTone (output);
delay (half);
delay(miniDelay);

noTone (output);
delay (eight);
delay(miniDelay);

tone (output, B5);
delay (eighth);
noTone(output);
delay(miniDelay);

tone (output, B5);    
delay (sixteenth);
noTone(output);
delay(miniDelay);

tone (output, B5);    
delay (sixteenth);
noTone(output);
delay(miniDelay);

tone (output, D5);
delay (sixteenth/4);
noTone(output);
delay(miniDelay);

tone (output, B5);    
delay (sixteenth/4);
noTone(output);
delay(miniDelay);

tone (output, B5);    
delay (sixteenth/4);
noTone(output);
delay(miniDelay);

tone (output, B5);    
delay (sixteenth/4);
noTone(output);
delay(miniDelay);


}

void loop() {
  // put your main code here, to run repeatedly:

}
