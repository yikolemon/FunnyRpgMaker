/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ca7d2 */

uint FUN_100ca7d2(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char acStack_114 [256];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)acStack_114;
  uVar4 = 0xffffffff;
  if ((param_2 != 0) && (param_5 != 0)) {
    uVar4 = param_2 - 1U;
    if (param_3 <= param_2 - 1U) {
      uVar4 = param_3;
    }
    if (uVar4 + param_5 + 1 < 0x10) {
      _memset(acStack_114,0,0x100);
      iVar2 = 0;
      do {
        acStack_114[*(byte *)(param_4 + iVar2)] = '\x01';
        iVar2 = iVar2 + 1;
      } while (param_5 != iVar2);
      if (acStack_114[*(byte *)(param_1 + uVar4)] == '\0') {
        uVar3 = uVar4;
        do {
          uVar4 = 0xffffffff;
          if (uVar3 == 0) break;
          pbVar1 = (byte *)(param_1 + -1 + uVar3);
          uVar4 = uVar3 - 1;
          uVar3 = uVar4;
        } while (acStack_114[*pbVar1] == '\0');
      }
    }
    else {
      uVar4 = FUN_100ca8ab(param_1,uVar4 + 1,param_4,param_5);
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)acStack_114)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar4;
}

