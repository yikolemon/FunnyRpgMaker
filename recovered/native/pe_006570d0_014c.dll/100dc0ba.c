/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100dc0ba */

int __thiscall FUN_100dc0ba(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_1c [8];
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_1c;
  FUN_10052556(auStack_1c,param_2);
  if ((*(char *)(local_14 + 0xd) != '\0') || (iVar1 = FUN_1001baf4(local_14 + 0x10), iVar1 < 0)) {
    local_14 = *param_1;
  }
  if (DAT_10388d00 != (local_10 ^ (uint)auStack_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_14;
}

