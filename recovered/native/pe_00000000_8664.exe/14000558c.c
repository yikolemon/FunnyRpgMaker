/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000558c */

void FUN_14000558c(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_140006ea2(param_1 + 9);
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}

