/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004355b4 */

int __fastcall FUN_004355b4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + param_2 * 4);
  iVar3 = *(int *)(iVar1 + 0x14);
  iVar4 = iVar3;
  iVar5 = iVar1;
  do {
    iVar5 = *(int *)(iVar5 + 0x20);
    iVar2 = *(int *)(iVar5 + 0x14);
    if (iVar2 < iVar4) {
      iVar4 = iVar2;
    }
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
  } while (iVar5 != iVar1);
  iVar5 = (iVar3 + 0x20U & 0xffffffc0) - iVar3;
  iVar3 = iVar3 - iVar4;
  if (iVar3 < 0xc0) {
    iVar5 = iVar5 - (int)((iVar3 + 0x20U & 0xffffffc0) - iVar3) / 2;
  }
  FUN_00436b86(iVar1,iVar5);
  return iVar5;
}

