" Auto-install vim-plug
if empty(glob('~/.config/nvim/autoload/plug.vim'))
  silent !curl -fLo ~/.config/nvim/autoload/plug.vim --create-dirs
    \ https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
endif


call plug#begin('~/.config/nvim/autoload/plugged')

    "Colorscheme
    Plug 'andersevenrud/nordic.nvim'
    " Lightline
    Plug 'itchyny/lightline.vim',
    " Ranger
    Plug 'kevinhwang91/rnvimr', {'do': 'make sync'}
    " Seacrh fzf and ripgrep
    Plug 'junegunn/fzf', { 'do': { -> fzf#install() } }
    Plug 'junegunn/fzf.vim'
    Plug 'airblade/vim-rooter'
    " Better Syntax Support
    Plug 'sheerun/vim-polyglot'
    " Stable version of coc
    Plug 'neoclide/coc.nvim', {'branch': 'release'}

call plug#end()

