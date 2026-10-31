/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002a84e */

void Unwind_14002a84e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x200);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x1a8));
    *(undefined8 *)(param_2 + 0x1e0) = 0;
  }
  *(undefined1 *)(param_2 + 0x216) = 1;
  *(undefined1 *)(param_2 + 0x217) = 1;
  return;
}

