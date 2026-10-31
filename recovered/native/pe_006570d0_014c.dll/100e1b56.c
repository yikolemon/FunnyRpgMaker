/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e1b56 */

bool FUN_100e1b56(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_18 [8];
  int local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_18;
  FUN_100c7474(auStack_18,param_1);
  if (*(char *)(local_10 + 0xd) == '\0') {
    iVar1 = FUN_100915e6(local_10 + 0x10);
    bVar2 = -1 < iVar1;
  }
  else {
    bVar2 = false;
  }
  if (DAT_10388d00 == (local_c ^ (uint)auStack_18)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

