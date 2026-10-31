/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400022aa */

void FUN_1400022aa(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = plVar1;
  while (plVar2 = (longlong *)*plVar2, plVar2 != plVar1) {
    if ((longlong *)plVar2[9] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[9] + 0x10))();
    }
  }
  FUN_140004cf6(param_1);
  FUN_140004c74(param_1);
  return;
}

