#include <Arduino.h>
#include "DFRobotDFPlayerMini.h"

DFRobotDFPlayerMini myDFPlayer;

const int folderSpeechNumbers = 12;

const int numberSpeechMax = 10;
int numberSpeechValues[numberSpeechMax] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int track_0 = 1;
int track_1 = 2;
int track_2 = 3;
int track_3 = 4;
int track_4 = 5;
int track_5 = 6;
int track_6 = 7;
int track_7 = 8;
int track_8 = 9;
int track_9 = 10;
int track_ein = 11;
int track_elf = 12;
int track_hundert = 13;
int track_sech = 14;
int track_sieb = 15;
int track_tausend = 16;
int track_und = 17;
int track_zehn = 18;
int track_zig = 19;
int track_zwan = 20;
int track_zwoelf = 21;

void playNumber(int number)
{
  int speechCounterCounter = 0;
  if (number > 99999)
  {
    int hunderttausender = (number / 100000) % 10;
    switch (hunderttausender)
    {
    case 1:
      numberSpeechValues[speechCounterCounter] = track_ein;
      break;
    case 2:
      numberSpeechValues[speechCounterCounter] = track_2;
      break;
    case 3:
      numberSpeechValues[speechCounterCounter] = track_3;
      break;
    case 4:
      numberSpeechValues[speechCounterCounter] = track_4;
      break;
    case 5:
      numberSpeechValues[speechCounterCounter] = track_5;
      break;
    case 6:
      numberSpeechValues[speechCounterCounter] = track_6;
      break;
    case 7:
      numberSpeechValues[speechCounterCounter] = track_7;
      break;
    case 8:
      numberSpeechValues[speechCounterCounter] = track_8;
      break;
    case 9:
      numberSpeechValues[speechCounterCounter] = track_9;
      break;
    default:
      break;
    }
    speechCounterCounter = speechCounterCounter + 1;
    numberSpeechValues[speechCounterCounter] = track_hundert;
    speechCounterCounter = speechCounterCounter + 1;
  }
  if (number > 9999)
  {
    int zehntausender = (number / 10000) % 10;
    int tausender = (number / 1000) % 10;
    if (zehntausender == 0)
    {
      switch (tausender)
      {
      case 1:
        numberSpeechValues[speechCounterCounter] = track_ein;
        break;
      case 2:
        numberSpeechValues[speechCounterCounter] = track_2;
        break;
      case 3:
        numberSpeechValues[speechCounterCounter] = track_3;
        break;
      case 4:
        numberSpeechValues[speechCounterCounter] = track_4;
        break;
      case 5:
        numberSpeechValues[speechCounterCounter] = track_5;
        break;
      case 6:
        numberSpeechValues[speechCounterCounter] = track_6;
        break;
      case 7:
        numberSpeechValues[speechCounterCounter] = track_7;
        break;
      case 8:
        numberSpeechValues[speechCounterCounter] = track_8;
        break;
      case 9:
        numberSpeechValues[speechCounterCounter] = track_9;
        break;
      default:
        break;
      }
    }
    else if (zehntausender == 1 && tausender == 1)
    {
      numberSpeechValues[speechCounterCounter] = track_elf;
    }
    else if (zehntausender == 1 && tausender == 2)
    {
      numberSpeechValues[speechCounterCounter] = track_zwoelf;
    }
    else if (zehntausender == 1)
    {
      switch (tausender)
      {
      case 3:
        numberSpeechValues[speechCounterCounter] = track_2;
        speechCounterCounter = speechCounterCounter + 1;
        numberSpeechValues[speechCounterCounter] = track_zehn;
        break;
      case 4:
        numberSpeechValues[speechCounterCounter] = track_3;
        speechCounterCounter = speechCounterCounter + 1;
        numberSpeechValues[speechCounterCounter] = track_zehn;
        break;
      case 5:
        numberSpeechValues[speechCounterCounter] = track_4;
        speechCounterCounter = speechCounterCounter + 1;
        numberSpeechValues[speechCounterCounter] = track_zehn;
        break;
      case 6:
        numberSpeechValues[speechCounterCounter] = track_5;
        speechCounterCounter = speechCounterCounter + 1;
        numberSpeechValues[speechCounterCounter] = track_zehn;
        break;
      case 7:
        numberSpeechValues[speechCounterCounter] = track_6;
        speechCounterCounter = speechCounterCounter + 1;
        numberSpeechValues[speechCounterCounter] = track_zehn;
        break;
      case 8:
        numberSpeechValues[speechCounterCounter] = track_7;
        speechCounterCounter = speechCounterCounter + 1;
        numberSpeechValues[speechCounterCounter] = track_zehn;
        break;
      case 9:
        numberSpeechValues[speechCounterCounter] = track_8;
        speechCounterCounter = speechCounterCounter + 1;
        numberSpeechValues[speechCounterCounter] = track_zehn;
        break;
      default:
        break;
      }
    }
    else if (tausender == 0)
    {
      switch (zehntausender)
      {
      case 2:
        numberSpeechValues[speechCounterCounter] = track_zwan;
        break;
      case 3:
        numberSpeechValues[speechCounterCounter] = track_2;
        break;
      case 4:
        numberSpeechValues[speechCounterCounter] = track_3;
        break;
      case 5:
        numberSpeechValues[speechCounterCounter] = track_4;
        break;
      case 6:
        numberSpeechValues[speechCounterCounter] = track_sech;
        break;
      case 7:
        numberSpeechValues[speechCounterCounter] = track_sieb;
        break;
      case 8:
        numberSpeechValues[speechCounterCounter] = track_7;
        break;
      case 9:
        numberSpeechValues[speechCounterCounter] = track_8;
        break;
      default:
        break;
      }
      speechCounterCounter = speechCounterCounter + 1;
      numberSpeechValues[speechCounterCounter] = track_zig;
    }
    else
    {
      switch (tausender)
      {
      case 1:
        numberSpeechValues[speechCounterCounter] = track_ein;
        break;
      case 2:
        numberSpeechValues[speechCounterCounter] = track_2;
        break;
      case 3:
        numberSpeechValues[speechCounterCounter] = track_3;
        break;
      case 4:
        numberSpeechValues[speechCounterCounter] = track_4;
        break;
      case 5:
        numberSpeechValues[speechCounterCounter] = track_5;
        break;
      case 6:
        numberSpeechValues[speechCounterCounter] = track_6;
        break;
      case 7:
        numberSpeechValues[speechCounterCounter] = track_7;
        break;
      case 8:
        numberSpeechValues[speechCounterCounter] = track_8;
        break;
      case 9:
        numberSpeechValues[speechCounterCounter] = track_9;
        break;
      default:
        break;
      }
      speechCounterCounter = speechCounterCounter + 1;
      numberSpeechValues[speechCounterCounter] = track_und;
      switch (zehntausender)
      {
      case 2:
        numberSpeechValues[speechCounterCounter] = track_zwan;
        break;
      case 3:
        numberSpeechValues[speechCounterCounter] = track_2;
        break;
      case 4:
        numberSpeechValues[speechCounterCounter] = track_3;
        break;
      case 5:
        numberSpeechValues[speechCounterCounter] = track_4;
        break;
      case 6:
        numberSpeechValues[speechCounterCounter] = track_sech;
        break;
      case 7:
        numberSpeechValues[speechCounterCounter] = track_sieb;
        break;
      case 8:
        numberSpeechValues[speechCounterCounter] = track_7;
        break;
      case 9:
        numberSpeechValues[speechCounterCounter] = track_8;
        break;
      default:
        break;
      }
      speechCounterCounter = speechCounterCounter + 1;
      numberSpeechValues[speechCounterCounter] = track_zig;
    }
    speechCounterCounter = speechCounterCounter + 1;
  }
  else if (number > 999)
  {
    int tausender = (number / 1000) % 10;
    switch (tausender)
    {
    case 1:
      numberSpeechValues[speechCounterCounter] = track_ein;
      break;
    case 2:
      numberSpeechValues[speechCounterCounter] = track_2;
      break;
    case 3:
      numberSpeechValues[speechCounterCounter] = track_3;
      break;
    case 4:
      numberSpeechValues[speechCounterCounter] = track_4;
      break;
    case 5:
      numberSpeechValues[speechCounterCounter] = track_5;
      break;
    case 6:
      numberSpeechValues[speechCounterCounter] = track_6;
      break;
    case 7:
      numberSpeechValues[speechCounterCounter] = track_7;
      break;
    case 8:
      numberSpeechValues[speechCounterCounter] = track_8;
      break;
    case 9:
      numberSpeechValues[speechCounterCounter] = track_9;
      break;
    default:
      break;
    }
    speechCounterCounter = speechCounterCounter + 1;
  }
  if (number > 999)
  {
    numberSpeechValues[speechCounterCounter] = track_tausend;
    speechCounterCounter = speechCounterCounter + 1;
  }
  if (number > 99)
  {
    int hunderter = (number / 100) % 10;
    switch (hunderter)
    {
    case 1:
      numberSpeechValues[speechCounterCounter] = track_ein;
      speechCounterCounter = speechCounterCounter + 1;
      numberSpeechValues[speechCounterCounter] = track_hundert;
      speechCounterCounter = speechCounterCounter + 1;
      break;
    case 2:
      numberSpeechValues[speechCounterCounter] = track_2;
      speechCounterCounter = speechCounterCounter + 1;
      numberSpeechValues[speechCounterCounter] = track_hundert;
      speechCounterCounter = speechCounterCounter + 1;
      break;
    case 3:
      numberSpeechValues[speechCounterCounter] = track_3;
      speechCounterCounter = speechCounterCounter + 1;
      numberSpeechValues[speechCounterCounter] = track_hundert;
      speechCounterCounter = speechCounterCounter + 1;
      break;
    case 4:
      numberSpeechValues[speechCounterCounter] = track_4;
      speechCounterCounter = speechCounterCounter + 1;
      numberSpeechValues[speechCounterCounter] = track_hundert;
      speechCounterCounter = speechCounterCounter + 1;
      break;
    case 5:
      numberSpeechValues[speechCounterCounter] = track_5;
      speechCounterCounter = speechCounterCounter + 1;
      numberSpeechValues[speechCounterCounter] = track_hundert;
      speechCounterCounter = speechCounterCounter + 1;
      break;
    case 6:
      numberSpeechValues[speechCounterCounter] = track_6;
      speechCounterCounter = speechCounterCounter + 1;
      numberSpeechValues[speechCounterCounter] = track_hundert;
      speechCounterCounter = speechCounterCounter + 1;
      break;
    case 7:
      numberSpeechValues[speechCounterCounter] = track_7;
      speechCounterCounter = speechCounterCounter + 1;
      numberSpeechValues[speechCounterCounter] = track_hundert;
      speechCounterCounter = speechCounterCounter + 1;
      break;
    case 8:
      numberSpeechValues[speechCounterCounter] = track_8;
      speechCounterCounter = speechCounterCounter + 1;
      numberSpeechValues[speechCounterCounter] = track_hundert;
      speechCounterCounter = speechCounterCounter + 1;
      break;
    case 9:
      numberSpeechValues[speechCounterCounter] = track_9;
      speechCounterCounter = speechCounterCounter + 1;
      numberSpeechValues[speechCounterCounter] = track_hundert;
      speechCounterCounter = speechCounterCounter + 1;
      break;
    default:
      break;
    }
  }
  if (number > 9)
  {
    int einer = number % 10;
    int zehner = (number / 10) % 10;
    if (zehner == 0)
    {
      switch (einer)
      {
      case 1:
        numberSpeechValues[speechCounterCounter] = track_1;
        break;
      case 2:
        numberSpeechValues[speechCounterCounter] = track_2;
        break;
      case 3:
        numberSpeechValues[speechCounterCounter] = track_3;
        break;
      case 4:
        numberSpeechValues[speechCounterCounter] = track_4;
        break;
      case 5:
        numberSpeechValues[speechCounterCounter] = track_5;
        break;
      case 6:
        numberSpeechValues[speechCounterCounter] = track_6;
        break;
      case 7:
        numberSpeechValues[speechCounterCounter] = track_7;
        break;
      case 8:
        numberSpeechValues[speechCounterCounter] = track_8;
        break;
      case 9:
        numberSpeechValues[speechCounterCounter] = track_9;
        break;
      default:
        break;
      }
    }
    else
    {
      if (zehner == 1 && einer == 1)
      {
        numberSpeechValues[speechCounterCounter] = track_elf;
      }
      else if (zehner == 1 && einer == 2)
      {
        numberSpeechValues[speechCounterCounter] = track_zwoelf;
      }
      else if (zehner == 1)
      {
        switch (einer)
        {
        case 3:
          numberSpeechValues[speechCounterCounter] = track_2;
          speechCounterCounter = speechCounterCounter + 1;
          numberSpeechValues[speechCounterCounter] = track_zehn;
          break;
        case 4:
          numberSpeechValues[speechCounterCounter] = track_3;
          speechCounterCounter = speechCounterCounter + 1;
          numberSpeechValues[speechCounterCounter] = track_zehn;
          break;
        case 5:
          numberSpeechValues[speechCounterCounter] = track_4;
          speechCounterCounter = speechCounterCounter + 1;
          numberSpeechValues[speechCounterCounter] = track_zehn;
          break;
        case 6:
          numberSpeechValues[speechCounterCounter] = track_5;
          speechCounterCounter = speechCounterCounter + 1;
          numberSpeechValues[speechCounterCounter] = track_zehn;
          break;
        case 7:
          numberSpeechValues[speechCounterCounter] = track_6;
          speechCounterCounter = speechCounterCounter + 1;
          numberSpeechValues[speechCounterCounter] = track_zehn;
          break;
        case 8:
          numberSpeechValues[speechCounterCounter] = track_7;
          speechCounterCounter = speechCounterCounter + 1;
          numberSpeechValues[speechCounterCounter] = track_zehn;
          break;
        case 9:
          numberSpeechValues[speechCounterCounter] = track_8;
          speechCounterCounter = speechCounterCounter + 1;
          numberSpeechValues[speechCounterCounter] = track_zehn;
          break;
        default:
          break;
        }
      }
      else if (einer == 0)
      {
        switch (zehner)
        {
        case 2:
          numberSpeechValues[speechCounterCounter] = track_zwan;
          break;
        case 3:
          numberSpeechValues[speechCounterCounter] = track_2;
          break;
        case 4:
          numberSpeechValues[speechCounterCounter] = track_3;
          break;
        case 5:
          numberSpeechValues[speechCounterCounter] = track_4;
          break;
        case 6:
          numberSpeechValues[speechCounterCounter] = track_sech;
          break;
        case 7:
          numberSpeechValues[speechCounterCounter] = track_sieb;
          break;
        case 8:
          numberSpeechValues[speechCounterCounter] = track_7;
          break;
        case 9:
          numberSpeechValues[speechCounterCounter] = track_8;
          break;
        default:
          break;
        }
        speechCounterCounter = speechCounterCounter + 1;
        numberSpeechValues[speechCounterCounter] = track_zig;
      }
      else
      {
        switch (einer)
        {
        case 1:
          numberSpeechValues[speechCounterCounter] = track_ein;
          break;
        case 2:
          numberSpeechValues[speechCounterCounter] = track_2;
          break;
        case 3:
          numberSpeechValues[speechCounterCounter] = track_3;
          break;
        case 4:
          numberSpeechValues[speechCounterCounter] = track_4;
          break;
        case 5:
          numberSpeechValues[speechCounterCounter] = track_5;
          break;
        case 6:
          numberSpeechValues[speechCounterCounter] = track_6;
          break;
        case 7:
          numberSpeechValues[speechCounterCounter] = track_7;
          break;
        case 8:
          numberSpeechValues[speechCounterCounter] = track_8;
          break;
        case 9:
          numberSpeechValues[speechCounterCounter] = track_9;
          break;
        default:
          break;
        }
        speechCounterCounter = speechCounterCounter + 1;
        numberSpeechValues[speechCounterCounter] = track_und;
        switch (zehner)
        {
        case 2:
          numberSpeechValues[speechCounterCounter] = track_zwan;
          break;
        case 3:
          numberSpeechValues[speechCounterCounter] = track_2;
          break;
        case 4:
          numberSpeechValues[speechCounterCounter] = track_3;
          break;
        case 5:
          numberSpeechValues[speechCounterCounter] = track_4;
          break;
        case 6:
          numberSpeechValues[speechCounterCounter] = track_sech;
          break;
        case 7:
          numberSpeechValues[speechCounterCounter] = track_sieb;
          break;
        case 8:
          numberSpeechValues[speechCounterCounter] = track_7;
          break;
        case 9:
          numberSpeechValues[speechCounterCounter] = track_8;
          break;
        default:
          break;
        }
        speechCounterCounter = speechCounterCounter + 1;
        numberSpeechValues[speechCounterCounter] = track_zig;
      }
    }
  }
  else
  {
    int einer = number % 10;
    switch (einer)
    {
    case 1:
      numberSpeechValues[speechCounterCounter] = track_ein;
      break;
    case 2:
      numberSpeechValues[speechCounterCounter] = track_2;
      break;
    case 3:
      numberSpeechValues[speechCounterCounter] = track_3;
      break;
    case 4:
      numberSpeechValues[speechCounterCounter] = track_4;
      break;
    case 5:
      numberSpeechValues[speechCounterCounter] = track_5;
      break;
    case 6:
      numberSpeechValues[speechCounterCounter] = track_6;
      break;
    case 7:
      numberSpeechValues[speechCounterCounter] = track_7;
      break;
    case 8:
      numberSpeechValues[speechCounterCounter] = track_8;
      break;
    case 9:
      numberSpeechValues[speechCounterCounter] = track_9;
      break;
    default:
      break;
    }
  }
  for (int i = 0; i < numberSpeechMax; i++)
  {
    int speechFile = numberSpeechValues[i];
    if (speechFile > 0)
    {
      if (myDFPlayer.available())
      {
        myDFPlayer.playFolder(folderSpeechNumbers, speechFile);
        while (myDFPlayer.readType() != DFPlayerPlayFinished)
        {
        }
      }
    }
  }
}



void setup()
{
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, 16, 17);

  Serial.println();
  Serial.println(F("DFRobot DFPlayer Mini Demo"));
  Serial.println(F("Initializing DFPlayer ... (May take 3~5 seconds)"));

  if (!myDFPlayer.begin(Serial2))
  { // Use softwareSerial to communicate with mp3.
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while (true)
      ;
  }
  Serial.println(F("DFPlayer Mini online."));

  myDFPlayer.setTimeOut(500); // Set serial communictaion time out 500ms
  myDFPlayer.volume(10);
  myDFPlayer.EQ(DFPLAYER_EQ_NORMAL);
}

void loop()
{
  playNumber(1);
  delay(2000);
  playNumber(84);
  delay(2000);
  playNumber(349176);
  delay(2000);
}