/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400423eb */

void FUN_1400423eb(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  short sVar4;
  uint uVar5;
  longlong lVar6;
  short sVar7;
  
  lVar6 = (longlong)param_2 - (longlong)param_1;
  puVar3 = param_1;
  if (lVar6 >> 1 < 2) goto LAB_1400424fe;
  uVar2 = *param_1;
  if ((uVar2 & 0xffffffdf) - 0x3a0041 < 0x1a) {
    puVar3 = param_1 + 1;
    goto LAB_1400424fe;
  }
  if (((short)uVar2 != 0x5c) && ((uVar2 & 0xffff) != 0x2f)) goto LAB_1400424fe;
  uVar5 = uVar2 >> 0x10;
  sVar4 = (short)(uVar2 >> 0x10);
  if ((ulonglong)(lVar6 >> 1) < 4) {
    if (lVar6 == 4) goto LAB_1400424fe;
  }
  else if (((*(short *)((longlong)param_1 + 6) == 0x5c) ||
           (*(short *)((longlong)param_1 + 6) == 0x2f)) &&
          ((lVar6 == 8 || (((short)param_1[2] != 0x2f && ((short)param_1[2] != 0x5c)))))) {
    puVar1 = (uint *)((longlong)param_1 + 6);
    puVar3 = puVar1;
    if ((sVar4 == 0x2f) || (uVar5 == 0x5c)) {
      sVar7 = (short)param_1[1];
      if ((sVar7 == 0x2e) || (sVar7 == 0x3f)) goto LAB_1400424fe;
      if (uVar5 != 0x3f) goto LAB_14004248f;
    }
    else {
      puVar3 = param_1;
      if (uVar5 != 0x3f) goto LAB_1400424fe;
      sVar7 = (short)param_1[1];
    }
    puVar3 = param_1;
    if (sVar7 == 0x3f) {
      puVar3 = puVar1;
    }
    goto LAB_1400424fe;
  }
LAB_14004248f:
  if ((((sVar4 == 0x5c) || (puVar3 = param_1, uVar5 == 0x2f)) &&
      (puVar3 = param_1, (short)param_1[1] != 0x2f)) && ((short)param_1[1] != 0x5c)) {
    for (puVar3 = (uint *)((longlong)param_1 + 6);
        ((puVar3 != param_2 && ((short)*puVar3 != 0x2f)) && ((short)*puVar3 != 0x5c));
        puVar3 = (uint *)((longlong)puVar3 + 2)) {
    }
  }
LAB_1400424fe:
  for (; (puVar3 != param_2 && (((short)*puVar3 == 0x5c || ((short)*puVar3 == 0x2f))));
      puVar3 = (uint *)((longlong)puVar3 + 2)) {
  }
  return;
}

