#! /bin/sh

# Terminate already running bar instances
killall polybar

# Wait untill the processes have been shut down
while pgrep -u $UID -x polybar >/dev/null; do sleep 1; done

# Launch the bar
polybar dwm --config=$HOME/.config/polybar/config.ini &

if [[ $(xrandr -q | grep 'HDMI1 connected') ]]; then
	polybar dwm_external &
fi
