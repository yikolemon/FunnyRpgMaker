/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102779ce */

/* WARNING: Removing unreachable block (ram,0x10277cd3) */

int FUN_102779ce(int *param_1,undefined1 *param_2,uint param_3,undefined4 param_4,undefined4 param_5
                ,size_t param_6,byte param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  char cVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint extraout_ECX;
  short sVar9;
  uint uVar10;
  uint uVar11;
  size_t _Size;
  char *_Dst;
  char *pcVar12;
  bool bVar13;
  longlong lVar14;
  char local_28;
  uint local_20;
  uint local_1c;
  uint local_14;
  
  _Size = 0;
  if (-1 < (int)param_6) {
    _Size = param_6;
  }
  *param_2 = 0;
  if (param_3 <= _Size + 0xb) {
    *(undefined1 *)(param_10 + 0x1c) = 1;
    *(undefined4 *)(param_10 + 0x18) = 0x22;
    FUN_10274034(0,0,0,0,0,param_10);
    return 0x22;
  }
  if (((uint)param_1[1] >> 0x14 & 0x7ff) == 0x7ff) {
    iVar5 = FUN_102777f9(param_1,param_2,param_3,param_4,param_5,_Size,0,param_8,param_9,param_10);
    if (iVar5 != 0) {
      *param_2 = 0;
      return iVar5;
    }
    pcVar6 = (char *)FUN_1025bae0(param_2,0x65);
    if (pcVar6 == (char *)0x0) {
      return 0;
    }
    *pcVar6 = (param_7 ^ 1) * ' ' + 'P';
    pcVar6[3] = '\0';
    return 0;
  }
  if ((param_1[1] < 1) && (param_1[1] < 0)) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  sVar2 = (ushort)(param_7 ^ 1) * 0x20 + 7;
  pcVar6 = param_2 + 1;
  local_14 = 0x3ff;
  if ((param_1[1] & 0x7ff00000U) == 0) {
    *param_2 = 0x30;
    if (*param_1 == 0 && (param_1[1] & 0xfffffU) == 0) {
      local_14 = 0;
    }
    else {
      local_14 = 0x3fe;
    }
  }
  else {
    *param_2 = 0x31;
  }
  _Dst = param_2 + 2;
  if (_Size == 0) {
    cVar1 = '\0';
  }
  else {
    if (*(char *)(param_10 + 0x14) == '\0') {
      FUN_1025ec50();
    }
    cVar1 = *(char *)**(undefined4 **)(*(int *)(param_10 + 0xc) + 0x88);
  }
  *pcVar6 = cVar1;
  if (((param_1[1] & 0xfffffU) != 0) || (*param_1 != 0)) {
    sVar9 = 0x30;
    local_20 = 0xf0000;
    local_1c = 0;
    while (0 < (int)_Size) {
      sVar3 = __aullshr();
      uVar4 = sVar3 + 0x30;
      if (0x39 < uVar4) {
        uVar4 = uVar4 + sVar2;
      }
      *_Dst = (char)uVar4;
      sVar9 = sVar9 + -4;
      _Dst = _Dst + 1;
      local_1c = local_1c >> 4 | local_20 << 0x1c;
      local_20 = local_20 >> 4;
      _Size = _Size - 1;
      if (sVar9 < 0) goto LAB_10277bfd;
    }
    cVar1 = FUN_1027793b(param_1,local_1c,local_20,sVar9,param_9);
    pcVar12 = _Dst;
    if (cVar1 == '\0') goto LAB_10277c11;
    while( true ) {
      pcVar7 = pcVar12 + -1;
      local_28 = *pcVar7;
      if ((local_28 != 'f') && (local_28 != 'F')) break;
      *pcVar7 = '0';
      pcVar12 = pcVar7;
    }
    if (pcVar7 == pcVar6) {
      pcVar12[-2] = pcVar12[-2] + '\x01';
    }
    else {
      if (local_28 == '9') {
        local_28 = (char)sVar2;
        local_28 = local_28 + '9';
      }
      *pcVar7 = local_28 + '\x01';
    }
  }
LAB_10277bfd:
  if (0 < (int)_Size) {
    _memset(_Dst,0x30,_Size);
    _Dst = _Dst + _Size;
  }
LAB_10277c11:
  if (*pcVar6 == '\0') {
    _Dst = pcVar6;
  }
  *_Dst = (param_7 ^ 1) * ' ' + 'P';
  uVar8 = __aullshr();
  pcVar6 = _Dst + 2;
  uVar10 = (uVar8 & 0x7ff) - local_14;
  uVar8 = -(uint)((uVar8 & 0x7ff) < local_14);
  if ((int)uVar8 < 0) {
    bVar13 = uVar10 != 0;
    uVar10 = -uVar10;
    uVar8 = -(uVar8 + bVar13);
    cVar1 = '-';
  }
  else {
    cVar1 = '+';
  }
  _Dst[1] = cVar1;
  *pcVar6 = '0';
  pcVar12 = pcVar6;
  if ((int)uVar8 < 0) goto LAB_10277cf8;
  if (((int)uVar8 < 1) && (uVar11 = uVar10, uVar10 < 1000)) {
LAB_10277c9b:
    uVar10 = uVar11;
    lVar14 = CONCAT44(uVar8,uVar10);
    if ((int)uVar8 < 0) goto LAB_10277cf8;
    uVar11 = uVar10;
    if ((0 < (int)uVar8) || (99 < uVar10)) goto LAB_10277ca6;
LAB_10277ccd:
    uVar10 = (uint)lVar14;
    if (lVar14 < 10) goto LAB_10277cf8;
  }
  else {
    cVar1 = __alldvrm(uVar10,uVar8,1000,0);
    pcVar12 = _Dst + 3;
    *pcVar6 = cVar1 + '0';
    uVar11 = extraout_ECX;
    uVar8 = uVar10;
    if (pcVar12 == pcVar6) goto LAB_10277c9b;
LAB_10277ca6:
    cVar1 = __alldiv(uVar11,uVar8,100,0);
    *pcVar12 = cVar1 + '0';
    pcVar12 = pcVar12 + 1;
    lVar14 = __allrem(uVar11,uVar8,100,0);
    if (pcVar12 == pcVar6) goto LAB_10277ccd;
  }
  cVar1 = __alldiv(lVar14,10,0);
  *pcVar12 = cVar1 + '0';
  pcVar12 = pcVar12 + 1;
  uVar10 = __allrem(lVar14,10,0);
LAB_10277cf8:
  *pcVar12 = (char)uVar10 + '0';
  pcVar12[1] = '\0';
  return 0;
}

