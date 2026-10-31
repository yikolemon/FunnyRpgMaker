/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d6c22 */

void Unwind_1801d6c22(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x208);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x1b0));
    *(undefined8 *)(param_2 + 0x1e8) = 0;
  }
  *(undefined1 *)(param_2 + 0x216) = 1;
  *(undefined1 *)(param_2 + 0x217) = 1;
  return;
}

