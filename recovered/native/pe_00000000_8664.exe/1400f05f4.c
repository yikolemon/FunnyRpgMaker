/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400f05f4 */

void FUN_1400f05f4(void)

{
  longlong lVar1;
  char *pcVar2;
  char *pcVar3;
  
  lVar1 = FUN_140081200();
  FUN_1400ac536("Double-click on title bar to collapse window.");
  FUN_1400ac536(
               "Click and drag on lower corner or border to resize window.\n(double-click to auto fit window to its contents)"
               );
  FUN_1400ac536("Ctrl+Click on a slider or drag box to input value as text.");
  FUN_1400ac536("Tab/Shift+Tab to cycle through keyboard editable fields.");
  FUN_1400ac536("Ctrl+Tab/Ctrl+Shift+Tab to focus windows.");
  if (*(char *)(lVar1 + 0x48) == '\x01') {
    FUN_1400ac536("Ctrl+Mouse Wheel to zoom window contents.");
  }
  FUN_1400ac536("While inputting text:\n");
  FUN_1400932c6(0);
  FUN_1400ac536("Ctrl+Left/Right to word jump.");
  FUN_1400ac536("Ctrl+A or double-click to select all.");
  FUN_1400ac536("Ctrl+X/C/V to use clipboard cut/copy/paste.");
  FUN_1400ac536("Ctrl+Z to undo, Ctrl+Y/Ctrl+Shift+Z to redo.");
  FUN_1400ac536("Escape to revert.");
  FUN_14009331a(0);
  FUN_1400ac536("With Keyboard controls enabled:");
  FUN_1400932c6(0);
  FUN_1400ac536("Arrow keys or Home/End/PageUp/PageDown to navigate.");
  FUN_1400ac536("Space to activate a widget.");
  FUN_1400ac536("Return to input text into a widget.");
  FUN_1400ac536(
               "Escape to deactivate a widget, close popup,\nexit a child window or the menu layer, clear focus."
               );
  FUN_1400ac536("Alt to jump to the menu layer of a window.");
  FUN_1400ac536("Menu or Shift+F10 to open a context menu.");
  FUN_14009331a(0);
  FUN_1400ac536("With Gamepad controls enabled:");
  FUN_1400932c6(0);
  FUN_1400ac536("D-Pad: Navigate / Tweak / Resize (in Windowing mode).");
  pcVar3 = "East";
  pcVar2 = "South";
  if (*(char *)(lVar1 + 0x49) != '\0') {
    pcVar2 = "East";
  }
  FUN_1400ac536("%s Face button: Activate / Open / Toggle. Hold: activate with text input.",pcVar2);
  if (*(char *)(lVar1 + 0x49) != '\0') {
    pcVar3 = "South";
  }
  FUN_1400ac536("%s Face button: Cancel / Close / Exit.",pcVar3);
  FUN_1400ac536(
               "West Face button: Toggle Menu. Hold for Windowing mode (Focus/Move/Resize windows)."
               );
  FUN_1400ac536("North Face button: Open Context Menu.");
  FUN_1400ac536("L1/R1: Tweak Slower/Faster, Focus Previous/Next (in Windowing Mode).");
  FUN_14009331a(0);
  return;
}

