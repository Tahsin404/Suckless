#! /bin/sh

# Terminate already running bar instances
killall polybar

# Wait untill the processes have been shut down
while pgrep -u $UID -x polybar >/dev/null; do sleep 1; done

# Launch the bar
polybar left --config=$HOME/.config/polybar/config.ini &
polybar center --config=$HOME/.config/polybar/config.ini &
polybar right --config=$HOME/.config/polybar/config.ini &
