/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101263dd */

void __fastcall FUN_101263dd(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  *(int *)(DAT_1039d74c + 0xd0) = *(int *)(DAT_1039d74c + 0xd0) + 1;
  iVar3 = *(int *)(param_1 + 0x2e8);
  if (1 < *(int *)(iVar3 + 0x74)) {
    FUN_10187968(iVar3);
    iVar3 = *(int *)(param_1 + 0x2e8);
  }
  FUN_1018df9f(iVar1 + 0x98,*(undefined4 *)(iVar1 + 0xd4 + param_2 * 4),iVar3);
  iVar1 = *(int *)(param_1 + 0x1d8);
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      cVar2 = FUN_1010a68d();
      if (cVar2 != '\0') {
        FUN_101263dd();
      }
      iVar3 = iVar3 + 4;
    } while (iVar1 << 2 != iVar3);
  }
  return;
}

