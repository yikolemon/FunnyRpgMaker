/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c762e */

void FUN_1801c762e(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
    plVar1[6] = 0;
    plVar1[7] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[8] = 0;
    FUN_180146568(plVar1);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}

