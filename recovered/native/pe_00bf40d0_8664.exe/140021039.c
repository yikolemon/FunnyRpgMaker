/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140021039 */

void FUN_140021039(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  
  iVar1 = FUN_140021063(param_1,param_2);
  if (iVar1 == 0) {
    *param_3 = param_1[7];
    param_1[7] = 0;
    param_1[8] = 0;
  }
  return;
}

