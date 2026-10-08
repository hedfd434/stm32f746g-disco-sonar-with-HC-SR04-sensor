#include <gui/screen1_screen/Screen1View.hpp>


//additional includes
#include <math.h>
Screen1View::Screen1View()
{
	buffer3 = 100;
	Unicode::snprintf(descriptionTextArea1Buffer, DESCRIPTIONTEXTAREA1_SIZE, "%d", buffer3);
	descriptionTextArea1.invalidate();

	buffer4 = 210;
	Unicode::snprintf(descriptionTextArea2Buffer, DESCRIPTIONTEXTAREA2_SIZE, "%d", buffer4);
	descriptionTextArea2.invalidate();
}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}
//
void Screen1View::setVal1 (int value1)
{
	distance = value1>>8;
	position = value1&255;
	Unicode::snprintf(distanceTextArea1Buffer, DISTANCETEXTAREA1_SIZE, "%d",distance);
	distanceTextArea1.invalidate();

	Unicode::snprintf(stepsTextArea1Buffer, STEPSTEXTAREA1_SIZE, "%d", prescaler);
	stepsTextArea1.invalidate();

	//for position
	degree = position * 0.8;
	relativeDegree = degree + 6;
	relativeDegreeBuffer = relativeDegreeBuffer;


	if(1 == 1) //distance <= maxDistance
	{
		hypotenuse = prescaler * distance;

		if(relativeDegree < 90)
		{
			side = 1; //left
		}
		else if(relativeDegree == 90)
		{
			side = 2; //middle
		}
		else if(relativeDegree > 90)
		{
			side = 3; //rigth
		}

//		if(side == 1) //left
//		{
//			//get sideA and sideB
//			//get sin
//
//			radians = relativeDegree * (PI / 180);
//
//			buffer1 = sin(radians);
//			sideB = buffer1 * hypotenuse; //vertical side
//
//		//	radians = 0.785000;
//			buffer2 = cos(radians);
//
//			sideA = buffer2 * hypotenuse; //horizontal side
//
//			positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
//			positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object
//
//
//		}
//		else if(side == 2) //middle
//		{
//			positionX1 = 220 + 10; //+10 because of size of object
//			positionY1 = (272 - distance) - 10; //+10 because of size of object
//
//
//		}
//		else if(side == 3) //rigth
//		{
//			relativeDegreeBuffer = relativeDegree - 90;
//
//			radians = relativeDegreeBuffer * (PI / 180);
//
//			buffer1 = cos(radians);
//			sideB = buffer1 * hypotenuse; //vertical side
//
//		//		radians = 0.785000;
//			buffer2 = sin(radians);
//
//			sideA = buffer2 * hypotenuse; //horizontal side
//
//			positionX1 = 220 + sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
//			positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object
//
//
//		}
		if(distance != 0)
		{
			if((degree == 0) && (distance <= maxDistance)) //0
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object1.setVisible(false);
						object1.invalidate();

						object1.setVisible(true);
						object1.invalidate();

						object1.setPosition(positionX1, positionY1, 20, 20);
						object1.invalidate();
					}
					else if((degree == 4) && (distance > maxDistance))
					{
						object1.setVisible(false);
						object1.invalidate();
					}

					if((degree == 4) && (distance <= maxDistance)) //4
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object2.setVisible(false);
						object2.invalidate();

						object2.setVisible(true);
						object2.invalidate();

						object2.setPosition(positionX1, positionY1, 20, 20);
						object2.invalidate();
					}
					else if((degree == 4) && (distance > maxDistance))
					{
						object2.setVisible(false);
						object2.invalidate();
					}

					if((degree == 8) && (distance <= maxDistance)) //8
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object3.setVisible(false);
						object3.invalidate();

						object3.setVisible(true);
						object3.invalidate();

						object3.setPosition(positionX1, positionY1, 20, 20);
						object3.invalidate();
					}
					else if((degree == 8) && (distance > maxDistance))
					{
						object3.setVisible(false);
						object3.invalidate();
					}

					if((degree == 12) && (distance <= maxDistance)) //12
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object4.setVisible(false);
						object4.invalidate();

						object4.setVisible(true);
						object4.invalidate();

						object4.setPosition(positionX1, positionY1, 20, 20);
						object4.invalidate();
					}
					else if((degree == 4) && (distance > maxDistance))
					{
						object4.setVisible(false);
						object4.invalidate();
					}

					if((degree == 16) && (distance <= maxDistance)) //16
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object5.setVisible(false);
						object5.invalidate();

						object5.setVisible(true);
						object5.invalidate();

						object5.setPosition(positionX1, positionY1, 20, 20);
						object5.invalidate();
					}
					else if((degree == 16) && (distance > maxDistance))
					{
						object5.setVisible(false);
						object5.invalidate();
					}

					if((degree == 20) && (distance <= maxDistance)) //20
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object6.setVisible(false);
						object6.invalidate();

						object6.setVisible(true);
						object6.invalidate();

						object6.setPosition(positionX1, positionY1, 20, 20);
						object6.invalidate();
					}
					else if((degree == 20) && (distance > maxDistance))
					{
						object6.setVisible(false);
						object6.invalidate();
					}

					if((degree == 24) && (distance <= maxDistance)) //24
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object7.setVisible(false);
						object7.invalidate();

						object7.setVisible(true);
						object7.invalidate();

						object7.setPosition(positionX1, positionY1, 20, 20);
						object7.invalidate();
					}
					else if((degree == 24) && (distance > maxDistance))
					{
						object7.setVisible(false);
						object7.invalidate();
					}

					if((degree == 28) && (distance <= maxDistance)) //28
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object8.setVisible(false);
						object8.invalidate();

						object8.setVisible(true);
						object8.invalidate();

						object8.setPosition(positionX1, positionY1, 20, 20);
						object8.invalidate();
					}
					else if((degree == 28) && (distance > maxDistance))
					{
						object8.setVisible(false);
						object8.invalidate();
					}

					if((degree == 32) && (distance <= maxDistance)) //32
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object9.setVisible(false);
						object9.invalidate();

						object9.setVisible(true);
						object9.invalidate();

						object9.setPosition(positionX1, positionY1, 20, 20);
						object9.invalidate();
					}
					else if((degree == 32) && (distance > maxDistance))
					{
						object9.setVisible(false);
						object9.invalidate();
					}

					if((degree == 36) && (distance <= maxDistance)) //36
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object10.setVisible(false);
						object10.invalidate();

						object10.setVisible(true);
						object10.invalidate();

						object10.setPosition(positionX1, positionY1, 20, 20);
						object10.invalidate();
					}
					else if((degree == 36) && (distance > maxDistance))
					{
						object10.setVisible(false);
						object10.invalidate();
					}

					if((degree == 40) && (distance <= maxDistance)) //40
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object11.setVisible(false);
						object11.invalidate();

						object11.setVisible(true);
						object11.invalidate();

						object11.setPosition(positionX1, positionY1, 20, 20);
						object11.invalidate();
					}
					else if((degree == 40) && (distance > maxDistance))
					{
						object11.setVisible(false);
						object11.invalidate();
					}

					if((degree == 44) && (distance <= maxDistance)) //44
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object12.setVisible(false);
						object12.invalidate();

						object12.setVisible(true);
						object12.invalidate();

						object12.setPosition(positionX1, positionY1, 20, 20);
						object12.invalidate();
					}
					else if((degree == 44) && (distance > maxDistance))
					{
						object12.setVisible(false);
						object12.invalidate();
					}

					if((degree == 48) && (distance <= maxDistance)) //48
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object13.setVisible(false);
						object13.invalidate();

						object13.setVisible(true);
						object13.invalidate();

						object13.setPosition(positionX1, positionY1, 20, 20);
						object13.invalidate();
					}
					else if((degree == 48) && (distance > maxDistance))
					{
						object13.setVisible(false);
						object13.invalidate();
					}

					if((degree == 48) && (distance <= maxDistance)) //52
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object14.setVisible(false);
						object14.invalidate();

						object14.setVisible(true);
						object14.invalidate();

						object14.setPosition(positionX1, positionY1, 20, 20);
						object14.invalidate();
					}
					else if((degree == 48) && (distance > maxDistance))
					{
						object14.setVisible(false);
						object14.invalidate();
					}

					if((degree == 56) && (distance <= maxDistance)) //56
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object15.setVisible(false);
						object15.invalidate();

						object15.setVisible(true);
						object15.invalidate();

						object15.setPosition(positionX1, positionY1, 20, 20);
						object15.invalidate();
					}
					else if((degree == 56) && (distance > maxDistance))
					{
						object15.setVisible(false);
						object15.invalidate();
					}

					if((degree == 60) && (distance <= maxDistance)) //60
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object16.setVisible(false);
						object16.invalidate();

						object16.setVisible(true);
						object16.invalidate();

						object16.setPosition(positionX1, positionY1, 20, 20);
						object16.invalidate();
					}
					else if((degree == 60) && (distance > maxDistance))
					{
						object16.setVisible(false);
						object16.invalidate();
					}

					if((degree == 64) && (distance <= maxDistance)) //64
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object17.setVisible(false);
						object17.invalidate();

						object17.setVisible(true);
						object17.invalidate();

						object17.setPosition(positionX1, positionY1, 20, 20);
						object17.invalidate();
					}
					else if((degree == 64) && (distance > maxDistance))
					{
						object17.setVisible(false);
						object17.invalidate();
					}
					if((degree == 68) && (distance <= maxDistance)) //68
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object18.setVisible(false);
						object18.invalidate();

						object18.setVisible(true);
						object18.invalidate();

						object18.setPosition(positionX1, positionY1, 20, 20);
						object18.invalidate();
					}
					else if((degree == 68) && (distance > maxDistance))
					{
						object18.setVisible(false);
						object18.invalidate();
					}

					if((degree == 72) && (distance <= maxDistance)) //72
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object19.setVisible(false);
						object19.invalidate();

						object19.setVisible(true);
						object19.invalidate();

						object19.setPosition(positionX1, positionY1, 20, 20);
						object19.invalidate();
					}
					else if((degree == 72) && (distance > maxDistance))
					{
						object19.setVisible(false);
						object19.invalidate();
					}

					if((degree == 76) && (distance <= maxDistance)) //76
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object20.setVisible(false);
						object20.invalidate();

						object20.setVisible(true);
						object20.invalidate();

						object20.setPosition(positionX1, positionY1, 20, 20);
						object20.invalidate();
					}
					else if((degree == 76) && (distance > maxDistance))
					{
						object20.setVisible(false);
						object20.invalidate();
					}

					if((degree == 80) && (distance <= maxDistance)) //80
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object21.setVisible(false);
						object21.invalidate();

						object21.setVisible(true);
						object21.invalidate();

						object21.setPosition(positionX1, positionY1, 20, 20);
						object21.invalidate();
					}
					else if((degree == 80) && (distance > maxDistance))
					{
						object21.setVisible(false);
						object21.invalidate();
					}

					if((degree == 84) && (distance <= maxDistance)) //84
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object22.setVisible(false);
						object22.invalidate();

						object22.setVisible(true);
						object22.invalidate();

						object22.setPosition(positionX1, positionY1, 20, 20);
						object22.invalidate();
					}
					else if((degree == 84) && (distance > maxDistance))
					{
						object22.setVisible(false);
						object22.invalidate();
					}

					if((degree == 88) && (distance <= maxDistance)) //88
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object23.setVisible(false);
						object23.invalidate();

						object23.setVisible(true);
						object23.invalidate();

						object23.setPosition(positionX1, positionY1, 20, 20);
						object23.invalidate();
					}
					else if((degree == 88) && (distance > maxDistance))
					{
						object23.setVisible(false);
						object23.invalidate();
					}

					if((degree == 92) && (distance <= maxDistance)) //92
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object24.setVisible(false);
						object24.invalidate();

						object24.setVisible(true);
						object24.invalidate();

						object24.setPosition(positionX1, positionY1, 20, 20);
						object24.invalidate();
					}
					else if((degree == 92) && (distance > maxDistance))
					{
						object24.setVisible(false);
						object24.invalidate();
					}

					if((degree == 96) && (distance <= maxDistance)) //96
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object25.setVisible(false);
						object25.invalidate();

						object25.setVisible(true);
						object25.invalidate();

						object25.setPosition(positionX1, positionY1, 20, 20);
						object25.invalidate();
					}
					else if((degree == 96) && (distance > maxDistance))
					{
						object25.setVisible(false);
						object25.invalidate();
					}

					if((degree == 100) && (distance <= maxDistance)) //100
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object26.setVisible(false);
						object26.invalidate();

						object26.setVisible(true);
						object26.invalidate();

						object26.setPosition(positionX1, positionY1, 20, 20);
						object26.invalidate();
					}
					else if((degree == 100) && (distance > maxDistance))
					{
						object26.setVisible(false);
						object26.invalidate();
					}

					if((degree == 104) && (distance <= maxDistance)) //104
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object27.setVisible(false);
						object27.invalidate();

						object27.setVisible(true);
						object27.invalidate();

						object27.setPosition(positionX1, positionY1, 20, 20);
						object27.invalidate();
					}
					else if((degree == 104) && (distance > maxDistance))
					{
						object27.setVisible(false);
						object27.invalidate();
					}

					if((degree == 108) && (distance <= maxDistance)) //108
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object27.setVisible(false);
						object27.invalidate();

						object27.setVisible(true);
						object27.invalidate();

						object27.setPosition(positionX1, positionY1, 20, 20);
						object27.invalidate();
					}
					else if((degree == 108) && (distance > maxDistance))
					{
						object27.setVisible(false);
						object27.invalidate();
					}

					if((degree == 112) && (distance <= maxDistance)) //112
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object28.setVisible(false);
						object28.invalidate();

						object28.setVisible(true);
						object28.invalidate();

						object28.setPosition(positionX1, positionY1, 20, 20);
						object28.invalidate();
					}
					else if((degree == 112) && (distance > maxDistance))
					{
						object28.setVisible(false);
						object28.invalidate();
					}

					if((degree == 116) && (distance <= maxDistance)) //116
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object29.setVisible(false);
						object29.invalidate();

						object29.setVisible(true);
						object29.invalidate();

						object29.setPosition(positionX1, positionY1, 20, 20);
						object29.invalidate();
					}
					else if((degree == 116) && (distance > maxDistance))
					{
						object29.setVisible(false);
						object29.invalidate();
					}

					if((degree == 120) && (distance <= maxDistance)) //120
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object30.setVisible(false);
						object30.invalidate();

						object30.setVisible(true);
						object30.invalidate();

						object30.setPosition(positionX1, positionY1, 20, 20);
						object30.invalidate();
					}
					else if((degree == 120) && (distance > maxDistance))
					{
						object30.setVisible(false);
						object30.invalidate();
					}

					if((degree == 124) && (distance <= maxDistance)) //124
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object31.setVisible(false);
						object31.invalidate();

						object31.setVisible(true);
						object31.invalidate();

						object31.setPosition(positionX1, positionY1, 20, 20);
						object31.invalidate();
					}
					else if((degree == 124) && (distance > maxDistance))
					{
						object31.setVisible(false);
						object31.invalidate();
					}

					if((degree == 128) && (distance <= maxDistance)) //128
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object32.setVisible(false);
						object32.invalidate();

						object32.setVisible(true);
						object32.invalidate();

						object32.setPosition(positionX1, positionY1, 20, 20);
						object32.invalidate();
					}
					else if((degree == 128) && (distance > maxDistance))
					{
						object32.setVisible(false);
						object31.invalidate();
					}

					if((degree == 132) && (distance <= maxDistance)) //132
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object33.setVisible(false);
						object33.invalidate();

						object33.setVisible(true);
						object33.invalidate();

						object33.setPosition(positionX1, positionY1, 20, 20);
						object33.invalidate();
					}
					else if((degree == 132) && (distance > maxDistance))
					{
						object33.setVisible(false);
						object33.invalidate();
					}

					if((degree == 136) && (distance <= maxDistance)) //136
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object34.setVisible(false);
						object34.invalidate();

						object34.setVisible(true);
						object34.invalidate();

						object34.setPosition(positionX1, positionY1, 20, 20);
						object34.invalidate();
					}
					else if((degree == 136) && (distance > maxDistance))
					{
						object34.setVisible(false);
						object34.invalidate();
					}

					if((degree == 140) && (distance <= maxDistance)) //140
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object35.setVisible(false);
						object35.invalidate();

						object35.setVisible(true);
						object35.invalidate();

						object35.setPosition(positionX1, positionY1, 20, 20);
						object35.invalidate();
					}
					else if((degree == 140) && (distance > maxDistance))
					{
						object35.setVisible(false);
						object35.invalidate();
					}

					if((degree == 144) && (distance <= maxDistance)) //144
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object36.setVisible(false);
						object36.invalidate();

						object36.setVisible(true);
						object36.invalidate();

						object36.setPosition(positionX1, positionY1, 20, 20);
						object36.invalidate();
					}
					else if((degree == 144) && (distance > maxDistance))
					{
						object36.setVisible(false);
						object36.invalidate();
					}

					if((degree == 148) && (distance <= maxDistance)) //148
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object37.setVisible(false);
						object37.invalidate();

						object37.setVisible(true);
						object37.invalidate();

						object37.setPosition(positionX1, positionY1, 20, 20);
						object37.invalidate();
					}
					else if((degree == 148) && (distance > maxDistance))
					{
						object37.setVisible(false);
						object37.invalidate();
					}

					if((degree == 152) && (distance <= maxDistance)) //152
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object38.setVisible(false);
						object38.invalidate();

						object38.setVisible(true);
						object38.invalidate();

						object38.setPosition(positionX1, positionY1, 20, 20);
						object38.invalidate();
					}
					else if((degree == 152) && (distance > maxDistance))
					{
						object38.setVisible(false);
						object38.invalidate();
					}

					if((degree == 156) && (distance <= maxDistance)) //156
					{

						radians = relativeDegree * (PI / 180);

						buffer1 = sin(radians);
						sideB = buffer1 * hypotenuse; //vertical side

						buffer2 = cos(radians);

						sideA = buffer2 * hypotenuse; //horizontal side

						positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
						positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

						object39.setVisible(false);
						object39.invalidate();

						object39.setVisible(true);
						object39.invalidate();

						object39.setPosition(positionX1, positionY1, 20, 20);
						object39.invalidate();
					}
					else if((degree == 156) && (distance > maxDistance))
					{
						object39.setVisible(false);
						object39.invalidate();
					}

					if((degree == 160) && (distance <= maxDistance)) //160
						{

							radians = relativeDegree * (PI / 180);

							buffer1 = sin(radians);
							sideB = buffer1 * hypotenuse; //vertical side

							buffer2 = cos(radians);

							sideA = buffer2 * hypotenuse; //horizontal side

							positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
							positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

							object40.setVisible(false);
							object40.invalidate();

							object40.setVisible(true);
							object40.invalidate();

							object40.setPosition(positionX1, positionY1, 20, 20);
							object40.invalidate();
						}
						else if((degree == 160) && (distance > maxDistance))
						{
							object40.setVisible(false);
							object40.invalidate();
						}

					if((degree == 164) && (distance <= maxDistance)) //164
						{

							radians = relativeDegree * (PI / 180);

							buffer1 = sin(radians);
							sideB = buffer1 * hypotenuse; //vertical side

							buffer2 = cos(radians);

							sideA = buffer2 * hypotenuse; //horizontal side

							positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
							positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

							object41.setVisible(false);
							object41.invalidate();

							object41.setVisible(true);
							object41.invalidate();

							object41.setPosition(positionX1, positionY1, 20, 20);
							object41.invalidate();
						}
						else if((degree == 164) && (distance > maxDistance))
						{
							object41.setVisible(false);
							object41.invalidate();
						}

					if((degree == 168) && (distance <= maxDistance)) //168
						{

							radians = relativeDegree * (PI / 180);

							buffer1 = sin(radians);
							sideB = buffer1 * hypotenuse; //vertical side

							buffer2 = cos(radians);

							sideA = buffer2 * hypotenuse; //horizontal side

							positionX1 = 220 - sideA + 10; //from middle to left that much as sideA add 10 for calibrate because of the size of object
							positionY1 = (272 - sideB) - 10; //from bottom up that much as sideB substract 10 because of size of object

							object42.setVisible(false);
							object42.invalidate();

							object42.setVisible(true);
							object42.invalidate();

							object42.setPosition(positionX1, positionY1, 20, 20);
							object42.invalidate();
						}
						else if((degree == 168) && (distance > maxDistance))
						{
							object42.setVisible(false);
							object42.invalidate();
						}
		}


