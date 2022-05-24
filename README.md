# Qt Process Scanner Widget
This project consists of a process scanner class that leverages WinAPI to provide process scanning capabilities, a widget which utilizes the process scanner in order to provide an interface for selecting processes and process windows, and a basic dialog that implements this widget. Due to the fact that the process scanner class depends on WinAPI, this project is only compatible with Windows. This repository is meant to be used as a submodule in other repositories, and when doing so, the "include" branch should be used for convenience.

## Dependents
- [cursor-locker](https://github.com/PsychedelicShayna/cursor-locker)
- [overlayer](https://github.com/PsychedelicShayna/overlayer)
