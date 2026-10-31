/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000198e */

void FUN_14000198e(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_1400017de(param_1 + 0x10);
  plVar1 = (longlong *)param_1[0xf];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 8);
    param_1[0xf] = 0;
  }
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}

