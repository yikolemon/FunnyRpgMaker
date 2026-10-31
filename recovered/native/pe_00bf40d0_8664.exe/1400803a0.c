/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400803a0 */

undefined8 FUN_1400803a0(int *param_1,ulonglong param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = param_1[8];
  if (iVar1 == 3) {
    FUN_140080a4b(param_1,param_2,param_3);
  }
  else if (iVar1 == 2) {
    FUN_14008060a(param_1,param_2,param_3);
  }
  else {
    if (iVar1 != 1) {
      return 6;
    }
    FUN_14008040c(param_1,param_2,param_3);
  }
  return 0;
}

