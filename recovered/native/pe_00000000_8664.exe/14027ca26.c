/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027ca26 */

void FUN_14027ca26(longlong *param_1)

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
  FUN_1402c6898(param_1);
  FUN_14027deac(param_1);
  return;
}

