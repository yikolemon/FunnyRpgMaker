/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c541d */

void FUN_1402c541d(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  short sVar5;
  uint uVar6;
  short sVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar2 = (uint *)*param_2;
  uVar3 = param_2[1];
  puVar9 = puVar2;
  if ((longlong)uVar3 < 2) goto LAB_1402c5561;
  uVar1 = *puVar2;
  if ((uVar1 & 0xffffffdf) - 0x3a0041 < 0x1a) {
    puVar9 = puVar2 + 1;
    goto LAB_1402c5561;
  }
  if (((short)uVar1 != 0x5c) && ((uVar1 & 0xffff) != 0x2f)) goto LAB_1402c5561;
  uVar6 = uVar1 >> 0x10;
  sVar5 = (short)(uVar1 >> 0x10);
  if (uVar3 < 4) {
    if (uVar3 == 2) goto LAB_1402c5561;
  }
  else if (((*(short *)((longlong)puVar2 + 6) == 0x5c) || (*(short *)((longlong)puVar2 + 6) == 0x2f)
           ) && ((uVar3 == 4 || (((short)puVar2[2] != 0x2f && ((short)puVar2[2] != 0x5c)))))) {
    puVar8 = (uint *)((longlong)puVar2 + 6);
    if ((sVar5 == 0x2f) || (uVar6 == 0x5c)) {
      sVar7 = (short)puVar2[1];
      puVar9 = puVar8;
      if ((sVar7 == 0x2e) || (sVar7 == 0x3f)) goto LAB_1402c5561;
      if (uVar6 != 0x3f) goto LAB_1402c54df;
    }
    else {
      if (uVar6 != 0x3f) goto LAB_1402c5561;
      sVar7 = (short)puVar2[1];
    }
    puVar9 = puVar8;
    if (sVar7 != 0x3f) {
      puVar9 = puVar2;
    }
    goto LAB_1402c5561;
  }
LAB_1402c54df:
  if ((((sVar5 == 0x5c) || (puVar9 = puVar2, uVar6 == 0x2f)) &&
      (puVar9 = puVar2, (short)puVar2[1] != 0x2f)) &&
     (((short)puVar2[1] != 0x5c &&
      (puVar8 = (uint *)((longlong)puVar2 + 6), puVar9 = puVar8, uVar3 != 3)))) {
    lVar4 = uVar3 * 2 + -6;
    do {
      puVar9 = puVar8;
      if (((short)*puVar8 == 0x2f) || ((short)*puVar8 == 0x5c)) break;
      puVar8 = (uint *)((longlong)puVar8 + 2);
      lVar4 = lVar4 + -2;
      puVar9 = (uint *)((longlong)puVar2 + uVar3 * 2);
    } while (lVar4 != 0);
  }
LAB_1402c5561:
  *param_1 = puVar2;
  param_1[1] = (longlong)puVar9 - (longlong)puVar2 >> 1;
  return;
}

