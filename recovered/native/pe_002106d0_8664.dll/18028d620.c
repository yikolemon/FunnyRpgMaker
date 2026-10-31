/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028d620 */

int FUN_18028d620(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 == 0) {
    return -1;
  }
  uVar2 = param_2[1];
  uVar3 = *(byte *)(uVar2 + (longlong)iVar6) & 0xf;
  pbVar4 = (byte *)((uVar2 + (longlong)iVar6) - (longlong)(char)(&DAT_18034e558)[uVar3]);
  puVar1 = (uint *)(pbVar4 + -4);
  if (*puVar1 >> ((&DAT_18034e568)[uVar3] & 0x1f) != 0) {
    uVar7 = 0;
    uVar8 = 0;
    iVar6 = -1;
    do {
      pbVar5 = pbVar4 + -(longlong)(char)(&DAT_18034e558)[*pbVar4 & 0xf];
      uVar8 = uVar8 + (*(uint *)(pbVar5 + -4) >> ((&DAT_18034e568)[*pbVar4 & 0xf] & 0x1f));
      if (*param_2 < (ulonglong)uVar8 + *(uint *)param_2[2] + uVar2) break;
      uVar7 = uVar7 + 1;
      pbVar4 = pbVar5 + -(longlong)(char)(&DAT_18034e558)[*pbVar5 & 0xf];
      iVar6 = (*(uint *)(pbVar4 + -4) >> ((&DAT_18034e568)[*pbVar5 & 0xf] & 0x1f)) - 1;
    } while (uVar7 < *puVar1 >> ((&DAT_18034e568)[uVar3] & 0x1f));
    if (uVar7 != 0) {
      return iVar6;
    }
  }
  return -1;
}

