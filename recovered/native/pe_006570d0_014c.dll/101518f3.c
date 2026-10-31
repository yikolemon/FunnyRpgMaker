/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101518f3 */

int __fastcall FUN_101518f3(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_c [4];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)auStack_c;
  iVar1 = *(int *)(param_1 + 0x10);
  if (param_2 < iVar1) {
    iVar1 = FUN_100f90d5(auStack_c,*(int *)(param_1 + 0x14) + param_2,
                         iVar1 + *(int *)(param_1 + 0x14));
    iVar1 = iVar1 + param_2;
  }
  else {
    iVar1 = iVar1 + 1;
  }
  if (DAT_10388d00 == (local_8 ^ (uint)auStack_c)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

