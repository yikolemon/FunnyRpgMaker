/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004ef09 */

void FUN_14004ef09(undefined8 *param_1,undefined4 param_2,undefined8 param_3,longlong *param_4,
                  uint param_5,undefined2 param_6,undefined2 param_7)

{
  longlong lVar1;
  undefined1 auStackY_58 [32];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStackY_58;
  lVar1 = *param_4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_2;
  param_1[7] = param_3;
  *param_1 = param_4;
  *(undefined2 *)(param_1 + 8) = param_6;
  *(undefined2 *)((longlong)param_1 + 0x42) = param_7;
  lVar1 = FUN_14001f231(lVar1,8,0,param_5,0,&local_24);
  param_1[4] = lVar1;
  if (local_24 == 0) {
    *(uint *)(param_1 + 6) = param_5;
    param_1[5] = lVar1;
  }
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStackY_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStackY_58);
}

