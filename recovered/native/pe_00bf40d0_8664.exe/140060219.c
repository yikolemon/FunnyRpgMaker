/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140060219 */

uint FUN_140060219(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar3 = 0;
  uVar9 = 0;
  if (uVar1 != 0) {
    uVar4 = *param_2 + 1;
    uVar6 = uVar1 >> 1;
    uVar9 = 0;
    uVar10 = uVar1;
    do {
      uVar7 = (ulonglong)uVar6;
      uVar5 = *(uint *)(lVar2 + uVar7 * 8);
      if (uVar4 == uVar5) goto LAB_14006028b;
      uVar8 = uVar6 + 1;
      if (uVar4 < uVar5) {
        uVar10 = uVar6;
        uVar8 = uVar9;
      }
      uVar9 = uVar8;
      uVar8 = (uVar4 - uVar5) + uVar6;
      uVar5 = uVar9 + uVar10 >> 1;
      uVar6 = uVar8;
      if (uVar8 < uVar9) {
        uVar6 = uVar5;
      }
      if (uVar10 <= uVar8) {
        uVar6 = uVar5;
      }
    } while (uVar9 < uVar10);
  }
  uVar4 = 0;
  if (uVar9 < uVar1) {
    uVar7 = (ulonglong)uVar9;
    uVar4 = *(uint *)(lVar2 + uVar7 * 8);
LAB_14006028b:
    uVar3 = *(int *)(lVar2 + 4 + uVar7 * 8) + 1U & 0xffff;
  }
  *param_2 = uVar4;
  return uVar3;
}

