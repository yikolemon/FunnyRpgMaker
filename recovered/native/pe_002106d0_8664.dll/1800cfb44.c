/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cfb44 */

byte FUN_1800cfb44(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_30 = param_3;
  FUN_1800cfbc9(&local_38);
  do {
    if (*param_4 != 1) {
      bVar1 = 1;
      goto LAB_1800cfb9d;
    }
    iVar2 = FUN_1800cfc56(param_1,param_2,local_38);
  } while (iVar2 != 1);
  bVar1 = *param_4 ^ 1;
LAB_1800cfb9d:
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

