# HC-SR04 ultrasonic radar

## Project overview
This projest was builed between 05-2024 to 06-2024, it is one of my first project using stm32 board and dedicated software.
The work principle is simple:
- At first device perform self calibration.
- then with every motor step (0.8 degrees) the measurement of distance is taken
- after that data is ploted on the polar graph using trigonometric functions (file Screen1View.cpp) (looking on this project now i know how bad i was then, but the point of this project was to build with the joy and achieve set goal. which was to build working radar.)
- User can change a visiblity of the radar getting more datailed view by clicking an of the buttons (1x, 2x.....).


## immages

<figure>
  <img src="./photos\front_marked.png" alt="My profile photo." style="width: 100%;">
  <figcaption>
    Image no. 1. Sonar during work (showa the environement from the image no. 2).
  </figcaption>
</figure>

<figure>
  <img src="./photos\top_view_marked.png" alt="My profile photo." style="width: 100%;">
  <figcaption>
    Image no. 2. Sonar top view (showa the environement from the image no. 2).
  </figcaption>
</figure>

<figure>
  <img src="./photos\motor_wiring.jpeg" alt="My profile photo." style="width: 100%;">
  <figcaption>
    Image no. 3. Motor wiring (shows real connection from Image 4 wiring diagram).
  </figcaption>
</figure>

<figure>
  <img src="./photos\connection_diagram.jpg" alt="My profile photo." style="width: 100%;">
  <figcaption>
    Image no. 4. Electrical connections wiring diagram.
  </figcaption>
</figure>


## this projest is an ultrasonic radar that utilize following components and resources:
1. HC-SR04 ultrasonic sensor (AliAxpress [link](https://pl.aliexpress.com/w/wholesale-hc-sr04.html?spm=a2g0o.best.auto_suggest.2.1f9e1e2bIMAPSc&_gl=1*x0kkir*_gcl_au*MzUyMTcxNDU3LjE3NjM2Mzk0NjE.*_ga*NjYxNjc1MDc0LjE3NDM3MjEyMTI.*_ga_VED1YSGNC7*czE3NjU2NTczNjkkbzU5JGcwJHQxNzY1NjU3MzY5JGo2MCRsMCRoMA..))

2. 28BYJ-48-5V stepper motor (AliExpress [link](https://pl.aliexpress.com/item/1005008207445943.html?spm=a2g0o.productlist.main.9.36a8eTdHeTdHdF&algo_pvid=554f63b4-d63e-4eea-a4c2-cfffcf8b2dab&algo_exp_id=554f63b4-d63e-4eea-a4c2-cfffcf8b2dab-8&pdp_ext_f=%7B"order"%3A"435"%2C"eval"%3A"1"%2C"fromPage"%3A"search"%7D&pdp_npi=6%40dis%21PLN%216.39%216.39%21%21%211.73%211.73%21%40210384b917656575658236718e50f9%2112000044236432720%21sea%21PL%211896476055%21X%211%210%21n_tag%3A-29919%3Bd%3Ad1109e33%3Bm03_new_user%3A-29895&curPageLogUid=o7lSuF66Cfrd&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008207445943%7C_p_origin_prod%3A))

3. STM32F746G-DISCO (DigiKey [link](https://www.digikey.pl/pl/products/detail/stmicroelectronics/STM32F746G-DISCO/5267791?gclsrc=aw.ds&gad_source=1&gad_campaignid=20200561603&gclid=Cj0KCQiAuvTJBhCwARIsAL6DemihnVeY1dZDlpQuBas9dFwieqEHASxJVF5FX2xmjmpFjxtsKeF5HJEaAquHEALw_wcB))

4. end stops: (Aliexpress [link](https://pl.aliexpress.com/item/32939882024.html?spm=a2g0o.productlist.main.3.13a950afpmq25A&algo_pvid=050f0dd9-59e0-4923-95f2-6ec41e02c87c&algo_exp_id=050f0dd9-59e0-4923-95f2-6ec41e02c87c-2&pdp_ext_f=%7B"order"%3A"228"%2C"eval"%3A"1"%2C"fromPage"%3A"search"%7D&pdp_npi=6%40dis%21PLN%216.87%216.49%21%21%211.86%211.76%21%402103847817656578232718667e9bd8%2112000022867292752%21sea%21PL%211896476055%21X%211%210%21n_tag%3A-29919%3Bd%3Ad1109e33%3Bm03_new_user%3A-29895&curPageLogUid=002UfEWnukAp&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A32939882024%7C_p_origin_prod%3A))

5. M3 bolts (6-10 mm), nuts and pads for distancing.

6. 2.54 dupont wires (AliExpress [link](https://pl.aliexpress.com/w/wholesale-dupont-wires.html?spm=a2g0o.detail.search.0))

7. 5-12V power supply

7. 3D printed elements

## Project overview

