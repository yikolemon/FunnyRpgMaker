/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b9c8e */

void __thiscall FUN_100b9c8e(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (0x9249249 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_10016590();
  }
  iVar4 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar4 != 0) {
    iVar2 = *(int *)(param_1 + 8);
    iVar6 = iVar4;
    if (iVar4 != iVar2) {
      do {
        FUN_100b9a02();
        iVar6 = iVar6 + 0x1c;
      } while (iVar6 != iVar2);
      iVar6 = *(int *)(param_1 + 4);
    }
    (*DAT_1039c964)(iVar6);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  uVar5 = (iVar1 - iVar4 >> 2) * -0x49249249;
  uVar7 = 0x9249249 - (uVar5 >> 1);
  uVar3 = (uVar5 >> 1) + uVar5;
  if (uVar3 <= param_2) {
    uVar3 = param_2;
  }
  if (uVar7 <= uVar5 && uVar5 - uVar7 != 0) {
    uVar3 = 0x9249249;
  }
  iVar4 = (*DAT_1039c960)(uVar3 * 0x1c,1);
  *(int *)(param_1 + 4) = iVar4;
  *(int *)(param_1 + 8) = iVar4;
  *(uint *)(param_1 + 0xc) = uVar3 * 0x1c + iVar4;
  return;
}

