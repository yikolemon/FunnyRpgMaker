/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001a25e */

void FUN_14001a25e(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    FUN_14001a382(plVar1,*param_1,*(undefined8 *)(*plVar1 + 8));
    thunk_FUN_1400ddcd0(*plVar1,0x28);
    return;
  }
  return;
}

