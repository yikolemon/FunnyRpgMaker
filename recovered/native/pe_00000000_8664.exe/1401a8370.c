/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a8370 */

undefined8 FUN_1401a8370(undefined8 param_1)

{
  float fVar1;
  ulonglong uVar2;
  double dVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint local_38 [2];
  undefined1 local_30 [48];
  
  fVar1 = ABS((float)param_1);
  if (0x7f7fffff < (uint)fVar1) {
    uVar6 = FUN_1401baad0();
    return uVar6;
  }
  dVar7 = (double)(float)param_1;
  dVar3 = ABS(dVar7);
  if ((uint)fVar1 < 0x3f490fdc) {
    if ((uint)fVar1 < 0x3c000000) {
      if ((uint)fVar1 < 0x39000000) {
        return param_1;
      }
      dVar7 = dVar7 - dVar7 * dVar7 * dVar7 * DAT_140eb6dc0;
    }
    else {
      dVar3 = dVar7 * dVar7;
      dVar7 = dVar7 + ((DAT_140eb9c58 * dVar3 + DAT_140eb9c50) * dVar3 * dVar3 +
                      DAT_140eb9c48 * dVar3 + DAT_140eb9c40) * dVar7 * dVar3;
    }
    goto LAB_1401a86c6;
  }
  bVar5 = dVar7 != dVar3;
  if (bVar5) {
    dVar7 = 0.0 - dVar7;
  }
  if ((uint)fVar1 < 0x4b742400) {
    local_38[0] = (uint)(dVar7 * DAT_140eb6da0 + DAT_140eb6d90);
    dVar8 = (double)(int)local_38[0];
    dVar9 = dVar7 - DAT_140eb6db0 * dVar8;
    dVar7 = dVar9 - DAT_140eb6dd0 * dVar8;
    uVar2 = (ulonglong)ABS(dVar7) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar3 >> 0x34) - uVar2)) {
      dVar7 = dVar9 - DAT_140eb6de0 * dVar8;
      dVar7 = dVar7 - (DAT_140eb6df0 * dVar8 - ((dVar9 - dVar7) - DAT_140eb6de0 * dVar8));
    }
    if (0x3f1 < uVar2) goto LAB_1401a85ee;
    if (uVar2 < 0x3df) {
      if ((local_38[0] & 1) != 0) {
        dVar7 = DAT_140eb6d70;
      }
    }
    else if ((local_38[0] & 1) == 0) {
      dVar7 = dVar7 - DAT_140eb6dc0 * dVar7 * dVar7 * dVar7;
    }
    else {
      dVar7 = DAT_140eb6d70 - dVar7 * dVar7 * DAT_140eb6d90;
    }
  }
  else {
    dVar7 = (double)__remainder_piby2d2f_forC(dVar7,local_30,local_38);
LAB_1401a85ee:
    dVar3 = dVar7 * dVar7;
    if ((local_38[0] & 1) == 0) {
      dVar7 = dVar7 + ((DAT_140eb9c58 * dVar3 + DAT_140eb9c50) * dVar3 * dVar3 +
                      DAT_140eb9c48 * dVar3 + DAT_140eb9c40) * dVar7 * dVar3;
    }
    else {
      dVar7 = DAT_140eb9c10 * dVar3 + DAT_140eb6d70 +
              ((DAT_140eb9c30 * dVar3 + DAT_140eb9c28) * dVar3 * dVar3 +
              DAT_140eb9c20 * dVar3 + DAT_140eb9c18) * dVar3 * dVar3;
    }
  }
  uVar4 = (uint)bVar5;
  if ((local_38[0] >> 1 & uVar4) == 0 && (~(local_38[0] >> 1) & ~uVar4 & 1) == 0) {
    dVar7 = 0.0 - dVar7;
  }
LAB_1401a86c6:
  return CONCAT44((int)((ulonglong)dVar7 >> 0x20),(float)dVar7);
}

