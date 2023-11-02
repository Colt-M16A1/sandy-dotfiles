#!/bin/sh

userresources=$HOME/.Xresources
usermodmap=$HOME/.Xmodmap
sysresources=/etc/X11/xinit/.Xresources
sysmodmap=/etc/X11/xinit/.Xmodmap

export QT_QPA_PLATFORMTHEME="qt5ct"
export QT_STYLE_OVERRIDE=kvantum

xrandr --newmode "1920x1080_60.00"  173.00  1920 2048 2248 2576  1080 1083 1088 1120 -hsync +vsync
xrandr --addmode VGA1 1920x1080_60.00
#xrandr --output LVDS1 --off --output DP1 --off --output DP2 --off --output DP3 --off --output HDMI1 --off --output HDMI2 --off --output HDMI3 --off --output VGA1 --mode 1920x1080_60.00 --pos 0x0 --rotate normal --output VIRTUAL1 --off
xrandr --newmode "1280x720_60.00"   74.50  1280 1344 1472 1664  720 723 728 748 -hsync +vsync
xrandr --addmode VGA1 1280x720_60.00

xinput set-prop "Logitech G102 LIGHTSYNC Gaming Mouse" "Device Accel Profile" -1
xinput set-prop "Logitech G102 LIGHTSYNC Gaming Mouse" "Device Accel Constant Deceleration" 8
xinput set-prop 13 314 -0.7

bluetoothctl power off

if [ -f $sysresources ]; then
    xrdb -merge $sysresources
fi

if [ -f "$userresources" ]; then
    xrdb -merge "$userresources"
fi

# start some nice programs

if [ -d /etc/X11/xinit/xinitrc.d ] ; then
 for f in 2.d/?*.sh ; do
  [ -x "$f" ] && . "$f"
 done
 unset f
fi

if [ -f $usermodmap	]; then
    xmodmap $usermodmap
else
	xmodmap $sysmodmap
fi

slstatus &
dunst &
clipit &
redshift -l 71.3:41.6 -t 4500:4500 &
pkill -USR1 redshift
unclutter &
nm-applet &
udiskie --smart-tray &
syncthing --no-browser &
/usr/lib/polkit-gnome/polkit-gnome-authentication-agent-1 &
pipewire &
pipewire-pulse &
wireplumber &
pulsemixer --unmute &
kdeconnect-indicator &
nitrogen --restore &
setxkbmap -layout tr &

exec dwm
#exec dbus-launch --exit-with-session dwm
