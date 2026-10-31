/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400da650 */

int FUN_1400da650(LPWSTR param_1,byte *param_2,ulonglong param_3,undefined8 param_4,UINT *param_5)

{
  byte bVar1;
  UINT UVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_3 == 0) {
    return 0;
  }
  bVar1 = *param_2;
  if (bVar1 == 0) {
    *param_1 = L'\0';
    return 0;
  }
  if (param_5[2] != 0) {
LAB_1400da829:
    *param_1 = (ushort)bVar1;
    return 1;
  }
  UVar2 = param_5[1];
  if (UVar2 == 1) {
LAB_1400da7df:
    iVar4 = MultiByteToWideChar(*param_5,9,(LPCSTR)param_2,1,param_1,1);
    if (iVar4 != 0) {
      return 1;
    }
    goto LAB_1400da809;
  }
  if (UVar2 == 2) {
    iVar4 = 1;
    if ((*(byte *)((ulonglong)(bVar1 >> 3) + 0xc + (longlong)param_5) & (byte)(1 << (bVar1 & 7))) !=
        0) {
      if (param_3 == 1) {
        return -2;
      }
      iVar4 = 2;
    }
    iVar5 = MultiByteToWideChar(*param_5,9,(LPCSTR)param_2,iVar4,param_1,1);
    if (iVar5 != 0) {
      return iVar4;
    }
    goto LAB_1400da809;
  }
  if (UVar2 != 4) goto LAB_1400da7df;
  if (-1 < (char)bVar1) goto LAB_1400da829;
  iVar4 = 1;
  if ((bVar1 & 0xe0) == 0xc0) {
    uVar6 = bVar1 & 0x1f;
    iVar5 = 1;
  }
  else {
    if ((bVar1 & 0xf0) != 0xe0) goto LAB_1400da809;
    uVar6 = bVar1 & 0xf;
    iVar5 = 2;
  }
  do {
    if (param_3 <= (ulonglong)(longlong)iVar4) {
      return -2;
    }
    if ((param_2[iVar4] & 0xc0) != 0x80) goto LAB_1400da809;
    uVar6 = param_2[iVar4] & 0x3f | uVar6 << 6;
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (iVar4 == 2) {
    bVar7 = uVar6 < 0x80;
LAB_1400da73d:
    if (bVar7) goto LAB_1400da809;
  }
  else if (iVar4 == 3) {
    bVar7 = uVar6 < 0x800;
    goto LAB_1400da73d;
  }
  if (0x7ff < uVar6 - 0xd800) {
    *param_1 = (WCHAR)uVar6;
    return iVar4;
  }
LAB_1400da809:
  puVar3 = (undefined4 *)FUN_140113dd4();
  *puVar3 = 0x2a;
  return -1;
}

