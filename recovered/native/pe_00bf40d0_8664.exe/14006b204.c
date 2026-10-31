/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006b204 */

void FUN_14006b204(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  puVar6 = param_1 + (ulonglong)param_2 * 0x12 + 0xc;
  puVar2 = *(uint **)(*(uint **)(puVar6 + 0xe) + 2);
  uVar9 = **(uint **)(puVar6 + 0xe);
  uVar5 = (uint)(param_2 != 0) * 9 + 3;
  iVar4 = FUN_14001ecff(0x20,*(uint *)(*(longlong *)(param_1 + 10) + 0xcc +
                                      (ulonglong)param_2 * 0xcc));
  iVar7 = 0xc;
  if (iVar4 < 0xc) {
    iVar7 = iVar4;
  }
  if (uVar9 < 2) {
    if (uVar9 != 1) goto LAB_14006b30a;
  }
  else {
    uVar1 = *param_1;
    if (uVar1 == 0) {
      return;
    }
    if (puVar2[4] < uVar1) {
      uVar1 = puVar2[4];
    }
    do {
      uVar8 = *param_1;
      if (puVar2[10] < *param_1) {
        uVar8 = puVar2[10];
      }
      if (uVar1 <= uVar8 && uVar8 - uVar1 != 0) {
        lVar3 = *(longlong *)(param_1 + 2);
        FUN_14006c266(puVar6,puVar2 + 6);
        FUN_14006c33e((longlong)puVar6,(ulonglong)uVar1 * 0x40 + lVar3,uVar8 - uVar1,iVar7,uVar5);
      }
      uVar9 = uVar9 - 1;
      uVar1 = uVar8;
      puVar2 = puVar2 + 6;
    } while (1 < uVar9);
  }
  uVar9 = *param_1;
  lVar3 = *(longlong *)(param_1 + 2);
  FUN_14006c266(puVar6,*(uint **)(*(longlong *)(puVar6 + 0xe) + 8));
  FUN_14006c33e((longlong)puVar6,lVar3,uVar9,iVar7,uVar5);
LAB_14006b30a:
  uVar9 = *param_1;
  if (uVar9 != 0) {
    puVar6 = (uint *)(*(longlong *)(param_1 + 2) + 0x1c);
    do {
      if ((*(longlong *)(puVar6 + 3) != 0) && ((*puVar6 & 0x10) == 0)) {
        *puVar6 = *puVar6 | 0x10;
      }
      puVar6 = puVar6 + 0x10;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

