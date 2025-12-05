# 🌌 ASTRA: TERMINAL CONSTELLATION MAP

> A simple, interactive star map project built in C++ using the ncurses library. It displays the 88 official constellations within a terminal grid.

---

<img width="1020" height="589" alt="image" src="https://github.com/user-attachments/assets/f796b9d8-3c9d-4888-8fb1-79449a8e8b22" />

---

## ✨ Key Features

* **Full Catalog:** Displays all 88 official IAU (International Astronomical Union) constellations.
* **Coordinate Accuracy:** Constellations are mapped onto an 18x48 grid based on their actual Right Ascension (RA) and Declination (Dec) coordinates.
* **Collision Detection:** Precise detection of which constellation is located under the cursor.
* **Data Display:** Shows the name, main star, and precise astronomical coordinates.
* **Ncurses:** Lightweight, fast, and graphics-environment-independent terminal interface.

---

## 🛠️ Installation and Compilation

The project requires a C++ compiler (GCC recommended) and the **ncurses** library.

### Prerequisites:

Ensure you have the ncurses development library installed (or equivalent for your OS):

# For Debian/Ubuntu/Mint systems
sudo apt install libncurses5-dev libncursesw5-dev

# For Arch Linux systems
sudo pacman -S ncurses

### Compilation:

Copy the source code and compile using g++ (remember to link with the -lncurses flag):

g++ main.cpp constellations.cpp Constellation.cpp -o astra -lncurses

### Running:

./astra

---

## 🕹️ Controls

| Key | Action |
| :--- | :--- |
| W | Cursor Up |
| S | Cursor Down |
| A | Cursor Left |
| D | Cursor Right |
| Q | Quit Program |

---

## 🗺️ Data Architecture

* **Global Map:** Logical 18x48 grid. Each cell represents a section of the sky (approx. 30 minutes of Right Ascension by 10 degrees of Declination).

---

## 🚀 Future Plans (TODO)

* Implement Zoom-in mode to specific consteallation
* Implement search mode (type a name to jump to the target).

---

## 📜 Author
*Piotr Parzyszek
