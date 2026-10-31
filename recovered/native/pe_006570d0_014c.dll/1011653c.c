/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011653c */

undefined4 FUN_1011653c(undefined4 param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [20];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_24;
  cVar1 = FUN_10103f84(param_1,0);
  if (cVar1 == '\0') {
    *(undefined4 *)(DAT_1039d74c + 0x1ed0) = 0;
    uVar2 = 0;
  }
  else {
    FUN_100fa4b1(auStack_24,0x14,"##Popup_%08x",param_1);
    uVar2 = FUN_10107d2b(auStack_24,0,param_2 | 0x4080000);
    if ((char)uVar2 == '\0') {
      FUN_101165cb();
    }
  }
  if (DAT_10388d00 == (local_10 ^ (uint)auStack_24)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