//		}


		//reset values
		positionX1 = 0;
		positionY1 = 0;
	}



}

void Screen1View::setStep(int value2)
{
	degree1 = value2 * 0.8;
	relativeDegree1 = degree1 + 6;

	if(relativeDegree1 < 90)
	{
		side1 = 1; //left
	}
	else if(relativeDegree1 == 90)
	{
		side1 = 2; //middle
	}
	else if(relativeDegree1 > 90)
	{
		side1 = 3; //rigth
	}

	if(1 == 1) //side == 1
	{
		radians1 = relativeDegree1 * (PI / 180);

		buffer5 = sin(radians1);
		sideC = buffer5 * lineLenght; //vertical side

		buffer6 = cos(radians1);

		sideD = buffer6 * lineLenght; //horizontal side

		positionX2 = 220 - sideD;
		positionY2 = 220 - sideC;

		//print side C

		line5.setVisible(false);
		line5.invalidate();

		line5.setVisible(true);
		line5.invalidate();

	    line5.setStart(positionX2, positionY2);
	    line5.invalidate();

	    line5.setEnd(220, 220);
	    line5.invalidate();

	    positionX2 = 0;
	    positionY2 = 0;


	}
	else if(side1 == 2)
	{
		line5.setVisible(false);
		line5.invalidate();

		line5.setVisible(true);
		line5.invalidate();

		line5.setStart(positionX2, positionY2);
		line5.invalidate();

		line5.setEnd(220, 0);
		line5.invalidate();

		positionX2 = 0;
		positionY2 = 0;
	}
//	else if (side1 == 3)
//	{
//		radians1 = relativeDegree1 * (PI / 180);
//
//		buffer5 = sin(radians1);
//		sideC = buffer5 * lineLenght; //vertical side
//
//		buffer6 = cos(radians1);
//
//		sideD = buffer6 * lineLenght; //horizontal side
//
//		positionX2 = 220 - sideD;
//		positionY2 = 220 - sideC;
//
//		//print side C
//
//		line5.setVisible(false);
//		line5.invalidate();
//
//		line5.setVisible(true);
//		line5.invalidate();
//
//	    line5.setStart(positionX2, positionY2);
//	    line5.invalidate();
//
//	    line5.setEnd(220, 220);
//	    line5.invalidate();
//
//	    positionX2 = 0;
//	    positionY2 = 0;
//	}
//

}
void Screen1View::zoom1X()
{
	prescaler = 1;

	maxDistance = 220;

	buffer3 = 100;
	Unicode::snprintf(descriptionTextArea1Buffer, DESCRIPTIONTEXTAREA1_SIZE, "%d", buffer3);
	descriptionTextArea1.invalidate();

	buffer4 = 210;
	Unicode::snprintf(descriptionTextArea2Buffer, DESCRIPTIONTEXTAREA2_SIZE, "%d", buffer4);
	descriptionTextArea2.invalidate();
}

