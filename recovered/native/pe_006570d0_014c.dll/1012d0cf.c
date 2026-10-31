/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012d0cf */

void FUN_1012d0cf(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  
  iVar1 = DAT_1039d74c;
  local_c = DAT_10388d00 ^ (uint)&local_14;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x14cc) + 0xfe) == '\0') {
    FUN_100fa5d7(&local_10,&local_14,param_1,param_2);
    FUN_1012cbcc(local_10,local_14,1);
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

