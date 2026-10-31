/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000ffac */

void FUN_14000ffac(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  char local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 3) < 0xb) && ((0x47eU >> (*(byte *)(param_1 + 3) & 0x1f) & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_14000b455(0x14011bf91);
  }
  FUN_14000fe0c((longlong)param_1,local_30);
  uVar1 = FUN_14001002a((undefined8 *)local_30);
  *(undefined4 *)(*param_1 + 4) = uVar1;
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_58);
}

