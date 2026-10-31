/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000b7e8 */

void FUN_14000b7e8(longlong *param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  undefined8 local_48;
  longlong local_40;
  char local_38 [8];
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_a8;
  FUN_14000baf8(local_38,(longlong)(param_1 + 4),param_2);
  if (local_38[0] == '\r') {
    lVar1 = *param_1;
    *param_1 = param_3;
    param_1[1] = param_1[1] - (param_3 - lVar1 >> 1);
  }
  local_48 = local_28;
  uStack_50 = uStack_30;
  local_80 = param_1[4];
  local_78 = param_1[5];
  lStack_70 = param_1[6];
  local_68 = param_1[7];
  local_60 = param_1;
  FUN_14000bb27(&local_40,&local_80,local_58);
  param_1[4] = local_40;
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_a8);
}

