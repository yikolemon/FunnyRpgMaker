/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140070aba */

void FUN_140070aba(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    FUN_14005a7e8(plVar1,*param_1,*(undefined8 *)(*plVar1 + 8));
    thunk_FUN_1400ddcd0(*plVar1,0x50);
    return;
  }
  return;
}

