/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021be54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14021be54(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 3) < 0xb) && ((0x47eU >> (*(byte *)(param_1 + 3) & 0x1f) & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_14021738c(
                 "abilities.\nHere we expose them as read-only fields to avoid breaking interactions with your backend."
                 );
  }
  FUN_14021bcba(param_1,local_30);
  uVar1 = FUN_14021bed2(local_30);
  *(undefined4 *)(*param_1 + 4) = uVar1;
  if (ram0x000140613b10 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_18 ^ (ulonglong)auStack_58);
}

