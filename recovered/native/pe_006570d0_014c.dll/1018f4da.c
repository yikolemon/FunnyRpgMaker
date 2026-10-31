/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018f4da */

void FUN_1018f4da(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x290);
  if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0xac), 0 < iVar2)) {
    uVar5 = 0;
    do {
      iVar3 = *(int *)(*(int *)(iVar1 + 0xbc) + (uVar5 >> 5) * 4);
      iVar4 = (uVar5 & 0x1f) * 0x50;
      if (((*(int *)(iVar3 + 0x40 + iVar4) + param_3 <= *(int *)(*(int *)(param_1 + 0x290) + 0x94))
          && (iVar3 = iVar3 + iVar4, *(int *)(iVar3 + 0x48) == param_2)) &&
         ((*(byte *)(iVar3 + 0x3f) & 4) == 0)) {
        FUN_10191153(param_1,param_2,iVar3);
        iVar2 = *(int *)(iVar1 + 0xac);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar2);
  }
  return;
}

