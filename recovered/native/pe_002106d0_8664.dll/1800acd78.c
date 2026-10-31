/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800acd78 */

void FUN_1800acd78(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint *puVar5;
  short sVar6;
  uint *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  short sVar10;
  uint uVar11;
  longlong lVar12;
  
  uVar3 = *(ulonglong *)(param_1 + 4);
  puVar4 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    puVar4 = *(uint **)param_1;
  }
  puVar1 = (uint *)((longlong)puVar4 + uVar3 * 2);
  puVar7 = puVar4;
  if (1 < (longlong)uVar3) {
    uVar2 = *puVar4;
    if ((uVar2 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      puVar7 = puVar4 + 1;
    }
    else if (((short)uVar2 == 0x5c) || ((uVar2 & 0xffff) == 0x2f)) {
      uVar11 = uVar2 >> 0x10;
      sVar10 = (short)(uVar2 >> 0x10);
      if (uVar3 < 4) {
        if (uVar3 != 2) goto LAB_1800ace3d;
      }
      else if (((*(short *)((longlong)puVar4 + 6) == 0x5c) ||
               (*(short *)((longlong)puVar4 + 6) == 0x2f)) &&
              ((uVar3 == 4 || (((short)puVar4[2] != 0x2f && ((short)puVar4[2] != 0x5c)))))) {
        puVar8 = (uint *)((longlong)puVar4 + 6);
        puVar7 = puVar8;
        if ((sVar10 == 0x2f) || (uVar11 == 0x5c)) {
          sVar6 = (short)puVar4[1];
          if ((sVar6 != 0x2e) && (sVar6 != 0x3f)) {
            if (uVar11 != 0x3f) goto LAB_1800ace3d;
            goto LAB_1800aceb0;
          }
        }
        else {
          puVar7 = puVar4;
          if (uVar11 == 0x3f) {
            sVar6 = (short)puVar4[1];
LAB_1800aceb0:
            puVar7 = puVar8;
            if (sVar6 != 0x3f) {
              puVar7 = puVar4;
            }
          }
        }
      }
      else {
LAB_1800ace3d:
        if ((((sVar10 == 0x5c) || (puVar7 = puVar4, uVar11 == 0x2f)) &&
            (puVar7 = puVar4, (short)puVar4[1] != 0x2f)) &&
           (((short)puVar4[1] != 0x5c && (puVar7 = (uint *)((longlong)puVar4 + 6), uVar3 != 3)))) {
          lVar12 = uVar3 * 2 + -6;
          do {
            if (((short)*puVar7 == 0x2f) || ((short)*puVar7 == 0x5c)) goto LAB_1800acebc;
            puVar7 = (uint *)((longlong)puVar7 + 2);
            lVar12 = lVar12 + -2;
            puVar8 = puVar1;
          } while (lVar12 != 0);
          goto LAB_1800acee2;
        }
      }
    }
  }
LAB_1800acebc:
  puVar8 = puVar7;
  if (puVar7 != puVar1) {
    puVar8 = (uint *)((longlong)puVar7 +
                     (ulonglong)((short)*puVar7 == 0x2f || (short)*puVar7 == 0x5c) * 2);
  }
LAB_1800acee2:
  do {
    puVar5 = puVar1;
    puVar7 = puVar8;
    if (puVar5 == puVar8) goto LAB_1800acf1d;
  } while ((*(short *)((longlong)puVar5 + -2) != 0x5c) &&
          (puVar1 = (uint *)((longlong)puVar5 + -2), *(short *)((longlong)puVar5 + -2) != 0x2f));
  do {
    if ((*(short *)((longlong)puVar5 + -2) != 0x5c) &&
       (puVar7 = puVar5, *(short *)((longlong)puVar5 + -2) != 0x2f)) break;
    puVar5 = (uint *)((longlong)puVar5 + -2);
    puVar7 = puVar8;
  } while (puVar5 != puVar8);
LAB_1800acf1d:
  uVar9 = (longlong)puVar7 - (longlong)puVar4 >> 1;
  if (uVar3 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_1800045d8();
  }
  *(ulonglong *)(param_1 + 4) = uVar9;
  *(undefined2 *)((longlong)puVar4 + ((longlong)puVar7 - (longlong)puVar4)) = 0;
  return;
}

