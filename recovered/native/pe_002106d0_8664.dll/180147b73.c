/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180147b73 */

void FUN_180147b73(longlong param_1,int *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  FUN_1801566cd(param_1,param_2,0,*(undefined4 *)(param_1 + 0x18),param_4);
  FUN_18015615c(param_1,0,*(undefined4 *)(param_1 + 0x18));
  param_2[2] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  if (0 < param_4) {
    iVar1 = FUN_18015619b(param_1,0,param_3,param_4);
    if (0 < iVar1) {
      param_2[2] = param_4;
      param_2[1] = param_4;
      *param_2 = param_4;
      *(undefined1 *)((longlong)param_2 + 0x16) = 0;
    }
  }
  return;
}

