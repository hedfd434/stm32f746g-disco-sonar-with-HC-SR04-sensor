# stm32f746g-disco-sonar-with-HC-SR04-sensor
Today i want to share with you my latest project which is sonar. If you have some issues with your problem text on git hub
So let start
components which I used in this project
1. board stm32f746g-disco
2. step motor with driver I im using 288BYJ-48 (1 step = 0.8 degree). It requires external 5v power suply, you shouldn't 5v from the board, because the power of motor is about 0.7W so with 5v it's about 140mA of current, so it may cause some damage to the board
4. ultrasonic distance sensor HC-SR04
5. 2 end stops something like (https://pl.aliexpress.com/item/32939882024.html?spm=a2g0o.productlist.main.3.6ab8FHQeFHQeP0&algo_pvid=2fa1ec17-2165-495d-95de-d7dc43e83511&algo_exp_id=2fa1ec17-2165-495d-95de-d7dc43e83511-1&pdp_npi=4%40dis%21EUR%211.48%211.55%21%21%211.57%211.64%21%402103847817160515242982577ed5f2%2112000022867292752%21sea%21PL%211896476055%21&curPageLogUid=sAZOi2SDTbYF&utparam-url=scene%3Asearch%7Cquery_from%3A)
6. dupont wires (wires)
7. printed pieces (stand, cover), if you choose verstion without hole, you will have to do it yourself, in other case you can adjust exsiting hole, but in the point of contact pipe/screw have 2mm of diameter. I also recomend to have a sandpaper to sand a front cover a little bit.
8.  nuts screews and pads (I used 18mm lenght(including head), 2mm of diameter, with round head),  holes are shaped to fit a m3 screw in them, you also need a 2mm hole pads, to adjust height (it depends but 60 will be enought), and 10 m3 nuts
9.  this one i very optional an 30mm 5v dc fan, and temeprature sensor I'am using a lm35 (it's future future, I will add that in future)
10.  glue gan and isolation tape might be usefull to cope with cracking 3d printed elemnts and messy wires
connections


