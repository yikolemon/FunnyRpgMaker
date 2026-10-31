/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ca6e1 */

uint FUN_100ca6e1(int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  char acStack_114 [256];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)acStack_114;
  iVar1 = param_2 - param_3;
  if ((param_2 < param_3 || iVar1 == 0) || param_5 == 0) {
    uVar2 = 0xffffffff;
  }
  else if ((uint)(iVar1 + param_5) < 0x10) {
    _memset(acStack_114,0,0x100);
    iVar1 = 0;
    do {
      acStack_114[*(byte *)(param_4 + iVar1)] = '\x01';
      iVar1 = iVar1 + 1;
    } while (param_5 != iVar1);
    do {
      uVar2 = param_3;
      if (acStack_114[*(byte *)(param_1 + param_3)] != '\0') break;
      iVar1 = param_1 + param_3;
      param_3 = param_3 + 1;
      uVar2 = 0xffffffff;
    } while (iVar1 + 1U < param_2 + param_1);
  }
  else {
    iVar1 = FUN_100ca7c0(param_1 + param_3,iVar1,param_4,param_5);
    uVar2 = param_3 + iVar1;
    if (iVar1 == -1) {
      uVar2 = 0xffffffff;
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)acStack_114)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar2;
}

