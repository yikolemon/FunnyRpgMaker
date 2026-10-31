/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013a36a */

undefined8 FUN_18013a36a(uint param_1,double *param_2,double *param_3,double *param_4)

{
  short sVar1;
  ushort uVar2;
  longlong lVar3;
  undefined7 uVar5;
  double dVar4;
  float fVar6;
  
  if (9 < param_1) {
    return 0;
  }
  lVar3 = (longlong)&switchD_18013a383::switchdataD_1802df260 +
          (longlong)(int)(&switchD_18013a383::switchdataD_1802df260)[param_1];
  uVar5 = (undefined7)((ulonglong)lVar3 >> 8);
  switch(param_1) {
  case 0:
    if (((param_3 == (double *)0x0) ||
        (lVar3 = CONCAT71(uVar5,*(char *)param_3), *(char *)param_3 <= *(char *)param_2)) &&
       ((param_4 == (double *)0x0 ||
        (lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),*(char *)param_4),
        *(char *)param_2 <= *(char *)param_4)))) {
      return 0;
    }
    *(char *)param_2 = (char)lVar3;
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  case 1:
    if (((param_3 == (double *)0x0) ||
        (lVar3 = CONCAT71(uVar5,*(byte *)param_3), *(byte *)param_3 <= *(byte *)param_2)) &&
       ((param_4 == (double *)0x0 ||
        (lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),*(byte *)param_4),
        *(byte *)param_2 <= *(byte *)param_4)))) {
      return 0;
    }
    *(char *)param_2 = (char)lVar3;
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  case 3:
    if (((param_3 == (double *)0x0) || (uVar2 = *(ushort *)param_3, uVar2 <= *(ushort *)param_2)) &&
       ((param_4 == (double *)0x0 || (uVar2 = *(ushort *)param_4, *(ushort *)param_2 <= uVar2)))) {
      return 0;
    }
    *(ushort *)param_2 = uVar2;
    return CONCAT71((uint7)(byte)(uVar2 >> 8),1);
  case 4:
    if (((param_3 == (double *)0x0) ||
        (fVar6 = *(float *)param_3, (int)fVar6 <= (int)*(float *)param_2)) &&
       ((param_4 == (double *)0x0 ||
        (fVar6 = *(float *)param_4, (int)*(float *)param_2 <= (int)fVar6)))) {
      return 0;
    }
    *(float *)param_2 = fVar6;
    return CONCAT71((uint7)(uint3)((uint)fVar6 >> 8),1);
  case 5:
    if (((param_3 == (double *)0x0) ||
        (fVar6 = *(float *)param_3, (uint)fVar6 <= (uint)*(float *)param_2)) &&
       ((param_4 == (double *)0x0 ||
        (fVar6 = *(float *)param_4, (uint)*(float *)param_2 <= (uint)fVar6)))) {
      return 0;
    }
    *(float *)param_2 = fVar6;
    return CONCAT71((uint7)(uint3)((uint)fVar6 >> 8),1);
  case 6:
    if (((param_3 == (double *)0x0) || (dVar4 = *param_3, (longlong)dVar4 <= (longlong)*param_2)) &&
       ((param_4 == (double *)0x0 || (dVar4 = *param_4, (longlong)*param_2 <= (longlong)dVar4)))) {
      return 0;
    }
    *param_2 = dVar4;
    return CONCAT71((int7)((ulonglong)dVar4 >> 8),1);
  case 7:
    if (((param_3 == (double *)0x0) || (dVar4 = *param_3, (ulonglong)dVar4 <= (ulonglong)*param_2))
       && ((param_4 == (double *)0x0 || (dVar4 = *param_4, (ulonglong)*param_2 <= (ulonglong)dVar4))
          )) {
      return 0;
    }
    *param_2 = dVar4;
    return CONCAT71((int7)((ulonglong)dVar4 >> 8),1);
  case 8:
    if (((param_3 == (double *)0x0) ||
        (fVar6 = *(float *)param_3, fVar6 < *(float *)param_2 || fVar6 == *(float *)param_2)) &&
       ((param_4 == (double *)0x0 || (fVar6 = *(float *)param_4, *(float *)param_2 <= fVar6)))) {
      return 0;
    }
    *(float *)param_2 = fVar6;
    return CONCAT71(uVar5,1);
  case 9:
    if (((param_3 == (double *)0x0) || (dVar4 = *param_3, dVar4 < *param_2 || dVar4 == *param_2)) &&
       ((param_4 == (double *)0x0 || (dVar4 = *param_4, *param_2 <= dVar4)))) {
      return 0;
    }
    *param_2 = dVar4;
    return CONCAT71(uVar5,1);
  }
  if (((param_3 == (double *)0x0) || (sVar1 = *(short *)param_3, sVar1 <= *(short *)param_2)) &&
     ((param_4 == (double *)0x0 || (sVar1 = *(short *)param_4, *(short *)param_2 <= sVar1)))) {
    return 0;
  }
  *(short *)param_2 = sVar1;
  return CONCAT71((uint7)(byte)((ushort)sVar1 >> 8),1);
}

