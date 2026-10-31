/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140004cba */

void FUN_140004cba(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x10));
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  FUN_1400863f0();
  return;
}

