/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008b7e2 */

int __fastcall FUN_1008b7e2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = DAT_1039cb78 + *(int *)(param_1 + 0x3c);
  iVar1 = DAT_1039cb74 + *(int *)(param_1 + 0x38);
  iVar2 = FUN_1008bb80(param_1 + 0x48);
  iVar3 = FUN_1008bb80(&DAT_1039cb84);
  iVar6 = *(int *)(param_1 + 0x7c);
  iVar5 = *(int *)(param_1 + 0x78);
  iVar4 = FUN_1008bb80(param_1 + 0x84);
  iVar1 = ((iVar3 + iVar2 + (iVar7 - iVar1) + iVar6) - iVar5) + iVar4 + 0x18;
  iVar5 = *(int *)(param_1 + 0xa0);
  for (iVar6 = *(int *)(param_1 + 0x9c); iVar6 != iVar5; iVar6 = iVar6 + 0x18) {
    iVar2 = FUN_1008bb80(iVar6);
    iVar1 = iVar1 + iVar2 + 4;
  }
  iVar6 = FUN_1008bb80(param_1 + 0xa8);
  iVar6 = iVar1 + iVar6 + 4;
  if (8 < *(uint *)(param_1 + 0x44)) {
    iVar5 = FUN_1008bb80(param_1 + 0xc0);
    iVar6 = iVar6 + iVar5 + 4;
    if (9 < *(uint *)(param_1 + 0x44)) {
      iVar5 = FUN_1008bb80(param_1 + 0xd8);
      iVar1 = FUN_1008bb80(param_1 + 0xf0);
      iVar2 = FUN_1008bb80(param_1 + 0x108);
      iVar3 = FUN_1008bb80(param_1 + 0x120);
      iVar6 = iVar6 + iVar1 + iVar5 + iVar2 + iVar3 + 0x10;
      if (0xd < *(uint *)(param_1 + 0x44)) {
        iVar5 = FUN_1008bb80(param_1 + 0x138);
        iVar6 = iVar6 + iVar5 + 4;
      }
    }
  }
  return ((iVar6 + *(int *)(param_1 + 0x160) + *(int *)(param_1 + 0x174)) -
         (*(int *)(param_1 + 0x15c) + *(int *)(param_1 + 0x170))) + 0x14;
}

