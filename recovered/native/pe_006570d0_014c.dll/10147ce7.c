/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10147ce7 */

undefined4 FUN_10147ce7(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x14cc) + 0xfe) == '\0') {
    uVar2 = FUN_101130b2(param_1);
    FUN_100fa5d7(&local_18,&local_1c,param_3,param_4);
    uVar2 = FUN_10147db9(uVar2,param_2,local_18,local_1c);
  }
  else {
    uVar2 = 0;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

