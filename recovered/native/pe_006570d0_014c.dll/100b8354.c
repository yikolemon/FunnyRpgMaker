/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b8354 */

void __thiscall FUN_100b8354(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (0xaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_10016590();
  }
  iVar4 = *param_1;
  iVar1 = param_1[2];
  if (iVar4 != 0) {
    iVar2 = param_1[1];
    iVar6 = iVar4;
    if (iVar4 != iVar2) {
      do {
        FUN_100b80da();
        iVar6 = iVar6 + 0x18;
      } while (iVar6 != iVar2);
      iVar6 = *param_1;
    }
    (*DAT_1039c964)(iVar6);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar5 = (iVar1 - iVar4 >> 3) * -0x55555555;
  uVar7 = 0xaaaaaaa - (uVar5 >> 1);
  uVar3 = (uVar5 >> 1) + uVar5;
  if (uVar3 <= param_2) {
    uVar3 = param_2;
  }
  if (uVar7 <= uVar5 && uVar5 - uVar7 != 0) {
    uVar3 = 0xaaaaaaa;
  }
  iVar4 = (*DAT_1039c960)(uVar3 * 0x18,1);
  *param_1 = iVar4;
  param_1[1] = iVar4;
  param_1[2] = iVar4 + uVar3 * 0x18;
  return;
}

