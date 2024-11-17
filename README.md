# Demo
![SS1](https://github.com/user-attachments/assets/e63fac7f-73a0-47b8-b06e-7e78e7e3a4bb)
![SS3](https://github.com/user-attachments/assets/3c3d82ae-708e-4f8c-85b9-a3717f5cfb0d)
![SS2](https://github.com/user-attachments/assets/9434ca2b-db64-4580-92cc-cc23b6a362a0)
![SS4](https://github.com/user-attachments/assets/e85eae66-0b1e-4816-b100-fa79384e9336)


https://github.com/user-attachments/assets/c07f27e2-9173-4dd9-99bb-a6f63b1f210f


# Requirements
1. This Suckless repo
2. Nerd Fonts
3. jsoncpp, yajl, dwmipcpp libraries.
4. [polybar-dwm-module](https://github.com/mihirlad55/polybar-dwm-module)
5. [picom-ftlabs](https://github.com/FT-Labs/picom)
6. [Ranger CLI](https://github.com/ranger/ranger) (File Manager)
7. [Zen](https://zen-browser.app/) (Web Browser)
8. [Spicetify](https://spicetify.app/) (Spotify customization)
9. [Python-pywal](https://github.com/dylanaraps/pywal)
10. Git

# Installation
1. Install your preferred Nerd Fonts. I used Lekton, Ubuntu, Hack and Monofur.
2. Clone this repository (preferably in your home directory) `git clone https://github.com/Tahsin404/Suckless.git`. Do not compile just yet.
3. Follow the instructions and install [polybar-dwm-module](https://github.com/mihirlad55/polybar-dwm-module) from their git repo. You do not need to patch this dwm with IPC and anybar as they are already patched in. For Arch Users you can use the AUR:
   `yay -S polybar-dwm-module`
5. Make a directory in .config named polybar then cd into Suckless and copy config.ini and bar.sh into it.
   ```
   mkdir $HOME/.config/polybar
   cd Suckless
   cp config.ini $HOME/.config/polybar
   cp bar.sh $HOME/.config/polybar
   ```
6. Install [python-pywal](https://github.com/dylanaraps/pywal) and set the theme that complements your chosen wallpaper. If you want the exact look as the demo, copy all the *.h files in .cache/wal
   ```
   #For Arch Users:
   yay -S python-pywal
   wal -i $HOME/Suckeless/Wallpaper/gargantua-black-3840x2160-9621.jpg
   
   # For Demo Look
   cp *.h $HOME/.cache/wal
   ```
7. Install [picom-ftlabs](https://github.com/FT-Labs/picom) for the exact animation shown in Demo. Make a folder in .config named *picom* and paste picom.conf there.
   ```
   #For Arch users
   yay -S picom-ftlabs-git
   mkdir $HOME/.config/picom
   cp picom.conf $HOME/.config/picom
   ```
8. Install [starship](https://starship.rs/) and copy the .toml file into .config `cp starship.toml ~/.config`   
9. cd into the dwm, st and dmenu folders and `make` and `make clean install`
10. You can also copy the ranger config files from the Suckless folder into your own ranger config folder if you want this look. And some shortcuts.

## Notes
When applying colorscheme to dwm with wal, I got an error, this is because I don't have SchemeUrgent patch. If you decide to patch it in then you will have no problems otherwise you will have to manually add the lines from colors-wal-dwm.h
