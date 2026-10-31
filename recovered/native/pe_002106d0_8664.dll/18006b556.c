/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006b556 */

void FUN_18006b556(longlong *param_1)

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
  FUN_1800b53c8(param_1);
  FUN_18006c9dc(param_1);
  return;
}

