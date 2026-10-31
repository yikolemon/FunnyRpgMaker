/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020bed8 */

void __fastcall FUN_1020bed8(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int local_24;
  undefined4 local_20;
  
  if (1 < (int)param_2) {
    uVar2 = FUN_1020b545();
    iVar3 = uVar2 - param_2;
    if (uVar2 < param_2) {
      FUN_1020a812();
      return;
    }
    if ((int)param_3 < 0) {
      param_3 = -(-param_3 % param_2);
    }
    else {
      param_3 = param_3 % param_2;
    }
    if (param_3 != 0) {
      uVar6 = 2;
      uVar4 = 0;
      iVar7 = -1;
      local_24 = -1;
      uVar2 = param_2;
      do {
        uVar5 = uVar4;
        local_20 = uVar6;
        if (local_24 == iVar7) {
          iVar1 = *(int *)(param_1 + 8) + iVar7 * 8;
          iVar7 = iVar7 + 1;
          uVar5 = *(undefined4 *)(iVar1 + 8 + iVar3 * 8);
          local_24 = iVar7;
          local_20 = *(undefined4 *)(iVar1 + 0xc + iVar3 * 8);
        }
        iVar7 = iVar7 + param_3;
        uVar8 = iVar7 >> 0x1f & param_2;
        if ((int)param_2 <= iVar7) {
          uVar8 = -param_2;
        }
        iVar7 = iVar7 + uVar8;
        iVar1 = *(int *)(param_1 + 8) + iVar7 * 8;
        uVar4 = *(undefined4 *)(iVar1 + iVar3 * 8);
        *(undefined4 *)(iVar1 + iVar3 * 8) = uVar5;
        uVar6 = *(undefined4 *)(iVar1 + 4 + iVar3 * 8);
        *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = local_20;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  return;
}

