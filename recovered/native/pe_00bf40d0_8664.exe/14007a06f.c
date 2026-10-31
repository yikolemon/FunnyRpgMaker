/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007a06f */

uint FUN_14007a06f(longlong *param_1,int *param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  lVar3 = param_1[3];
  uVar6 = *(uint *)(lVar3 + 0xc);
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  if (uVar6 != 0) {
    uVar5 = (uint)param_3 + *param_2;
    uVar4 = 0;
    uVar7 = uVar6;
    do {
      uVar8 = uVar4 + uVar7 >> 1;
      uVar10 = (ulonglong)(uVar8 * 0xc);
      uVar1 = *(uint *)(lVar3 + 0x10 + uVar10);
      uVar2 = *(uint *)(lVar3 + 0x14 + uVar10);
      uVar9 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      uVar2 = uVar8;
      if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) <= uVar5
         ) {
        if (uVar5 <= uVar9) {
          uVar4 = *(uint *)(lVar3 + 0x18 + uVar10);
          uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
          goto LAB_14007a0e1;
        }
        uVar4 = uVar8 + 1;
        uVar2 = uVar7;
      }
      uVar7 = uVar2;
    } while (uVar4 < uVar7);
    uVar4 = 0;
LAB_14007a0e1:
    if (param_3 == 0) {
      return uVar4;
    }
    if ((uVar5 <= uVar9) || (uVar8 = uVar8 + 1, uVar8 != uVar6)) {
      *(undefined1 *)(param_1 + 5) = 1;
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      *(uint *)((longlong)param_1 + 0x34) = uVar8;
      if ((uVar4 == 0) || (*(uint *)(*param_1 + 0x10) <= uVar4)) {
        FUN_14007a13b(param_1);
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

