" Usa el modo nocompatible con Vi (habilita muchas mejoras)
set nocompatible

" Habilita el resaltado de sintaxis
syntax enable

" Muestra los números de línea
set number

" Resalta la línea actual
set cursorline

" Resalta los resultados de búsqueda
set hlsearch

" Búsqueda incremental (muestra resultados mientras escribes)
set incsearch

" Usa tabulaciones de 4 espacios y conviértelas en espacios
set tabstop=4
set shiftwidth=4
set noexpandtab
set softtabstop=4

" Mapeo para salir del modo Insertar más rápido
inoremap jk <Esc>

" No cortar líneas largas visualmente
set nowrap

" Evita crear archvos .swp
set noswapfile

" Deja margen de 3 líneas arriba/abajo
set scrolloff=3

" Mantiene la indentación previa
set autoindent

" Mejora la indentación automática
set smartindent

" --- Plugins ---
call plug#begin('~/.vim/plugged')
Plug '42Paris/42header'
call plug#end()

" --- Configuración 42header ---
autocmd BufNewFile *.c,*.h Stdheader
