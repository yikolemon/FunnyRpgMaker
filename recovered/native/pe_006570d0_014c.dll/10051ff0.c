/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10051ff0 */

undefined4 __thiscall FUN_10051ff0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  local_14 = param_2;
  FUN_10016fb8();
  iVar1 = FUN_1005205a(param_2);
  FUN_100170bc(param_1,iVar1 + 0x10);
  FUN_102283a0(iVar1,0x38);
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

