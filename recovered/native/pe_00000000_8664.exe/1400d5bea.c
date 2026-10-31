/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d5bea */

void FUN_1400d5bea(longlong param_1)

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
    FUN_1400bf498(plVar1);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}

