/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10177d55 */

void __fastcall FUN_10177d55(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  if ((param_1[0x11f3] != 0) && (iVar3 = *param_1, 0 < *(int *)(iVar3 + 8))) {
    piVar10 = param_1 + 0xd21;
    iVar6 = 0;
    do {
      iVar7 = param_1[iVar6 * 0x12 + 0x11af] + 7 >> 3;
      if (0 < iVar7) {
        iVar3 = param_1[iVar6 * 0x12 + 0x11ae] + 7 >> 3;
        iVar4 = 0;
        iVar5 = 0;
        do {
          if (0 < iVar3) {
            iVar9 = 0;
            iVar8 = 0;
            do {
              iVar1 = param_1[iVar6 * 0x12 + 0x11b7];
              iVar2 = param_1[iVar6 * 0x12 + 0x11b6];
              FUN_10178c4e(piVar10,iVar4);
              (*(code *)param_1[0x1203])
                        (iVar4 * param_1[iVar6 * 0x12 + 0x11b0] + param_1[iVar6 * 0x12 + 0x11b2] +
                         iVar9,param_1[iVar6 * 0x12 + 0x11b0],(iVar1 * iVar5 + iVar8) * 0x80 + iVar2
                        );
              iVar8 = iVar8 + 1;
              iVar9 = iVar9 + 8;
            } while (iVar3 != iVar8);
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 8;
        } while (iVar5 != iVar7);
        iVar3 = *param_1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(iVar3 + 8));
  }
  return;
}

