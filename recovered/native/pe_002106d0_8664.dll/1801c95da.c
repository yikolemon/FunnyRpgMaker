/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c95da */

void FUN_1801c95da(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
    *plVar1 = 0;
    if ((longlong *)plVar1[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[1] + 0x10))();
    }
    plVar1[1] = 0;
    FUN_180146568(plVar1);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}

