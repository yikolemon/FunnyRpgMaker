/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100aec76 */

undefined4 __thiscall FUN_100aec76(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  short sVar6;
  uint *puVar7;
  uint *puVar8;
  uint *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  uVar1 = param_1[4];
  if (7 < param_1[5]) {
    param_1 = (uint *)*param_1;
  }
  puVar8 = param_1;
  if ((int)uVar1 < 2) goto LAB_100aed85;
  uVar2 = *param_1;
  if ((uVar2 & 0xffffffdf) - 0x3a0041 < 0x1a) {
    puVar8 = param_1 + 1;
    goto LAB_100aed85;
  }
  if (((short)uVar2 != 0x5c) && ((uVar2 & 0xffff) != 0x2f)) goto LAB_100aed85;
  uVar5 = uVar2 >> 0x10;
  sVar4 = (short)(uVar2 >> 0x10);
  if (uVar1 < 4) {
    if (uVar1 == 2) goto LAB_100aed85;
  }
  else if (((*(short *)((int)param_1 + 6) == 0x5c) || (*(short *)((int)param_1 + 6) == 0x2f)) &&
          ((uVar1 == 4 || (((short)param_1[2] != 0x2f && ((short)param_1[2] != 0x5c)))))) {
    puVar7 = (uint *)((int)param_1 + 6);
    puVar8 = puVar7;
    if ((sVar4 == 0x2f) || (uVar5 == 0x5c)) {
      sVar6 = (short)param_1[1];
      if ((sVar6 == 0x2e) || (sVar6 == 0x3f)) goto LAB_100aed85;
      if (uVar5 != 0x3f) goto LAB_100aed1e;
    }
    else {
      puVar8 = param_1;
      if (uVar5 != 0x3f) goto LAB_100aed85;
      sVar6 = (short)param_1[1];
    }
    puVar8 = puVar7;
    if (sVar6 != 0x3f) {
      puVar8 = param_1;
    }
    goto LAB_100aed85;
  }
LAB_100aed1e:
  if ((((sVar4 == 0x5c) || (puVar8 = param_1, uVar5 == 0x2f)) &&
      (puVar8 = param_1, (short)param_1[1] != 0x2f)) &&
     (((short)param_1[1] != 0x5c &&
      (puVar7 = (uint *)((int)param_1 + 6), puVar8 = puVar7, uVar1 != 3)))) {
    iVar3 = uVar1 * 2 + -6;
    do {
      puVar8 = puVar7;
      if (((short)*puVar7 == 0x2f) || ((short)*puVar7 == 0x5c)) break;
      puVar7 = (uint *)((int)puVar7 + 2);
      iVar3 = iVar3 + -2;
      puVar8 = (uint *)((int)param_1 + uVar1 * 2);
    } while (iVar3 != 0);
  }
LAB_100aed85:
  local_18 = (int)puVar8 - (int)param_1 >> 1;
  local_1c = param_1;
  FUN_10002056(&local_1c,0);
  if (DAT_10388d00 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_2;
}

