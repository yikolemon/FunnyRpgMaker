/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011ff5e */

void Unwind_14011ff5e(undefined8 param_1,longlong param_2)

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

