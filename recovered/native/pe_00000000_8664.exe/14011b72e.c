/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011b72e */

void Unwind_14011b72e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  *(undefined1 *)(param_2 + 0x206) = 1;
  *(undefined1 *)(param_2 + 0x207) = 1;
  plVar1 = *(longlong **)(param_2 + 0x1e8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x1b0));
    *(undefined8 *)(param_2 + 0x1e8) = 0;
  }
  *(undefined1 *)(param_2 + 0x206) = 1;
  *(undefined1 *)(param_2 + 0x207) = 1;
  return;
}

