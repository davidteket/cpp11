### Leírás - Please scroll down to find the english equivalent of the text that follows

Ez a projekt a Bjarne Stroupstrup-féle "A C++ Programozási Nyelv - 4-ik Kiadás" című könyvhöz
mellékelt gyakorlati feladatokra készített megoldásaimat tartalmazza.
ISBN: `ISBN-13: 978-0-321-56384-2`

A projekt a következőkben taglaltak szerint épül fel.

### 1. Eszközök

  - Operációs Rendszer:     `Linux Mint 18.3 Sylvia (MATE 64bit)`
  - Fordító:                `gcc (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609`
  - Programozási Nyelv:     `C++11`
  - Teszt Keretrendszer:    `Google Test release-1.8.1`
  - Szerkesztő:             `Atom 1.26.1 x64`
  - Állomány Készítés:      `GNU Make 4.1`
  - LaTeX - PDF Szerkesztő: `Kile 2.1.3`

### 2. Megoldások

  A megoldások struktúrálása a következő jegyzék-séma szerint:

    `~/c++11/exercises/chapter_number_chapter_title/exercise_number`

  Az `exercise_number`, azaz a megoldást tartalmazó mappa szerkezete a következő:

    `~/exercise_number/src`           - Jegyzék: `*.cpp` kiterjesztésű forráskódokat tartalmaz.
    `~/exercise_number/include`       - Jegyzék: `*.h`   kiterjesztésű fejállományokat tartalmaz.
    `~/exercise_number/test`          - Jegyzék: `*.cc`  kiterjesztésű egységteszt forráskódokat tartalmaz.
    `~/exercise_number/solution`      - Jegyzék: `*.o`   kiterjesztésű végrehajtható állományt tartalmaz.

    `~/exercise_number/makefile`      - Fájl:    A fordítónak kiadott `make` parancs által, a fájlban lévő
                                                 utasítások szerinti (gcc fordítás - összeszerkesztés)
                                                 futtatható állományt készítő leírás.

  Ezen felül a feladat leírását az `~/exercise_number` tartalmazza a következőképpen:

    `EN_exercise.pdf`
    `HU_gyakorlat.pdf`

### 3. Dokumentumok

Bár a projektben előforduló `*.pdf` dokumentumokat a Kile LaTeX szerkesztővel állítom elő,
az egyszerűsítés kedvéért magukat a `*.tex` fájlokat nem tartalmazza a projekt _kivéve ha a megoldás nem kód hanem dokumentum_.

A forráskódokban kommenteket csak nem-triviális esetben írok, és azt is a következő séma szerint:

  `// EN:`
  `// Description of some non-trivial class / function etc.`
  `//`
  `// HU:`
  `// Valamely nem-triviális osztály / függvény stb. leírása.`
  `//`

### 4. Validáció

Az elkészített megoldásokat minden esetben véglegesítem a `Google Test` keretrendszer használatával,
azaz egység teszteket írok hozzájuk, melyek igazolják az elkészített kód helyességét.

Tehát `git push` csak abban az esetben, ha az adott gyakorlat teljesen késznek számít,
és az egység tesztek is 100%-os hibamentességgel lefutottak.

### Description

This project contains my solutions to the exercises attached to Bjarne Stroupstrup's book
"The C++ Programming Language 4th Edition".
ISBN: `ISBN-13: 978-0-321-56384-2`

The project is being built by the following descriptions.

### 1. Tools

  - Operating System:      `Linux Mint 18.3 Sylvia (MATE 64bit)`
  - Compiler:              `gcc (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609`
  - Programming Language:  `C++11`
  - Test Framework:        `Google Test release-1.8.1`
  - Editor   :             `Atom 1.26.1 x64`
  - Executeable:           `GNU Make 4.1`
  - LaTeX - PDF Editor:    `Kile 2.1.3`

### 2. Solutions

  The solutions are being structured by the following directory-scheme:

    `~/c++11/exercises/chapter_number_chapter_title/exercise_number`

  The `exercise_number` directory contains the given solution which looks like this:  

    `~/exercise_number/src`           - Directory: contains source code files with `*.cpp` extensions.
    `~/exercise_number/include`       - Directory: contains header files with `*.h` extensions.
    `~/exercise_number/test`          - Directory: contains unit test source code files with `*.cc` extensions.
    `~/exercise_number/solution`      - Directory: contains executeable binaries with `*.o` extensions.

    `~/exercise_number/makefile`      - File:    By issuing `make` to the compiler, the given set of instructions
                                                 (gcc compilation - linkage) will make the executeable binaries.                                                 

  On top of this, the description of a given exercise can be found inside `~/exercise_number` which is:

    `EN_exercise.pdf`
    `HU_gyakorlat.pdf`

### 3. Documents

While every `*.pdf` document will be produced with the Kile LaTeX editor, for simplification
purposes the individual `*.tex` files will not be included _except if the solution is not code but document_.

In source code, comments are only used in non-trivial cases by the following scheme:

  `// EN:`
  `// Description of some non-trivial class / function etc.`
  `//`
  `// HU:`
  `// Valamely nem-triviális osztály / függvény stb. leírása.`
  `//`

### 4. Validation

I validate the completed solutions by using the `Google Test` framework,
so I write unit tests for each of them to confirm whether my code produces valid output.

So `git push` used only if the given exercise considered complete, and the unit tests
have ran with 100% success rate.
