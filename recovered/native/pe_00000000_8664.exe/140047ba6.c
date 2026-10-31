/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140047ba6 */

void FUN_140047ba6(undefined8 *param_1)

{
  *param_1 = FileDropTarget::vftable;
  RevokeDragDrop((HWND)param_1[1]);
  FUN_140047398(param_1 + 5);
  return;
}