void Screen1View::zoom2X()
{
	prescaler = 2;

	maxDistance = 110;

	buffer3 = 55;
	Unicode::snprintf(descriptionTextArea1Buffer, DESCRIPTIONTEXTAREA1_SIZE, "%d", buffer3);
	descriptionTextArea1.invalidate();

	buffer4 = 110;
	Unicode::snprintf(descriptionTextArea2Buffer, DESCRIPTIONTEXTAREA2_SIZE, "%d", buffer4);
	descriptionTextArea2.invalidate();
}

void Screen1View::zoom4X()
{
	prescaler = 4;

	maxDistance = 55;

	buffer3 = 27;
	Unicode::snprintf(descriptionTextArea1Buffer, DESCRIPTIONTEXTAREA1_SIZE, "%d", buffer3);
	descriptionTextArea1.invalidate();

	buffer4 = 55;
	Unicode::snprintf(descriptionTextArea2Buffer, DESCRIPTIONTEXTAREA2_SIZE, "%d", buffer4);
	descriptionTextArea2.invalidate();

}

void Screen1View::zoom8X()
{
	prescaler = 8;

	maxDistance = 27;

	buffer3 = 13;
	Unicode::snprintf(descriptionTextArea1Buffer, DESCRIPTIONTEXTAREA1_SIZE, "%d", buffer3);
	descriptionTextArea1.invalidate();

	buffer4 = 27;
	Unicode::snprintf(descriptionTextArea2Buffer, DESCRIPTIONTEXTAREA2_SIZE, "%d", buffer4);
	descriptionTextArea2.invalidate();
}
