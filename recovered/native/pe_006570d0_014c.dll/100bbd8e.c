/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bbd8e */

bool FUN_100bbd8e(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_18 [8];
  int local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_18;
  FUN_10062826(auStack_18,param_1);
  if (*(char *)(local_10 + 0xd) == '\0') {
    iVar2 = FUN_1006287c(*param_1);
    bVar1 = iVar2 < 1;
  }
  else {
    bVar1 = false;
  }
  if (DAT_10388d00 == (local_c ^ (uint)auStack_18)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

