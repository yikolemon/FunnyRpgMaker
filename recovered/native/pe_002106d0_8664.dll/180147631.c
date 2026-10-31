/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180147631 */

void FUN_180147631(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  int local_48 [3];
  undefined4 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  if (*(char *)((longlong)param_2 + 0x17) != '\0') {
    FUN_180155cce(local_48,param_1,0);
    param_4 = local_3c;
  }
  uVar1 = FUN_18015677e(param_1,param_3,param_4,local_48);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  *(undefined1 *)((longlong)param_2 + 0x16) = 0;
  *(bool *)(param_1 + 0x76) = local_48[0] != 0;
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
}

