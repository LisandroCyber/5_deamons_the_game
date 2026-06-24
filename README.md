# 🕯️ Los Cinco Demonios

Juego de dados para un jugador en consola, desarrollado en C++ como **Trabajo Práctico Integrador de Programación I** — Tecnicatura Universitaria en Programación, UTN FRGP (2026).

---

## 📖 Historia

UTN FRGP, invierno de 2026. Sos el último descendiente de la familia Dieser, guardianes del Necronomicón durante generaciones. Anoche, cultistas irrumpieron en la mansión y liberaron a las cinco entidades que el libro mantenía encadenadas.

Armado solo con los dados de hueso heredados de tus antepasados, tenés **15 invocaciones** antes del amanecer para sellarlas a todas. Si fallás, tu alma quedará atrapada entre las páginas del libro para siempre.

---

## 🎮 Mecánicas del juego

En cada turno tirás 2 dados. Si el resultado cumple la condición de uno o más demonios libres, elegís cuál sellar. Si ninguno coincide, el turno se consume igual.

### Los cinco demonios

| Nombre | Sombra | Condición de sellado |
|---|---|---|
| Baramos | Sombra del Fuego | Ambos dados iguales (par) |
| Dracolord | Sombra del Agua | Suma exacta de 7 |
| Darck | Sombra de la Tierra | Dados consecutivos (ej: 3 y 4) |
| WhiteKing | Sombra del Aire | Suma mayor o igual a 10 |
| Lazamanus | Sombra Mayor | Doble 5 o Doble 6 |

> Una misma tirada puede cumplir varias condiciones. En ese caso el jugador elige cuál demonio sellar.

### ⚠️ Ataque de Lazamanus

Mientras Lazamanus esté libre, al finalizar cada turno en que no sellaste ningún demonio, tira 3 dados automáticamente. Si obtiene **triple 6**, perdés la partida de inmediato.

### Condiciones de victoria y derrota

- **Victoria:** sellás los 5 demonios antes de agotar las 15 invocaciones.
- **Derrota:** se agotan las invocaciones con al menos un demonio libre, o Lazamanus obtiene triple 6.

---

## 🖥️ Estructura del menú

```
MENU PRINCIPAL
  [1] Jugar
      [1] Nueva Partida
      [2] Tutorial
      [Esc] Volver
  [2] Estadísticas
  [3] Créditos
  [4] Historia
  [Esc] Salir
```

---

## 🗂️ Estructura del proyecto

```
5_deamons_the_game/
├── main.cpp                  # Punto de entrada, inicializa la semilla aleatoria
├── pantallaPrincipal.cpp/h   # Pantalla de carga animada al iniciar
├── menu.cpp/h                # Menú principal y menú de juego
├── jugar.cpp/h               # Lógica principal de la partida
├── rondas.cpp/h              # Flujo de cada ronda (mostrar estado, resolver turno)
├── invocaciones.cpp/h        # Evaluación de dados y demonios sellables
├── sellados.cpp/h            # Lógica para sellar un demonio
├── dados.cpp/h               # Función de tirada de dado (rand)
├── ataque_lazamanus.cpp/h    # Ataque de Lazamanus con 3 dados
├── contarSellados.cpp/h      # Contador de demonios sellados
├── estadisticas.cpp/h        # Cálculo y visualización de estadísticas
├── final_del_juego.cpp/h     # Pantallas de victoria y derrota
├── creditos.cpp/h            # Pantalla de créditos
├── comoJugar.cpp/h           # Tutorial e historia del juego
├── exit.cpp/h                # Confirmación de salida
└── rlutil.h                  # Biblioteca externa para manejo de consola
```

---

## 🛠️ Tecnologías y conceptos aplicados

- **Lenguaje:** C++
- **Entorno:** Aplicación de Consola — Visual Studio
- **Biblioteca:** [rlutil](https://github.com/tapio/rlutil) para colores, posicionamiento de cursor y captura de teclas
- **Conceptos:** vectores, funciones, estructuras de control, generación de números aleatorios (`rand`), modularización en múltiples archivos `.cpp`/`.h`

---

## 🚀 Cómo compilar y ejecutar

1. Clonar el repositorio:
   ```bash
   git clone https://github.com/LisandroCyber/5_deamons_the_game.git
   ```
2. Abrir `5_deamons_the_game.slnx` con **Visual Studio**.
3. Compilar y ejecutar con `Ctrl + F5`.

> ⚠️ El juego usa `rlutil.h` para el manejo de consola. Se recomienda ejecutarlo en una terminal de Windows (CMD o terminal integrada de Visual Studio) para que los colores y el posicionamiento de cursor funcionen correctamente.

---

## 👥 Créditos

- **Programación y desarrollo:** Lisandro Romero — Legajo 26104
- **Diseño del juego:** Angel Simón, basado en novelas de H.P. Lovecraft
- **Nombres de los demonios:** tomados del juego *Dragon Quest Monsters*
- **Control de dificultad:** Laura Vélez
- **Equilibrio del juego:** consultado con Claude (IA)
- **Imágenes:** realizadas con ChatGPT (IA)

---
