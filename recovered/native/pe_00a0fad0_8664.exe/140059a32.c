/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140059a32 */

void FUN_140059a32(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}

