/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140035f16 */

int FUN_140035f16(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)param_2 * 8);
  iVar2 = *(int *)(lVar1 + 0x14);
  lVar5 = lVar1;
  iVar3 = iVar2;
  do {
    lVar5 = *(longlong *)(lVar5 + 0x20);
    iVar4 = *(int *)(lVar5 + 0x14);
    if (iVar4 < iVar3) {
      iVar3 = iVar4;
    }
    if (iVar2 < iVar4) {
      iVar2 = iVar4;
    }
  } while (lVar5 != lVar1);
  iVar4 = (iVar3 + 0x20U & 0xffffffc0) - iVar3;
  iVar2 = iVar2 - iVar3;
  if (iVar2 < 0xc0) {
    iVar4 = iVar4 + (int)((iVar2 + 0x20U & 0xffffffc0) - iVar2) / 2;
  }
  FUN_14003778e(lVar1,iVar4);
  return iVar4;
}

