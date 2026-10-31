/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b409f */

void FUN_1800b409f(undefined8 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  uint *puVar8;
  short sVar9;
  uint uVar10;
  short sVar11;
  
  puVar8 = (uint *)*param_2;
  uVar4 = param_2[1];
  puVar2 = (uint *)((longlong)puVar8 + uVar4 * 2);
  puVar5 = puVar8;
  puVar6 = puVar8;
  if (1 < (longlong)uVar4) {
    uVar3 = *puVar8;
    if ((uVar3 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      puVar5 = puVar8 + 1;
      puVar6 = puVar8 + 1;
    }
    else if (((short)uVar3 == 0x5c) || ((uVar3 & 0xffff) == 0x2f)) {
      uVar10 = uVar3 >> 0x10;
      sVar9 = (short)(uVar3 >> 0x10);
      if (uVar4 < 4) {
        if (uVar4 != 2) goto LAB_1800b414a;
      }
      else if (((*(short *)((longlong)puVar8 + 6) == 0x5c) ||
               (*(short *)((longlong)puVar8 + 6) == 0x2f)) &&
              ((uVar4 == 4 || (((short)puVar8[2] != 0x2f && ((short)puVar8[2] != 0x5c)))))) {
        puVar1 = (uint *)((longlong)puVar8 + 6);
        if ((sVar9 == 0x2f) || (uVar10 == 0x5c)) {
          sVar11 = (short)puVar8[1];
          puVar5 = puVar1;
          puVar6 = puVar1;
          if ((sVar11 != 0x2e) && (sVar11 != 0x3f)) {
            if (uVar10 != 0x3f) goto LAB_1800b414a;
            goto LAB_1800b41b8;
          }
        }
        else if (uVar10 == 0x3f) {
          sVar11 = (short)puVar8[1];
LAB_1800b41b8:
          puVar5 = puVar8;
          puVar6 = puVar8;
          if (sVar11 == 0x3f) {
            puVar5 = puVar1;
            puVar6 = puVar1;
          }
        }
      }
      else {
LAB_1800b414a:
        if ((((sVar9 == 0x5c) || (puVar5 = puVar8, puVar6 = puVar8, uVar10 == 0x2f)) &&
            (puVar5 = puVar8, puVar6 = puVar8, (short)puVar8[1] != 0x2f)) &&
           (((short)puVar8[1] != 0x5c &&
            (puVar5 = (uint *)((longlong)puVar8 + 6), puVar6 = puVar5, uVar4 != 3)))) {
          lVar7 = uVar4 * 2 + -6;
          do {
            puVar6 = puVar5;
            if (((short)*puVar5 == 0x2f) || ((short)*puVar5 == 0x5c)) goto joined_r0x0001800b41c4;
            puVar5 = (uint *)((longlong)puVar5 + 2);
            lVar7 = lVar7 + -2;
            puVar6 = puVar2;
            puVar8 = puVar2;
          } while (lVar7 != 0);
          goto LAB_1800b41e5;
        }
      }
    }
  }
joined_r0x0001800b41c4:
  for (; (puVar8 = puVar2, puVar5 != puVar2 &&
         (((short)*puVar5 == 0x5c || (puVar8 = puVar5, (short)*puVar5 == 0x2f))));
      puVar5 = (uint *)((longlong)puVar5 + 2)) {
  }
LAB_1800b41e5:
  *param_1 = puVar6;
  param_1[1] = (longlong)puVar8 - (longlong)puVar6 >> 1;
  return;
}

