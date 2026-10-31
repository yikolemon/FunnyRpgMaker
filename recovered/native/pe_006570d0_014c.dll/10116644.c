/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10116644 */

undefined4 FUN_10116644(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_90 [128];
  uint local_10;
  
  iVar1 = DAT_1039d74c;
  local_10 = DAT_10388d00 ^ (uint)auStack_90;
  cVar2 = FUN_10103f84(param_1,0);
  if (cVar2 == '\0') {
    *(undefined4 *)(iVar1 + 0x1ed0) = 0;
    uVar3 = 0;
  }
  else {
    if ((~param_3 & 0x1000040) == 0) {
      uVar4 = 0x40;
      if ((*(uint *)(iVar1 + 0x1ed0) >> 9 & 1) != 0) {
        uVar4 = *(uint *)(iVar1 + 0x1f10) | 0x40;
      }
      *(uint *)(iVar1 + 0x1f10) = uVar4;
      *(uint *)(iVar1 + 0x1ed0) = *(uint *)(iVar1 + 0x1ed0) | 0x200;
    }
    FUN_100fa4b1(auStack_90,0x80,"%s###Menu_%02d",param_2,*(undefined4 *)(iVar1 + 0x2558));
    uVar3 = FUN_10107d2b(auStack_90,0,param_3 | 0x4000000);
    if ((char)uVar3 == '\0') {
      FUN_101165cb();
    }
  }
  if (DAT_10388d00 == (local_10 ^ (uint)auStack_90)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

