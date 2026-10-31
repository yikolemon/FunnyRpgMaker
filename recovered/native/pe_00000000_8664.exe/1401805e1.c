/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401805e1 */

undefined8 FUN_1401805e1(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar1 = param_2[1];
  uVar7 = (ulonglong)uVar1;
  uVar6 = 6;
  if (uVar1 == *(uint *)(param_1 + 1)) {
    uVar2 = *param_2;
    if (uVar2 == *(uint *)((longlong)param_1 + 0xc)) {
      if (0 < (int)uVar2) {
        lVar13 = *(longlong *)(param_2 + 4);
        iVar9 = (int)param_1[0xc] * 0x10000;
        lVar12 = 0;
        uVar8 = 0;
        do {
          if (0 < (int)uVar1) {
            uVar10 = 0;
            lVar11 = lVar12;
            do {
              iVar3 = *(int *)(*param_1 + lVar11);
              iVar4 = iVar9;
              if (iVar3 < iVar9) {
                iVar4 = iVar3;
              }
              if (iVar3 < 0) {
                iVar4 = iVar9;
              }
              iVar3 = -iVar4;
              if ((*(char *)((longlong)param_1 + 100) == '\0') !=
                  *(byte *)(*param_1 + 0xc + lVar11) < 0x7f) {
                iVar3 = iVar4;
              }
              uVar5 = FUN_140180ddb(iVar3,iVar9);
              *(undefined1 *)(lVar13 + uVar10) = uVar5;
              uVar10 = uVar10 + 1;
              lVar11 = lVar11 + 0x10;
            } while (uVar7 != uVar10);
          }
          uVar8 = uVar8 + 1;
          lVar13 = lVar13 + uVar7;
          lVar12 = lVar12 + uVar7 * 0x10;
        } while (uVar8 != uVar2);
      }
      uVar6 = 0;
    }
  }
  return uVar6;
}

