/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10104041 */

bool FUN_10104041(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = *(uint *)(param_1 + 0xc) >> 0x19 & 1;
  uVar4 = *(uint *)(param_2 + 0xc) >> 0x19 & 1;
  if (uVar3 == uVar4) {
    iVar5 = *(int *)(DAT_1039d74c + 0x1484);
    do {
      if (iVar5 < 1) break;
      iVar1 = *(int *)(*(int *)(DAT_1039d74c + 0x148c) + -4 + iVar5 * 4);
      if (iVar1 == param_1) {
        return true;
      }
      iVar5 = iVar5 + -1;
    } while (iVar1 != param_2);
    bVar2 = false;
  }
  else {
    bVar2 = uVar4 < uVar3;
  }
  return bVar2;
}

