/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101a2ffc */

void FUN_101a2ffc(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  iVar1 = FUN_1010330d();
  FUN_1012d551("Double-click on title bar to collapse window.");
  FUN_1012d551(
              "Click and drag on lower corner or border to resize window.\n(double-click to auto fit window to its contents)"
              );
  FUN_1012d551("Ctrl+Click on a slider or drag box to input value as text.");
  FUN_1012d551("Tab/Shift+Tab to cycle through keyboard editable fields.");
  FUN_1012d551("Ctrl+Tab/Ctrl+Shift+Tab to focus windows.");
  if (*(char *)(iVar1 + 0x34) == '\x01') {
    FUN_1012d551("Ctrl+Mouse Wheel to zoom window contents.");
  }
  FUN_1012d551("While inputting text:\n");
  FUN_10115158(0);
  FUN_1012d551("Ctrl+Left/Right to word jump.");
  FUN_1012d551("Ctrl+A or double-click to select all.");
  FUN_1012d551("Ctrl+X/C/V to use clipboard cut/copy/paste.");
  FUN_1012d551("Ctrl+Z to undo, Ctrl+Y/Ctrl+Shift+Z to redo.");
  FUN_1012d551("Escape to revert.");
  FUN_101151af(0);
  FUN_1012d551("With Keyboard controls enabled:");
  FUN_10115158(0);
  FUN_1012d551("Arrow keys or Home/End/PageUp/PageDown to navigate.");
  FUN_1012d551("Space to activate a widget.");
  FUN_1012d551("Return to input text into a widget.");
  FUN_1012d551(
              "Escape to deactivate a widget, close popup,\nexit a child window or the menu layer, clear focus."
              );
  FUN_1012d551("Alt to jump to the menu layer of a window.");
  FUN_1012d551("Menu or Shift+F10 to open a context menu.");
  FUN_101151af(0);
  FUN_1012d551("With Gamepad controls enabled:");
  FUN_10115158(0);
  FUN_1012d551("D-Pad: Navigate / Tweak / Resize (in Windowing mode).");
  pcVar3 = "East";
  pcVar2 = "South";
  if (*(char *)(iVar1 + 0x35) != '\0') {
    pcVar2 = "East";
  }
  FUN_1012d551("%s Face button: Activate / Open / Toggle. Hold: activate with text input.",pcVar2);
  if (*(char *)(iVar1 + 0x35) != '\0') {
    pcVar3 = "South";
  }
  FUN_1012d551("%s Face button: Cancel / Close / Exit.",pcVar3);
  FUN_1012d551("West Face button: Toggle Menu. Hold for Windowing mode (Focus/Move/Resize windows)."
              );
  FUN_1012d551("North Face button: Open Context Menu.");
  FUN_1012d551("L1/R1: Tweak Slower/Faster, Focus Previous/Next (in Windowing Mode).");
  FUN_101151af(0);
  return;
}

