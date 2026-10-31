/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10191300 */

void FUN_10191300(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x290);
  iVar2 = *(int *)(iVar1 + 0xac);
  if (0 < iVar2) {
    uVar5 = 0;
    do {
      iVar3 = *(int *)(*(int *)(iVar1 + 0xbc) + (uVar5 >> 5) * 4);
      iVar4 = (uVar5 & 0x1f) * 0x50;
      if (((*(int *)(iVar3 + 0x40 + iVar4) + param_2 <= *(int *)(*(int *)(param_1 + 0x290) + 0x94))
          && (iVar3 = iVar3 + iVar4, (*(byte *)(iVar3 + 0x3f) & 4) == 0)) &&
         ((*(byte *)(*(int *)(iVar3 + 0x48) + 8) & 8) == 0)) {
        FUN_10191153(param_1,*(int *)(iVar3 + 0x48),iVar3);
        iVar2 = *(int *)(iVar1 + 0xac);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar2);
  }
  return;
}

