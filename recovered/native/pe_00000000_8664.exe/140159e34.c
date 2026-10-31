/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140159e34 */

void FUN_140159e34(longlong *param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  if (iVar1 != 0) {
    puVar8 = (undefined1 *)*param_1;
    iVar6 = *(int *)((longlong)param_1 + 0xc);
    bVar9 = true;
    uVar7 = 0x80;
    uVar10 = 0;
    bVar4 = false;
    uVar3 = 0;
    do {
      if ((!bVar4) && (param_2 < param_3)) {
        lVar11 = (longlong)param_3 - (longlong)param_2;
        pbVar2 = param_2;
        do {
          uVar3 = (uint)*pbVar2;
          bVar9 = (bool)(bVar9 ^ 1);
          param_2 = pbVar2 + 1;
          if (*pbVar2 != 0) goto LAB_140159e8a;
          lVar11 = lVar11 + -1;
          pbVar2 = pbVar2 + 1;
        } while (lVar11 != 0);
        uVar3 = 0;
        param_2 = param_3;
      }
LAB_140159e8a:
      uVar5 = uVar7;
      if (!bVar9) {
        uVar5 = 0;
      }
      uVar10 = uVar10 | uVar5;
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) {
        *puVar8 = (char)uVar10;
        puVar8 = (undefined1 *)((longlong)(int)param_1[1] + *param_1);
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        *param_1 = (longlong)puVar8;
LAB_140159eb6:
        uVar10 = 0;
        uVar7 = 0x80;
      }
      else {
        uVar7 = uVar7 >> 1;
        if (uVar7 == 0) {
          *puVar8 = (char)uVar10;
          puVar8 = puVar8 + 1;
          goto LAB_140159eb6;
        }
      }
      bVar4 = 1 < (int)uVar3;
      iVar1 = iVar1 + -1;
      uVar3 = uVar3 - 1;
    } while (iVar1 != 0);
    if (uVar7 != 0x80) {
      *puVar8 = (char)uVar10;
    }
  }
  return;
}

