/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003ca92 */

void FUN_14003ca92(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(*(longlong *)(*param_1 + 0x90) + 0x70) == 0x23) {
    uVar1 = (*(code *)param_1[0x60])();
  }
  else {
    uVar1 = (undefined4)param_1[0x2b];
  }
  *param_2 = uVar1;
  return;
}

