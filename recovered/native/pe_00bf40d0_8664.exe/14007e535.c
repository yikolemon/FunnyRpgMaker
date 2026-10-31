/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007e535 */

undefined8 FUN_14007e535(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  uVar1 = param_2[1];
  uVar6 = (ulonglong)uVar1;
  uVar4 = 6;
  if (uVar1 == *(uint *)(param_1 + 1)) {
    uVar2 = *param_2;
    if (uVar2 == *(uint *)((longlong)param_1 + 0xc)) {
      if (0 < (int)uVar2) {
        lVar12 = *(longlong *)(param_2 + 4);
        uVar8 = (int)param_1[0xc] * 0x10000;
        lVar11 = 0;
        uVar7 = 0;
        do {
          if (0 < (int)uVar1) {
            uVar9 = 0;
            lVar10 = lVar11;
            do {
              uVar5 = *(uint *)(*param_1 + lVar10);
              uVar3 = uVar8;
              if ((int)uVar5 < (int)uVar8) {
                uVar3 = uVar5;
              }
              if ((int)uVar5 < 0) {
                uVar3 = uVar8;
              }
              uVar5 = -uVar3;
              if ((*(char *)((longlong)param_1 + 100) == '\0') !=
                  *(byte *)(*param_1 + 0xc + lVar10) < 0x7f) {
                uVar5 = uVar3;
              }
              uVar4 = FUN_14007ed2f(uVar5,uVar8);
              *(char *)(lVar12 + uVar9) = (char)uVar4;
              uVar9 = uVar9 + 1;
              lVar10 = lVar10 + 0x10;
            } while (uVar6 != uVar9);
          }
          uVar7 = uVar7 + 1;
          lVar12 = lVar12 + uVar6;
          lVar11 = lVar11 + uVar6 * 0x10;
        } while (uVar7 != uVar2);
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}

