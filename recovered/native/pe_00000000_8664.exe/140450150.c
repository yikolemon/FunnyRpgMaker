/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140450150 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140450150(ushort *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_3 == 0) {
    return 0;
  }
  bVar1 = *param_2;
  if (bVar1 == 0) {
    *param_1 = 0;
    return 0;
  }
  if (param_5[2] != 0) {
LAB_140450329:
    *param_1 = (ushort)bVar1;
    return 1;
  }
  iVar3 = param_5[1];
  if (iVar3 == 1) {
LAB_1404502df:
    iVar3 = (*ram0x00014059e0f8)(*param_5,9,param_2,1,param_1,1);
    if (iVar3 != 0) {
      return 1;
    }
    goto LAB_140450309;
  }
  if (iVar3 == 2) {
    iVar3 = 1;
    if ((*(byte *)((ulonglong)(bVar1 >> 3) + 0xc + (longlong)param_5) & (byte)(1 << (bVar1 & 7))) !=
        0) {
      if (param_3 == 1) {
        return -2;
      }
      iVar3 = 2;
    }
    iVar4 = (*ram0x00014059e0f8)(*param_5,9,param_2,iVar3,param_1,1);
    if (iVar4 != 0) {
      return iVar3;
    }
    goto LAB_140450309;
  }
  if (iVar3 != 4) goto LAB_1404502df;
  if (-1 < (char)bVar1) goto LAB_140450329;
  iVar3 = 1;
  if ((bVar1 & 0xe0) == 0xc0) {
    uVar5 = bVar1 & 0x1f;
    iVar4 = 1;
  }
  else {
    if ((bVar1 & 0xf0) != 0xe0) goto LAB_140450309;
    uVar5 = bVar1 & 0xf;
    iVar4 = 2;
  }
  do {
    if (param_3 <= (ulonglong)(longlong)iVar3) {
      return -2;
    }
    if ((param_2[iVar3] & 0xc0) != 0x80) goto LAB_140450309;
    uVar5 = param_2[iVar3] & 0x3f | uVar5 << 6;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (iVar3 == 2) {
    bVar6 = uVar5 < 0x80;
LAB_14045023d:
    if (bVar6) goto LAB_140450309;
  }
  else if (iVar3 == 3) {
    bVar6 = uVar5 < 0x800;
    goto LAB_14045023d;
  }
  if (0x7ff < uVar5 - 0xd800) {
    *param_1 = (ushort)uVar5;
    return iVar3;
  }
LAB_140450309:
  puVar2 = (undefined4 *)FUN_14048fb3c();
  *puVar2 = 0x2a;
  return -1;
}

