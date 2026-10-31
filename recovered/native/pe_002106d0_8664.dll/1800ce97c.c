/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ce97c */

void FUN_1800ce97c(longlong param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  longlong local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  char **local_38;
  char *local_30;
  ulonglong local_28;
  undefined *local_20;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_88;
  uVar2 = -param_2;
  if ((int)-param_2 < 0) {
    uVar2 = param_2;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = 0x1f;
  if ((uVar2 | 1) != 0) {
    for (; (uVar2 | 1) >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  local_58 = param_1;
  if ((ulonglong)param_3[1] <=
      0x1ec - ((ulonglong)(param_2 >> 0x1f) +
              ((ulonglong)uVar2 + *(longlong *)(&DAT_1802b1be0 + (ulonglong)uVar1 * 8) >> 0x20))) {
    local_30 = (char *)*param_3;
    local_38 = &local_30;
    local_20 = &DAT_1802bb59c;
    local_40 = 0xcd;
    local_50 = &DAT_18035f7ac;
    local_48 = 4;
    local_28 = param_3[1];
    FUN_180024c6e(local_60,&local_58);
  }
  local_38 = &local_30;
  local_30 = "error ";
  local_20 = (undefined *)CONCAT44(local_20._4_4_,param_2);
  local_40 = 0x1c;
  local_50 = &DAT_18035f7ac;
  local_48 = 4;
  FUN_180024c6e(local_60,&local_58);
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_88);
}

