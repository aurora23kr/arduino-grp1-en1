void setup() {
  // put your setup code here, to run once:

int C5 = 523;
int output = 13;
int D5 = 587;
int B5 = 988;
int A5 = 880;
int F4# = 370;
int D4 = 294;
int E4 = 330;
int G4 = 392

int whole = 2222;
int half = 1111;
int dotquarter = 834;
int quarter = 556;
int sixteenth = 139;
int eighth = 278;

noTone (output);
delay (2000);

noTone (output);
delay (500);

tone (output, B5);
delay (eighth);

tone (output, B5);
delay (eighth);

tone (output, B5);
delay (eighth);

tone (output, D5);
delay (quarter);

tone (output, B5);
delay (quarter);

noTone (output);
delay (2000);

noTone (output);
delay (500);


}

void loop() {
  // put your main code here, to run repeatedly:

}
