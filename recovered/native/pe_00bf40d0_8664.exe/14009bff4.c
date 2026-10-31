/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009bff4 */

uint FUN_14009bff4(longlong *param_1,longlong *param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  __acrt_ptd *p_Var10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  
  pbVar2 = (byte *)*param_2;
  uVar14 = (ulonglong)param_3;
  if (pbVar2 == (byte *)0x0) {
    p_Var10 = FUN_140095e5c();
    *(undefined4 *)p_Var10 = 0x16;
    FUN_1400a0ea0();
LAB_14009c069:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x16;
    FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_14009c069;
  }
  uVar15 = (uint)*pbVar2;
  *param_2 = (longlong)(pbVar2 + 1);
  if ((char)param_1[5] == '\0') {
    FUN_14008f0b0(param_1);
  }
  while (uVar11 = FUN_140093204(uVar15,8,(__crt_locale_pointers *)(param_1 + 3)), (int)uVar11 != 0)
  {
    uVar15 = (uint)*(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
  }
  uVar13 = param_4 & 0xff | 2;
  if ((char)uVar15 != '-') {
    uVar13 = param_4 & 0xff;
  }
  if ((uVar15 - 0x2b & 0xfd) == 0) {
    uVar15 = (uint)*(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
  }
  if ((param_3 & 0xffffffef) == 0) {
    cVar1 = (char)uVar15;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar7 = cVar1 + -0x30;
LAB_14009c119:
      if (iVar7 != 0) goto LAB_14009c16a;
      pcVar3 = (char *)*param_2;
      cVar1 = *pcVar3;
      *param_2 = (longlong)(pcVar3 + 1);
      if ((cVar1 + 0xa8U & 0xdf) != 0) {
        *param_2 = (longlong)pcVar3;
        uVar8 = 8;
        if (param_3 != 0) {
          uVar8 = param_3;
        }
        uVar14 = (ulonglong)uVar8;
        if ((cVar1 != '\0') && (*pcVar3 != cVar1)) {
          p_Var10 = FUN_140095e5c();
          *(undefined4 *)p_Var10 = 0x16;
          FUN_1400a0ea0();
        }
        goto LAB_14009c176;
      }
      uVar15 = (uint)(byte)pcVar3[1];
      *param_2 = (longlong)(pcVar3 + 2);
      uVar8 = 0x10;
    }
    else {
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        iVar7 = cVar1 + -0x57;
        goto LAB_14009c119;
      }
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        iVar7 = cVar1 + -0x37;
        goto LAB_14009c119;
      }
LAB_14009c16a:
      uVar8 = 10;
    }
    if (param_3 != 0) {
      uVar8 = param_3;
    }
    uVar14 = (ulonglong)uVar8;
  }
LAB_14009c176:
  uVar8 = 0;
  while( true ) {
    bVar6 = (byte)uVar15;
    if ((byte)(bVar6 - 0x30) < 10) {
      uVar12 = (int)(char)bVar6 - 0x30;
    }
    else if ((byte)(bVar6 + 0x9f) < 0x1a) {
      uVar12 = (int)(char)bVar6 - 0x57;
    }
    else if ((byte)(bVar6 + 0xbf) < 0x1a) {
      uVar12 = (int)(char)bVar6 - 0x37;
    }
    else {
      uVar12 = 0xffffffff;
    }
    pbVar4 = (byte *)*param_2;
    if ((uint)uVar14 <= uVar12) break;
    uVar15 = (uint)*pbVar4;
    uVar9 = uVar8 * (uint)uVar14;
    uVar12 = uVar9 + uVar12;
    *param_2 = (longlong)(pbVar4 + 1);
    uVar13 = uVar13 | (uint)(uVar12 < uVar9 || (uint)(0xffffffff / uVar14) < uVar8) << 2 | 8;
    uVar8 = uVar12;
  }
  *param_2 = (longlong)(pbVar4 + -1);
  if ((bVar6 != 0) && (pbVar4[-1] != bVar6)) {
    p_Var10 = FUN_140095e5c();
    *(undefined4 *)p_Var10 = 0x16;
    FUN_1400a0ea0();
  }
  if ((uVar13 & 8) == 0) {
    *param_2 = (longlong)pbVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pbVar2;
    return 0;
  }
  if ((uVar13 & 4) == 0) {
    if ((uVar13 & 1) == 0) {
      if ((uVar13 & 2) == 0) goto LAB_14009c265;
LAB_14009c286:
      uVar8 = -uVar8;
      goto LAB_14009c265;
    }
    if ((uVar13 & 2) == 0) {
      if (uVar8 < 0x80000000) goto LAB_14009c265;
    }
    else if (uVar8 < 0x80000001) goto LAB_14009c286;
  }
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x22;
  uVar8 = 0xffffffff;
  if ((uVar13 & 1) != 0) {
    plVar5 = (longlong *)param_2[1];
    if ((uVar13 & 2) != 0) {
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = *param_2;
      }
      return 0x80000000;
    }
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = *param_2;
      return 0x7fffffff;
    }
    return 0x7fffffff;
  }
LAB_14009c265:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar8;
  }
  return uVar8;
}

