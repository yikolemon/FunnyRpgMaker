/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140028990 */

void Unwind_140028990(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x1f8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0xe0));
    *(undefined8 *)(param_2 + 0x118) = 0;
  }
  *(undefined1 *)(param_2 + 0x212) = 1;
  *(undefined1 *)(param_2 + 0x213) = 1;
  return;
}

