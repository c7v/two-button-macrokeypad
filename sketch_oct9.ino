#include <TrinketHidCombo.h>

#define PIN_BTN_A 0
#define PIN_BTN_B 2

uint8_t btn_state[2];

void setup()
{
  pinMode(PIN_BTN_A, INPUT_PULLUP);
  pinMode(PIN_BTN_B, INPUT_PULLUP);
  btn_state[0]=0;
  btn_state[1]=0;

  TrinketHidCombo.begin();
}

void loop()
{
  uint32_t now = millis();
  
  uint8_t do_some[2]={0};

  //Read btn A once
  if(!digitalRead(PIN_BTN_A) && btn_state[0]==0)
  {
          do_some[0]=1;
          btn_state[0]=1;
  }
  if(digitalRead(PIN_BTN_A) && btn_state[0]==1)
  {
          btn_state[0]=0;
  }

  //Read btn B once
  if(!digitalRead(PIN_BTN_B) && btn_state[1]==0)
  {
          do_some[1]=1;
          btn_state[1]=1;
  }
  if(digitalRead(PIN_BTN_B) && btn_state[1]==1)
  {
          btn_state[1]=0;
  }

  if (do_some[0] && do_some[1])
  {
    TrinketHidCombo.pressKey(KEYCODE_MOD_LEFT_CONTROL, KEYCODE_A);
  } else {
   if (do_some[0])
    {
       TrinketHidCombo.pressKey(KEYCODE_MOD_LEFT_CONTROL, KEYCODE_C);
    }

    if (do_some[1])
    {
      TrinketHidCombo.pressKey(KEYCODE_MOD_LEFT_CONTROL, KEYCODE_V);
    }
  }
  
  TrinketHidCombo.pressKey(0, 0);
  TrinketHidCombo.poll();
  delay(100);
}
