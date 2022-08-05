# DWM Beedle

**Beedle** is a minimal bar management program intended for DWM and written in C. You can build up each bar module to be as simple or complex as you like by using simple shell scripts or your own custom C function for each.

Pack light, or load your bar up with as many interactive modules as you like, tying in with your own custom code for ultimate extensibility. 

# Installing
Clone the GitHub repo and cd into the new folder
```
git clone https://github.com/noahlavelle/beedle
cd beedle
```

Then install using Make
```
make
sudo make install
```

# Running
You can run ``beedle`` in a terminal or place it in a startup file to run when you start dwm such as adding
```
beedle &
```

in your ``.xinitrc``

Alternatively,


# Modules
## Creating
### Shell Script
### C Function
## Updating
### On an interval
### Signaling
### Schedule for specific times

