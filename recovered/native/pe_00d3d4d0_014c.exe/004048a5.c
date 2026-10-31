/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004048a5 */

void __cdecl FUN_004048a5(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  
  iVar6 = (int)param_2 - (int)param_1;
  puVar3 = param_1;
  if (iVar6 >> 1 < 2) goto LAB_0040499c;
  uVar2 = *param_1;
  if ((uVar2 & 0xffffffdf) - 0x3a0041 < 0x1a) {
    puVar3 = param_1 + 1;
    goto LAB_0040499c;
  }
  if (((short)uVar2 != 0x5c) && ((uVar2 & 0xffff) != 0x2f)) goto LAB_0040499c;
  uVar5 = uVar2 >> 0x10;
  sVar4 = (short)(uVar2 >> 0x10);
  if ((uint)(iVar6 >> 1) < 4) {
    if (iVar6 == 4) goto LAB_0040499c;
  }
  else if (((*(short *)((int)param_1 + 6) == 0x5c) || (*(short *)((int)param_1 + 6) == 0x2f)) &&
          ((iVar6 == 8 || (((short)param_1[2] != 0x2f && ((short)param_1[2] != 0x5c)))))) {
    puVar1 = (uint *)((int)param_1 + 6);
    puVar3 = puVar1;
    if ((sVar4 == 0x2f) || (uVar5 == 0x5c)) {
      sVar7 = (short)param_1[1];
      if ((sVar7 == 0x2e) || (sVar7 == 0x3f)) goto LAB_0040499c;
      if (uVar5 != 0x3f) goto LAB_00404937;
    }
    else {
      puVar3 = param_1;
      if (uVar5 != 0x3f) goto LAB_0040499c;
      sVar7 = (short)param_1[1];
    }
    puVar3 = param_1;
    if (sVar7 == 0x3f) {
      puVar3 = puVar1;
    }
    goto LAB_0040499c;
  }
LAB_00404937:
  if ((((sVar4 == 0x5c) || (puVar3 = param_1, uVar5 == 0x2f)) &&
      (puVar3 = param_1, (short)param_1[1] != 0x2f)) && ((short)param_1[1] != 0x5c)) {
    for (puVar3 = (uint *)((int)param_1 + 6);
        ((puVar3 != param_2 && ((short)*puVar3 != 0x2f)) && ((short)*puVar3 != 0x5c));
        puVar3 = (uint *)((int)puVar3 + 2)) {
    }
  }
LAB_0040499c:
  for (; (puVar3 != param_2 && (((short)*puVar3 == 0x5c || ((short)*puVar3 == 0x2f))));
      puVar3 = (uint *)((int)puVar3 + 2)) {
  }
  return;
}

