#define light 13
int nums[26][6]=
{
  {0,1,-1},
  {1,0,0,0,-1},
  {1,0,1,0,-1},
  {1,0,0,-1},
  {0,-1},
  {0,0,1,0,-1},
  {1,1,0,1,-1},
  {0,0,0,0,-1},
  {0,0,-1},
  {0,1,1,1,-1},
  {1,0,1,-1},
  {0,1,0,0,-1},
  {1,1,-1},
  {1,0,-1},
  {1,1,1,-1},
  {0,1,1,0,-1},
  {1,1,0,1,-1},
  {0,1,0,-1},
  {0,0,0,-1},
  {1,-1},
  {0,0,1,-1},
  {0,0,0,1,-1},
  {0,1,1,-1},
  {1,0,0,1,-1},
  {1,0,1,1,-1},
  {1,1,0,0,-1},
};
void Long()
{
  digitalWrite(light,HIGH);
  delay(500);
  digitalWrite(light,LOW);
}
void Short()
{
  digitalWrite(light,HIGH);
  delay(200);
  digitalWrite(light,LOW);
}
String a="NICE";
void setup() {
  // put your setup code here, to run once:
  pinMode(light,OUTPUT);
  digitalWrite(light,LOW);
}
void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<a.length();i++){
    int index;
    index = a[i]-'A';
    int j=0;
    if(index>=0&&index<26){
      while(nums[index][j]!=-1){
        if(nums[index][j] == 1){
          Long();
        }
        else{
          Short();
        }
        j++;
        delay(500);
      }
    }    
  }
}
