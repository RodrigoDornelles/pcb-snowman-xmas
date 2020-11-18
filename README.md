![PCB Snowman Xmax](https://github.com/RodrigoDornelles/pcb-snowman-xmas/raw/master/images/banner.png)

## Requirements ##

| Dependency | Platform | Description |
| :--------- | -------- | :---------- |
| [RodrigoDornelles/arduino-tone-pitch](https://github.com/RodrigoDornelles/arduino-tone-pitch) | arduino lib | improve the pitch tune of piezos |
| [RodrigoDornelles/arduino-soft-buzzer](https://github.com/RodrigoDornelles/arduino-soft-buzzer) | arduino lib | allow multiple piezos to be played simultaneously |
| [SnapEDA CMT-8530S-SMT-TR](https://www.snapeda.com/parts/CMT-8530S-SMT-TR/CUI%20Devices/view-part/649163/) | eagle lib | fotoprint and symbol to **Eagle** project |
| [SnapEDA ATTINY85-20PU](https://www.snapeda.com/parts/ATTINY85-20PU/Microchip/view-part/?ref=search&t=attiny85) | autodesk 3d | fotoprint and symbol to **Eagle** project |
| [SnapEDA ATTINY85-20PU](https://www.snapeda.com/parts/ATTINY85-20PU/Microchip/view-part/?ref=search&t=attiny85) | autodesk 3d | added in the **Eagle** project for 3D view in the  **Fusion 360** |
| [GrabCad LED 3mm 2](https://grabcad.com/library/led-3mm-2) | autodesk 3d | added in the **Eagle** project for 3D view in the  **Fusion 360** |
| [GrabCad Potentiometer 3](https://grabcad.com/library/potentiometer-3) | autodesk 3d | added in the **Eagle** project for 3D view in the  **Fusion 360** |
| [CUI Devices CMT-8530S-SMT-TR](https://www.cuidevices.com/product/resource/3dmodel/cmt-8530s-smt-tr) | autodesk 3d | added in the **Eagle** project for 3D view in the  **Fusion 360** |

## First Draft ##
| ![draft1pt](https://github.com/RodrigoDornelles/pcb-snowman-xmas/raw/master/images/draft_pt.png) |- 2x Led's<br/><br/>- 1x Potentiometer<br/><br/>- 3x Buzzer's for musical harmony<br/><br/>- 1x Buzzer for musical melody<br/><br/>_How work: when you turn your nose (potentiometer) you will start playing a Christmas song the more you turn the louder you will play._ |
| - | :- |

## Bill of Materials ##
| # | Designator | Qty | Manufacturer | Mfg Part | Description | Footprint | Type | Notes |
| - | :--------- | --- | :----------- | -------- | :---------- | :-------- | ---- | :---- |
| 1 | R1 | 1 |  |  | RES 10.0K OHM 1W 1% 0815 SMD | 0815 |  | |
| 2 | R2,R3,R4,R5,R6,R7 | 6 |  |  | RES 111.0 OHM 1W 1% 0815 SMD | 0815 | SMD | |
| 3 | LS1,LS2,LS3,LS4 | 4 | CUI Devices | CMT-8530S-SMT-TR | 8.5 mm 3.6 Vo-p 90 dB Surface Mount (SMT) Magnetic Audio Transducer Buzzer | | SMD | |
| 4 | U1 | 1 | Microchip | ATTINY85-20PU | 8-bit Microcontroller with In-System Programmable Flash Check prices| | | |
| 5 | LED1 | 1 | | | | | | | |
| 6 | G1,G2 | 2 | | | | | | | |

## Eletronic Circuit ##
![eletric](https://github.com/RodrigoDornelles/pcb-snowman-xmas/raw/master/images/eletronic.png)


## 3D View ##
| ![3d](https://github.com/RodrigoDornelles/pcb-snowman-xmas/raw/master/images/snow3dhd.png) | 
| - |

| ![3d](https://github.com/RodrigoDornelles/pcb-snowman-xmas/raw/master/images/snow3dfront.png) | ![3d](https://github.com/RodrigoDornelles/pcb-snowman-xmas/raw/master/images/snow3ddiagonal.png)|
| - | - |
