![PCB Snowman Xmax](https://github.com/RodrigoDornelles/pcb-snowman-xmas/raw/master/images/banner.png)

![JULIALABS PCB DESIGN CHALLENGE](https://img.shields.io/badge/JuliaLabs%20PCB%20Design%20Challenge-in%20progress-lightgrey)
[![version](https://img.shields.io/github/v/release/rodrigodornelles/pcb-snowman-xmas?sort=semver)](https://github.com/RodrigoDornelles/pcb-snowman-xmas/releases)
[![license](https://img.shields.io/github/license/rodrigodornelles/pcb-snowman-xmas)](https://github.com/RodrigoDornelles/pcb-snowman-xmas/blob/master/LICENSE.txt)
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/a9735d4bfdf048999f5b794d47c6db3c)](https://www.codacy.com/gh/RodrigoDornelles/pcb-snowman-xmas/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=RodrigoDornelles/pcb-snowman-xmas&amp;utm_campaign=Badge_Grade)

> printed circuit board artistic badge with xmas theme for [@Juliallabs](https://github.com/juliallabs) (JuliaLabs) competition (2020/NOVEMBER) promoved by [PCBWAY](https://pcbway.com)

## About ##
Musical snowman badge where all the electrical components are useful for decoration design, this PCB will play a complete Christmas music sound (melody and harmony) because of its 4 buzzers and it will also have a led pulse in a rhythmic way, as the hat rotates (knob pot) will increase the volume or turn off the badge.

* [click here to view all images](https://github.com/RodrigoDornelles/pcb-snowman-xmas/blob/master/IMAGES.md)

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
| # | Designator | Qty | Part Number | Description |
| - | :--------- | --- | :---------- | :---------- | 
| 1 | R1 | 1 | WH148-1 10K L20 | RES POT 10.0K OHM 0.25W PTH |
| 2 | R2,R3,R4,R5,R6,R7 | 6 | RND1550805S8F2400T5E | RES 110.0 OHM 0.125W 1% 0815 SMD |
| 3 | LS1,LS2,LS3,LS4 | 4 | CMT-8530S-SMT-TR | 8.5 mm Magnetic Audio Transducer Passive Buzzer SMT  |
| 4 | U1 | 1 | ATTINY85-20PU | 8bit AVR Microcontroller Programmable Flash PTH |
| 5 | LED1 | 1 | L-424HDT | 2.25 V Red LED 3mm Cylindrical |
| 6 | ???| ? | | Battery Holder |
| 7 | D1,D2,D3,D4 | 4 | SMA-DO214AC | Diode SMD |

## Eletronic Circuit ##
![eletric](https://github.com/RodrigoDornelles/pcb-snowman-xmas/raw/master/images/eletronic_v2.png)

## 3D View ##
| ![3d](https://github.com/RodrigoDornelles/pcb-snowman-xmas/raw/master/images/snow3dhd.png) | 
| - |

| ![3d](https://github.com/RodrigoDornelles/pcb-snowman-xmas/raw/master/images/snow3dfront.png) | ![3d](https://github.com/RodrigoDornelles/pcb-snowman-xmas/raw/master/images/snow3ddiagonal.png)|
| - | - |
