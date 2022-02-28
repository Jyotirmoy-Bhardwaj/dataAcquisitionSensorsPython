String inputstring = "";                                                     
String sensorstring1 = "";                                                    
String sensorstring2 = "";                                                    
String sensorstring3 = "";                                                    
boolean input_stringcomplete = false;                                          
boolean sensor_stringcomplete1 = false;                                          
boolean sensor_stringcomplete2 = false;  
boolean sensor_stringcomplete3 = false;  

  void setup(){                                                              
     Serial.begin(9600);                                                      
//     Serial1.begin(9600);                                                   
//     Serial2.begin(9600);  
     Serial3.begin(9600);
     
     
     inputstring.reserve(5);                                                   
     sensorstring1.reserve(10);  
     sensorstring2.reserve(10);  
     sensorstring3.reserve(10);  
     }
 
  void loop(){                                                                   //here we go....
     
//  if (input_stringcomplete){                                                   //if a string from the PC has been received in its entirety 
//      
//      Serial.print("conductivity = ");
//      Serial.println(inputstring);                                              //send that string to the Atlas Scientific product
//      inputstring = "";                                                        //clear the string:
//      input_stringcomplete = false;                                            //reset the flag used to tell if we have received a completed string from the PC
//      }
//
// 
// 
// if (sensor_stringcomplete1){                                                   //if a string from the Atlas Scientific product has been received in its entierty    
//           
//            Serial.print("PH = ");
//            Serial.println(sensorstring1); 
//            sensorstring1 = "";                                                       //clear the string:
//            sensor_stringcomplete1= false;                //send that string to to the PC's serial monitor
// }            
 
// if (sensor_stringcomplete2){                                                   //if a string from the Atlas Scientific product has been received in its entierty    
//           
//            Serial.print("DO = ");
//            Serial.println(sensorstring2); 
//            sensorstring2 = "";                                                       //clear the string:
//            sensor_stringcomplete2= false;                //send that string to to the PC's serial monitor
// }            
 
 if (sensor_stringcomplete3){                                                   //if a string from the Atlas Scientific product has been received in its entierty    
           
            Serial.print(" ");
            Serial.println(sensorstring3); 
            //Serial.println(" "); 
            sensorstring3 = "";                                                       //clear the string:
            sensor_stringcomplete3= false;                //send that string to to the PC's serial monitor
 }            
 
 
 }
  
   void serialEvent() {                                                                      
               char inchar = (char)Serial.read();                              
               inputstring += inchar;                                           
               if(inchar == '\r') {input_stringcomplete = true;}               
              }  

//  void serialEvent1(){                                                         //if the hardware serial port_1 receives a char 
//              char inchar = (char)Serial1.read();                              //get the char we just received
//              sensorstring1 += inchar;                                          //add it to the inputString
//              if(inchar == '\r') {sensor_stringcomplete1 = true;}               //if the incoming character is a <CR>, set the flag 
//               
//           }
//  void serialEvent2(){                                                         //if the hardware serial port_1 receives a char 
//              char inchar = (char)Serial2.read();                              //get the char we just received
//              sensorstring2 += inchar;                                          //add it to the inputString
//              if(inchar == '\r') {sensor_stringcomplete2 = true;}               //if the incoming character is a <CR>, set the flag 
//               
//           }

void serialEvent3(){                                                         //if the hardware serial port_1 receives a char 
              char inchar = (char)Serial3.read();                              //get the char we just received
              sensorstring3 += inchar;                                          //add it to the inputString
              if(inchar == '\r') {sensor_stringcomplete3 = true;}               //if the incoming character is a <CR>, set the flag 
               
           }

