/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cf032 */

void Unwind_1800cf032(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x8e);
  *(undefined1 *)(param_2 + 0x8f) = uVar1;
  plVar2 = *(longlong **)(param_2 + 0x60);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != (longlong *)(param_2 + 0x28));
    *(undefined8 *)(param_2 + 0x60) = 0;
  }
  *(undefined1 *)(param_2 + 0x8f) = uVar1;
  return;
}

