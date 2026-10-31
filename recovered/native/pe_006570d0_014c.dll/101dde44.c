/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dde44 */

int __fastcall FUN_101dde44(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x28) + param_2 * 4);
  iVar2 = *(int *)(iVar5 + 0x14);
  iVar3 = iVar2;
  iVar4 = iVar5;
  do {
    iVar4 = *(int *)(iVar4 + 0x20);
    iVar1 = *(int *)(iVar4 + 0x14);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
  } while (iVar4 != iVar5);
  iVar5 = (iVar2 + 0x20U & 0xffffffc0) - iVar2;
  iVar2 = iVar2 - iVar3;
  if (iVar2 < 0xc0) {
    iVar5 = iVar5 - (int)((iVar2 + 0x20U & 0xffffffc0) - iVar2) / 2;
  }
  FUN_101df416();
  return iVar5;
}

