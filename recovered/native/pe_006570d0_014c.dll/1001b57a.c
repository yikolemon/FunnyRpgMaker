/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001b57a */

undefined4 __fastcall FUN_1001b57a(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 8)) {
    iVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x6c);
    return CONCAT31((int3)((uint)iVar5 >> 8),
                    *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x6c) < iVar5);
  }
  uVar6 = 0;
  if (*(int *)(param_1 + 0x7c) != 1) {
    do {
      uVar7 = 1 << ((byte)uVar6 & 0x1f);
      uVar1 = *(uint *)(*(int *)(param_1 + 0x18) + (uVar6 >> 5) * 4);
      uVar2 = *(uint *)(*(int *)(param_1 + 0x34) + (uVar6 >> 5) * 4);
      bVar8 = (uVar1 & uVar7) == 0;
      if ((bVar8) || ((uVar2 & uVar7) == 0)) {
        if (((uVar1 & uVar7) != 0) != ((uVar2 & uVar7) != 0)) {
          return CONCAT31((uint3)(uVar6 >> 0xd),!bVar8);
        }
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x28) + uVar6 * 8);
        iVar3 = *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 8);
        if (iVar5 != iVar3) {
          iVar5 = iVar5 - *(int *)(param_1 + 0x6c);
          return CONCAT31((int3)((uint)iVar5 >> 8),iVar3 - *(int *)(param_1 + 0x6c) < iVar5);
        }
        iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 4 + uVar6 * 8);
        iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 4 + uVar6 * 8);
        if (iVar3 != iVar4) {
          return CONCAT31((int3)((uint)iVar5 >> 8),iVar3 - iVar5 < iVar4 - iVar5);
        }
      }
      uVar6 = uVar6 + 1;
    } while (*(int *)(param_1 + 0x7c) - 1U != uVar6);
  }
  return 0;
}

