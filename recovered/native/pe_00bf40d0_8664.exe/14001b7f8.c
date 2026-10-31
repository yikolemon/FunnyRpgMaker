/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001b7f8 */

void FUN_14001b7f8(double *param_1,uint param_2)

{
  double dVar1;
  undefined1 auStack_88 [32];
  double local_68;
  double dStack_60;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  *(uint *)(param_1 + 3) = param_2;
  FUN_140024ed9(&local_68,param_2);
  *param_1 = local_68;
  param_1[1] = dStack_60;
  dVar1 = (double)FUN_140024fff(param_2);
  param_1[2] = dVar1;
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_88);
}

