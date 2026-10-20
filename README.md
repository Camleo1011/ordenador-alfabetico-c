# Alphabetical String Sorter in C

Un programa de consola desarrollado en C puro que recibe una lista de palabras por argumentos de línea de comandos, las ordena alfabéticamente y gestiona de manera rigurosa la memoria dinámica para evitar fugas (*memory leaks*).

## Características Técnicas
- **Gestión de Memoria:** Uso de asignación dinámica (`malloc`) con limpieza defensiva ante fallos de sistema.
- **Modularidad:** Separación limpia de la lógica algorítmica y funciones auxiliares mediante archivos de cabecera (`.h`).
- **Compilación Automatizada:** Incluye un `Makefile` con flags estrictos de compilación (`-Wall -Wextra -Werror -std=c11`).

## Requisitos
Asegúrate de tener instalado un entorno compatible con herramientas GNU (`gcc`, `make`) y opcionalmente `valgrind` para auditoría de memoria.

## Instalación y Uso

1. **Clonar el repositorio:**
   ```bash
   git clone [https://github.com/Camelo1011/ordenador-alfabetico-c.git](https://github.com/Camleo1011/ordenador-alfabetico-c.git)
   cd ordenador-alfabetico-c