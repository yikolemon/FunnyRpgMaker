/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000fda1 */

void FUN_14000fda1(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  local_28 = *param_1;
  uStack_20 = param_1[1];
  local_18 = param_1[2];
  uVar1 = FUN_14000fe4b(&local_29,(undefined1 *)&local_28);
  if ((uVar1 & 0xffffffff80000000) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14000b455(0x14011bf7e);
  }
  if (DAT_14012ea80 == (local_8 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_8 ^ (ulonglong)auStack_58);
}

