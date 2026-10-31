/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028d720 */

int FUN_18028d720(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    uVar3 = *(byte *)(lVar2 + iVar4) & 0xf;
    pbVar5 = (byte *)((lVar2 + iVar4) - (longlong)(char)(&DAT_18034e558)[uVar3]);
    puVar1 = (uint *)(pbVar5 + -4);
    if (*puVar1 >> ((&DAT_18034e568)[uVar3] & 0x1f) != 0) {
      uVar7 = 0;
      uVar8 = 0;
      iVar4 = -1;
      do {
        pbVar6 = pbVar5 + -(longlong)(char)(&DAT_18034e558)[*pbVar5 & 0xf];
        uVar8 = uVar8 + (*(uint *)(pbVar6 + -4) >> ((&DAT_18034e568)[*pbVar5 & 0xf] & 0x1f));
        if (param_3 < (ulonglong)uVar8 + (ulonglong)**(uint **)(param_2 + 0x10) + lVar2) break;
        uVar7 = uVar7 + 1;
        pbVar5 = pbVar6 + -(longlong)(char)(&DAT_18034e558)[*pbVar6 & 0xf];
        iVar4 = (*(uint *)(pbVar5 + -4) >> ((&DAT_18034e568)[*pbVar6 & 0xf] & 0x1f)) - 1;
      } while (uVar7 < *puVar1 >> ((&DAT_18034e568)[uVar3] & 0x1f));
      if (uVar7 == 0) {
        iVar4 = -1;
      }
      return iVar4;
    }
  }
  return -1;
}

