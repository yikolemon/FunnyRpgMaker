/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400455b8 */

void FUN_1400455b8(longlong *param_1)

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
  FUN_1400458c6(param_1);
  FUN_140045844(param_1);
  return;
}

