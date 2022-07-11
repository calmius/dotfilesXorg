export EDITOR="nvim"
export TERMINAL="st"
export BROWSER="qutebrowser"
[[ -z $DISPLAY && $XDG_VTNR -eq 1 ]] && exec startx /home/calmius/.config/X11/xinitrc
