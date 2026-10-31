/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016aafc */

void FUN_14016aafc(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  if (1 < (int)param_2) {
    uVar2 = FUN_140169fda();
    if (uVar2 < param_2) {
      FUN_1401691c8(*(undefined8 *)(param_1 + 8),0x82);
      return;
    }
    if ((int)param_3 < 0) {
      param_3 = -(-param_3 % param_2);
    }
    else {
      param_3 = param_3 % param_2;
    }
    if (param_3 != 0) {
      uVar6 = 0x200000000;
      iVar9 = -1;
      iVar8 = -1;
      uVar3 = param_2;
      do {
        lVar1 = *(longlong *)(param_1 + 0x10);
        uVar7 = uVar6;
        iVar4 = iVar9;
        if (iVar8 == iVar9) {
          iVar4 = iVar9 + 1;
          uVar7 = *(undefined8 *)(lVar1 + (longlong)(int)(iVar9 + (uVar2 - param_2) + 1) * 8);
          iVar8 = iVar4;
        }
        iVar4 = iVar4 + param_3;
        uVar10 = iVar4 >> 0x1f & param_2;
        if ((int)param_2 <= iVar4) {
          uVar10 = -param_2;
        }
        iVar9 = uVar10 + iVar4;
        lVar5 = (longlong)(int)(iVar9 + (uVar2 - param_2));
        uVar6 = *(undefined8 *)(lVar1 + lVar5 * 8);
        *(undefined8 *)(lVar1 + lVar5 * 8) = uVar7;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}

