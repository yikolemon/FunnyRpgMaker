/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001e961 */

longlong FUN_14001e961(longlong param_1,int param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 < 1) {
    iVar2 = 6;
    if (param_2 == 0) {
      iVar2 = 0;
    }
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(param_1 + 8))();
    iVar2 = (uint)(lVar1 == 0) << 6;
  }
  *param_3 = iVar2;
  return lVar1;
}

