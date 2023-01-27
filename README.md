# Casbah: Amnesia Pre-Alpha, Once Again
Here is everything you need to compile Casbah, a playable recreation of early pre-alpha videos from 2008-2009 that were recorded years prior to Amnesia: The Dark Descent's final release

# Disclaimer
Please note that this project is not completely accurate to the original source material; the game files are also not free and open to redistribute but can be safely reused for mods, as those are lax on using copyrighted assets. However, you can share and do anything you want with the source code of Casbah as long as it stays under the GPLv3 license (see the `LICENSE` file for more details)

Other than that, build and installation instructions are below this text. Good luck and have fun :-)

# Instructions
## Building
Visual Studio 2022 is required to build compiled versions of the game on Windows. I do plan on adding proper cmake support in the future so that Casbah could be compileable on other systems and compilers with the help of some programmer (or any other who is expertise at cmake), but for now that's out of my reach and I'm not really willing to do it at the moment

Other than that, you must have the project cloned or downloaded. To clone it enter this command in your terminal:
```
git clone --branch Casbah --single-branch https://github.com/RoozerXC/EXPL2.git
```

Since Casbah is a branch of EXPL2 and I can't make separate forks of the same codebase, you'll just have to get used to going to the EXPL2 folder sometimes. Thanks GitHub for not letting me be able to make as many forks as I want, and without your incompetence and ignorance I could have done things a lot more quicker and easier especially for this project

If you want to make any pull requests to Casbah at some point, please only submit those to the `Casbah` branch and not the `EXPL2` branch

### Windows
1. Open `Amnesia.sln` (will be renamed to `Casbah.sln`)
2. Set `Debug x64` to `Release x64`
- The reason for this is that `Debug x64` is sometimes laggy and makes the game prone to crashing
3. Go to the projects list, right-click on `Lux`, and build
4. Binary executables should be compiled at `x64` in the project folder

### Linux
to do

### MacOS
to do

## Installation
Before downloading and installing Casbah, visit https://roozerxc.neocities.org/stuff/casbah (WIP)

Casbah uses a simple self-extracting file to "install" the game. If you're concerned about the safety of self-extracting files, you can download a ZIP archive of the game which has everything in it. If at some point you want to uninstall Casbah, just remove the folder and that's it

**Do not download Casbah from unofficial sources. _You may risk getting viruses or malware!_**

### Windows
1. Download the Casbah installer from the Neocities page and open it. A menu will pop up allowing you to choose a directory or folder to install Casbah in; usually I'd recommend creating a `Games` folder in `%SYSTEMDRIVE%` and installing Casbah from there (e.g. `%SYSTEMDRIVE%\Games\Casbah`)
- `%SYSTEMDRIVE%` is the path where your version of Windows is installed in; for example, Windows may be installed in the `C:` drive
2. Click on Extract. This may take a while depending on your CPU and hard drive speed
3. Go to the extracted Casbah folder, and double click on `Casbah.exe`. The game should play normally

### Linux
to do

### MacOS
to do

# Goals
Small list of goals. Most of them are not done yet simply because this project just started; some more will be added soon

## Mod goals
- Change lantern HandObject entity to a large, orange PointLight
- Add original placeholder music from Penumbra: Black Plague
- Edit base maps to match stuff from [Thomas Grip's Google Drive folder](https://drive.google.com/drive/folders/0B46VxpjfO5WCd0g1a2FtT2psdWc) as well as contents from the super_secret.rar file
- Custom story/mod support

## Engine goals
- Remove all Manpig (AMFP) as well as FBX references in the code
- Change the interface of Lux Inventory, and Journal
- Change editor interface
- More stuff coming later... yada yada
