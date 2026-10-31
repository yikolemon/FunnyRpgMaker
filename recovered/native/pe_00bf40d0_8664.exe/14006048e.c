/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006048e */

void FUN_14006048e(longlong *param_1)

{
  longlong lVar1;
  
  if ((int)param_1[3] == -0x21524111) {
    lVar1 = param_1[6];
    FUN_14001c53d(lVar1,*param_1);
    *param_1 = 0;
    FUN_14001c53d(lVar1,param_1[4]);
    param_1[4] = 0;
    FUN_14001c53d(lVar1,param_1[5]);
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return;
}

