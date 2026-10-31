/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101738e2 */

int __fastcall FUN_101738e2(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  void *_Dst;
  void *_Dst_00;
  void *_Dst_01;
  int iVar11;
  char *pcVar12;
  int iVar13;
  size_t _Size;
  int *piVar14;
  
  iVar3 = param_2[2];
  if (iVar3 == 0) {
    iVar5 = FUN_10173d9e();
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = *param_2;
    iVar8 = param_2[1];
    iVar11 = FUN_1017315f(iVar8,0);
    if (iVar11 == 0) goto LAB_10173ced;
    _Size = iVar5 * iVar8;
    _Dst = (void *)FUN_1017207d();
    param_2[2] = (int)_Dst;
    _Dst_00 = (void *)FUN_1017207d();
    param_2[3] = (int)_Dst_00;
    _Dst_01 = (void *)FUN_1017207d();
    param_2[4] = (int)_Dst_01;
    if (((_Dst == (void *)0x0) || (_Dst_00 == (void *)0x0)) || (_Dst_01 == (void *)0x0))
    goto LAB_10173ced;
    _memset(_Dst,0,_Size * 4);
    _memset(_Dst_00,0,_Size * 4);
    _memset(_Dst_01,0,_Size);
  }
  else {
    iVar5 = *param_2;
    iVar8 = param_2[1];
    iVar11 = iVar3;
    if (0 < iVar8 * iVar5 && (param_2[9] & 0x18U) == 8) {
      iVar11 = 0;
      do {
        if (*(char *)(param_2[4] + iVar11) != '\0') {
          *(undefined4 *)(param_2[2] + iVar11 * 4) = *(undefined4 *)(param_2[3] + iVar11 * 4);
        }
        iVar11 = iVar11 + 1;
      } while (iVar8 * iVar5 - iVar11 != 0);
      iVar11 = param_2[2];
      iVar5 = *param_2;
      iVar8 = param_2[1];
    }
    FUN_1025b2d0(param_2[3],iVar11,iVar8 * iVar5 * 4);
    _Dst_01 = (void *)param_2[4];
    _Size = param_2[1] * *param_2;
  }
  _memset(_Dst_01,0,_Size);
LAB_1017396d:
  pcVar4 = *(char **)(param_1 + 0xac);
  if (*(char **)(param_1 + 0xb0) <= pcVar4) {
    if (*(int *)(param_1 + 0x20) == 0) goto LAB_10173ced;
    FUN_10170e8c();
    pcVar4 = *(char **)(param_1 + 0xac);
  }
  pcVar12 = pcVar4 + 1;
  *(char **)(param_1 + 0xac) = pcVar12;
  cVar1 = *pcVar4;
  if (cVar1 == '!') {
    if (*(char **)(param_1 + 0xb0) <= pcVar12) {
      if (*(int *)(param_1 + 0x20) == 0) goto LAB_10173ac6;
      FUN_10170e8c();
      pcVar12 = *(char **)(param_1 + 0xac);
    }
    pcVar4 = pcVar12 + 1;
    *(char **)(param_1 + 0xac) = pcVar4;
    if (*pcVar12 != -7) goto LAB_10173ac6;
    if (pcVar4 < *(char **)(param_1 + 0xb0)) {
LAB_101739f3:
      *(char **)(param_1 + 0xac) = pcVar4 + 1;
      if (*pcVar4 == '\x04') {
        if (pcVar4 + 1 < *(char **)(param_1 + 0xb0)) {
          *(char **)(param_1 + 0xac) = pcVar4 + 2;
          uVar7 = (uint)(byte)pcVar4[1];
        }
        else if (*(int *)(param_1 + 0x20) == 0) {
          uVar7 = 0;
        }
        else {
          FUN_10170e8c();
          pbVar6 = *(byte **)(param_1 + 0xac);
          *(byte **)(param_1 + 0xac) = pbVar6 + 1;
          uVar7 = (uint)*pbVar6;
        }
        param_2[9] = uVar7;
        iVar5 = FUN_1017336c();
        param_2[0x2215] = iVar5 * 10;
        if (-1 < param_2[8]) {
          *(undefined1 *)((int)param_2 + param_2[8] * 4 + 0x2b) = 0xff;
        }
        if ((*(byte *)(param_2 + 9) & 1) == 0) {
          FUN_10171ace();
          param_2[8] = -1;
          goto LAB_10173ac6;
        }
        pbVar6 = *(byte **)(param_1 + 0xac);
        if (pbVar6 < *(byte **)(param_1 + 0xb0)) {
LAB_10173aa9:
          *(byte **)(param_1 + 0xac) = pbVar6 + 1;
          uVar7 = (uint)*pbVar6;
        }
        else {
          if (*(int *)(param_1 + 0x20) != 0) {
            FUN_10170e8c();
            pbVar6 = *(byte **)(param_1 + 0xac);
            goto LAB_10173aa9;
          }
          uVar7 = 0;
        }
        param_2[8] = uVar7;
        *(undefined1 *)((int)param_2 + uVar7 * 4 + 0x2b) = 0;
LAB_10173ac6:
        do {
          pcVar4 = *(char **)(param_1 + 0xac);
          if (*(char **)(param_1 + 0xb0) <= pcVar4) {
            if (*(int *)(param_1 + 0x20) == 0) goto LAB_1017396d;
            FUN_10170e8c();
            pcVar4 = *(char **)(param_1 + 0xac);
          }
          *(char **)(param_1 + 0xac) = pcVar4 + 1;
          if (*pcVar4 == '\0') goto LAB_1017396d;
          FUN_10171ace();
        } while( true );
      }
    }
    else if (*(int *)(param_1 + 0x20) != 0) {
      FUN_10170e8c();
      pcVar4 = *(char **)(param_1 + 0xac);
      goto LAB_101739f3;
    }
    FUN_10171ace();
    goto LAB_1017396d;
  }
  if (cVar1 == ';') {
    return param_1;
  }
  if (cVar1 != ',') goto LAB_10173ced;
  iVar5 = FUN_1017336c();
  iVar8 = FUN_1017336c();
  iVar11 = FUN_1017336c();
  iVar9 = FUN_1017336c();
  if ((*param_2 < iVar11 + iVar5) || (param_2[1] < iVar9 + iVar8)) goto LAB_10173ced;
  iVar13 = *param_2 * 4;
  param_2[0x2214] = iVar13;
  param_2[0x220e] = iVar5 << 2;
  param_2[0x220f] = iVar8 * iVar13;
  param_2[0x2210] = (iVar11 + iVar5) * 4;
  iVar9 = (iVar9 + iVar8) * iVar13;
  param_2[0x2211] = iVar9;
  param_2[0x2212] = iVar5 << 2;
  if (iVar11 != 0) {
    iVar9 = iVar8 * iVar13;
  }
  param_2[0x2213] = iVar9;
  pbVar6 = *(byte **)(param_1 + 0xac);
  if (pbVar6 < *(byte **)(param_1 + 0xb0)) {
LAB_10173bc9:
    *(byte **)(param_1 + 0xac) = pbVar6 + 1;
    bVar2 = *pbVar6;
    uVar7 = (uint)bVar2;
    param_2[0x220d] = uVar7;
    iVar13 = param_2[0x2214] * 8;
    if ((bVar2 & 0x40) == 0) {
      iVar13 = param_2[0x2214];
    }
    uVar10 = (int)(uVar7 << 0x19) >> 0x1f & 3;
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_10170e8c();
      pbVar6 = *(byte **)(param_1 + 0xac);
      goto LAB_10173bc9;
    }
    param_2[0x220d] = 0;
    uVar10 = 0;
    uVar7 = 0;
  }
  param_2[0x220c] = iVar13;
  param_2[0x220b] = uVar10;
  if (uVar7 < 0x80) {
    if ((*(byte *)(param_2 + 5) & 0x80) == 0) {
LAB_10173ced:
      FUN_10170e07();
      return 0;
    }
    piVar14 = param_2 + 10;
  }
  else {
    if ((*(byte *)(param_2 + 9) & 1) == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = param_2[8];
    }
    piVar14 = param_2 + 0x10a;
    FUN_1017400c(2 << ((byte)uVar7 & 7),iVar5);
  }
  param_2[0x220a] = (int)piVar14;
  iVar5 = FUN_101740d6();
  if (iVar5 == 0) {
    return 0;
  }
  if (iVar3 == 0) {
    iVar3 = param_2[1];
    iVar8 = *param_2;
    if (0 < iVar3 * iVar8 && 0 < param_2[6]) {
      iVar11 = 0;
      do {
        if (*(char *)(param_2[4] + iVar11) == '\0') {
          *(undefined1 *)((int)param_2 + param_2[6] * 4 + 0x2b) = 0xff;
          *(int *)(param_2[2] + iVar11 * 4) = param_2[param_2[6] + 10];
        }
        iVar11 = iVar11 + 1;
      } while (iVar3 * iVar8 - iVar11 != 0);
      return iVar5;
    }
    return iVar5;
  }
  return iVar5;
}

