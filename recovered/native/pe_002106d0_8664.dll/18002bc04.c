/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002bc04 */

void FUN_18002bc04(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  iVar1 = FUN_18002bc90(param_1 + 0x20);
  if (iVar1 < 0) {
    local_29 = 1;
    FUN_180025c48(&local_28,"argument not found");
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(&local_28,&DAT_180391580);
  }
  if (DAT_180402640 != (local_10 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_10 ^ (ulonglong)auStack_58);
  }
  return;
}

