/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801aa970 */

void FUN_1801aa970(void)

{
  longlong lVar1;
  char *pcVar2;
  char *pcVar3;
  
  lVar1 = FUN_180107ee8();
  FUN_180133606("Double-click on title bar to collapse window.");
  FUN_180133606(
               "Click and drag on lower corner or border to resize window.\n(double-click to auto fit window to its contents)"
               );
  FUN_180133606("Ctrl+Click on a slider or drag box to input value as text.");
  FUN_180133606("Tab/Shift+Tab to cycle through keyboard editable fields.");
  FUN_180133606("Ctrl+Tab/Ctrl+Shift+Tab to focus windows.");
  if (*(char *)(lVar1 + 0x48) == '\x01') {
    FUN_180133606("Ctrl+Mouse Wheel to zoom window contents.");
  }
  FUN_180133606("While inputting text:\n");
  FUN_180119fae(0);
  FUN_180133606("Ctrl+Left/Right to word jump.");
  FUN_180133606("Ctrl+A or double-click to select all.");
  FUN_180133606("Ctrl+X/C/V to use clipboard cut/copy/paste.");
  FUN_180133606("Ctrl+Z to undo, Ctrl+Y/Ctrl+Shift+Z to redo.");
  FUN_180133606("Escape to revert.");
  FUN_18011a002(0);
  FUN_180133606("With Keyboard controls enabled:");
  FUN_180119fae(0);
  FUN_180133606("Arrow keys or Home/End/PageUp/PageDown to navigate.");
  FUN_180133606("Space to activate a widget.");
  FUN_180133606("Return to input text into a widget.");
  FUN_180133606(
               "Escape to deactivate a widget, close popup,\nexit a child window or the menu layer, clear focus."
               );
  FUN_180133606("Alt to jump to the menu layer of a window.");
  FUN_180133606("Menu or Shift+F10 to open a context menu.");
  FUN_18011a002(0);
  FUN_180133606("With Gamepad controls enabled:");
  FUN_180119fae(0);
  FUN_180133606("D-Pad: Navigate / Tweak / Resize (in Windowing mode).");
  pcVar3 = "East";
  pcVar2 = "South";
  if (*(char *)(lVar1 + 0x49) != '\0') {
    pcVar2 = "East";
  }
  FUN_180133606("%s Face button: Activate / Open / Toggle. Hold: activate with text input.",pcVar2);
  if (*(char *)(lVar1 + 0x49) != '\0') {
    pcVar3 = "South";
  }
  FUN_180133606("%s Face button: Cancel / Close / Exit.",pcVar3);
  FUN_180133606(
               "West Face button: Toggle Menu. Hold for Windowing mode (Focus/Move/Resize windows)."
               );
  FUN_180133606("North Face button: Open Context Menu.");
  FUN_180133606("L1/R1: Tweak Slower/Faster, Focus Previous/Next (in Windowing Mode).");
  FUN_18011a002(0);
  return;
}

