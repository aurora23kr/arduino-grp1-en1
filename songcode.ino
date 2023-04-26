void setup() {
  // put your setup code here, to run once:

int output = 13;
int D5 = 587;
int C5 = 523;
int B5 = 988;
int A5 = 880;
int G4 = 392;
int F4 = 370;
int E4 = 330;
int D4 = 294;

int whole = 2222;
int half = 1111;
int dotquarter = 834;
int quarter = 556;
int eighth = 278;

int miniDelay = 10;

// Line 1

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
delay (eighth);
noTone(output);
delay(miniDelay);

tone (output, B5);    
delay (eighth);
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
delay (eighth);
delay(miniDelay);

tone (output, B5);
delay (eighth);
noTone(output);
delay(miniDelay);

tone (output, B5);    
delay (eighth);
noTone(output);
delay(miniDelay);

tone (output, B5);    
delay (eighth);
noTone(output);
delay(miniDelay);

tone (output, D5);
delay (eighth);
noTone(output);
delay(miniDelay);

tone (output, B5);    
delay (eighth);
noTone(output);
delay(miniDelay);

tone (output, B5);    
delay (eighth);
noTone(output);
delay(miniDelay);

tone (output, B5);    
delay (eighth);
noTone(output);
delay(miniDelay);

 // Line 2

tone (output, E4);
delay (half);
noTone (output);
delay (miniDelay);

noTone (output);
delay (half);
delay(miniDelay);

tone (output, B5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, B5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (quarter);
noTone (output);
delay (miniDelay);

tone (output, B5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, B5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (quarter);
noTone (output);
delay (miniDelay);

tone (output, B5);
delay (quarter);
noTone (output);
delay (miniDelay);

noTone (output);
delay (half);
delay(miniDelay);

// Line 3

noTone (output);
delay (eighth);
delay(miniDelay);

tone (output, B5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, B5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, C5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay(miniDelay);

tone (output, C5);
delay (eighth);
noTone (output);
delay(miniDelay);

tone (output, B5);
delay (eighth);
noTone (output);
delay(miniDelay);

tone (output, A5);
delay (eighth);
noTone (output);
delay(miniDelay);

tone (output, A5);
delay (eighth);
noTone (output);
delay(miniDelay);

tone (output, G4);
delay (eighth);
noTone (output);
delay(miniDelay);

tone (output, G4);
delay (eighth);
noTone (output);
delay(miniDelay);

tone (output, G4);
delay (eighth);
noTone (output);
delay(miniDelay);

tone (output, G4);
delay (eighth);
noTone (output);
delay(miniDelay);

tone (output, A5);
delay (eighth);
noTone (output);
delay(miniDelay);

noTone (output);
delay (quarter);
delay (miniDelay);

// Line 4

noTone (output);
delay (quarter);
delay (miniDelay);

tone (output, D5);
delay (quarter);
noTone (output);
delay (miniDelay);

tone (output, B5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, G4);
delay (quarter);
noTone (output);
delay (miniDelay);

tone (output, A5);
delay (half);
noTone (output);
delay (miniDelay);

noTone (output);
delay (half);
delay (miniDelay);

noTone (output);
delay (eighth);
delay (miniDelay);

tone (output, G4);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, B5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, B5);
delay (quarter);
noTone (output);
delay (miniDelay);

tone (output, G4);
delay (quarter);
noTone (output);
delay (miniDelay);

// Line 5
 
tone (output,A5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output,A5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, G4);
delay (half);
noTone (output);
delay (miniDelay);

tone (output, A5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output,G4);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output,D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output,D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output,D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output,D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output,B5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output,G4);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output,G4);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output,G4);
delay (eighth);
noTone (output);
delay (miniDelay);

// Line 6

tone (output, D5);
delay (quarter);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (quarter);
noTone (output);
delay (miniDelay);

tone (output, F4);
delay (quarter);
noTone (output);
delay (miniDelay);

tone (output, E4);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, E4);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (quarter);
noTone (output);
delay (miniDelay);

tone (output, B5);
delay (quarter);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (quarter);
noTone (output);
delay (miniDelay);

tone (output, E4);
delay (quarter);
noTone (output);
delay (miniDelay);

tone (output, B5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, G4);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (quarter);
noTone (output);
delay (miniDelay);

// Line 7

tone (output, B5);
delay (dotquarter);
noTone (output);
delay (miniDelay);

tone (output, G4);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (quarter);
noTone (output);
delay (miniDelay);

tone (output, F4);
delay (dotquarter);
noTone (output);
delay (miniDelay);

tone (output, E4);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (quarter);
noTone (output);
delay (miniDelay);

// Line 8

tone (output, B5);
delay (quarter);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (quarter);
noTone (output);
delay (miniDelay);

noTone (output);
delay (half);
delay (miniDelay);

noTone (output);
delay (quarter);
delay (miniDelay);

noTone (output);
delay (eighth);
delay (miniDelay);

tone (output, G4);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, B5);
delay (whole);
noTone (output);
delay (miniDelay);

// Line 9

tone (output, A5);
delay (whole);
noTone (output);
delay (miniDelay);

tone (output, G4);
delay (half);
noTone (output);
delay (miniDelay);

noTone (output);
delay (eighth);
delay(miniDelay);

tone (output, D4);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, E4);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, G4);
delay (eighth);
noTone (output);
delay (miniDelay);

noTone (output);
delay (half);
delay(miniDelay);

noTone (output);
delay (quarter);
delay(miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, E4);
delay (eighth);
noTone (output);
delay (miniDelay);

// Line 10

noTone (output);
delay (half);
delay(miniDelay);

noTone (output);
delay (quarter);
delay(miniDelay);

tone (output, D5);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, E4);
delay (eighth);
noTone (output);
delay (miniDelay);

noTone (output);
delay (half);
delay(miniDelay);

noTone (output);
delay (quarter);
delay(miniDelay);

tone (output, B5);
delay (quarter);
noTone (output);
delay (miniDelay);

tone (output, A5);
delay (quarter);
noTone (output);
delay (miniDelay);

tone (output, G4);
delay (eighth);
noTone (output);
delay (miniDelay);

tone (output, E4);
delay (eighth);
noTone (output);
delay (miniDelay);

noTone (output);
delay (half);
delay(miniDelay);

}

void loop() {
  // put your main code here, to run repeatedly:

}
