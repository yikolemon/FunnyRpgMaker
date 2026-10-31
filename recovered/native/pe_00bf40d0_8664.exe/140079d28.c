/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140079d28 */

uint FUN_140079d28(longlong *param_1,int *param_2,byte param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  lVar2 = param_1[3];
  uVar6 = *(uint *)(lVar2 + 0xc);
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  if (uVar6 != 0) {
    uVar5 = (uint)param_3 + *param_2;
    uVar4 = 0;
    uVar8 = uVar6;
    do {
      uVar7 = uVar4 + uVar8 >> 1;
      uVar11 = (ulonglong)(uVar7 * 0xc);
      uVar1 = *(uint *)(lVar2 + 0x10 + uVar11);
      uVar3 = *(uint *)(lVar2 + 0x14 + uVar11);
      uVar10 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar9 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      uVar3 = uVar5 - uVar10;
      uVar1 = uVar7;
      if (uVar10 <= uVar5) {
        if (uVar5 <= uVar9) {
          uVar4 = *(uint *)(lVar2 + 0x18 + uVar11);
          uVar8 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
          uVar4 = uVar3 + uVar8;
          if (CARRY4(uVar3,uVar8)) {
            uVar4 = 0;
          }
          goto LAB_140079da9;
        }
        uVar4 = uVar7 + 1;
        uVar1 = uVar8;
      }
      uVar8 = uVar1;
    } while (uVar4 < uVar8);
    uVar4 = 0;
LAB_140079da9:
    if (param_3 == 0) {
      return uVar4;
    }
    if ((uVar5 <= uVar9) || (uVar7 = uVar7 + 1, uVar7 != uVar6)) {
      *(undefined1 *)(param_1 + 5) = 1;
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      *(uint *)((longlong)param_1 + 0x34) = uVar7;
      if ((uVar4 == 0) || (*(uint *)(*param_1 + 0x10) <= uVar4)) {
        FUN_140079e05(param_1);
        if ((char)param_1[5] == '\0') {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)(param_1 + 6);
        }
      }
      else {
        *(uint *)(param_1 + 6) = uVar4;
      }
      *param_2 = *(int *)((longlong)param_1 + 0x2c);
      return uVar4;
    }
  }
  return 0;
}

