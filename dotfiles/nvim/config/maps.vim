let mapleader=","

" Replace ex mode with gq
map Q gq
" Compiling documents
map <leader>c :w! \| !compiler "<c-r>%"<CR>
" Save file
map <leader>w :w! <CR>

map <leader>x :w! \| !xrdb -merge  ~/.Xresources "<c-r>%"<CR>


