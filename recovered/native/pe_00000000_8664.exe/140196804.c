/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140196804 */

uint FUN_140196804(longlong param_1,longlong *param_2,uint param_3,byte param_4)

{
  char cVar1;
  char *pcVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  char *pcVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  
  pcVar2 = (char *)*param_2;
  uVar8 = (ulonglong)param_3;
  if (pcVar2 == (char *)0x0) {
    puVar7 = (undefined4 *)FUN_14019e8cc();
    *puVar7 = 0x16;
    FUN_1401ae640();
LAB_140196875:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_1401ae820(0,0,0,0,0,param_1);
    goto LAB_140196875;
  }
  cVar13 = *pcVar2;
  pcVar11 = pcVar2 + 1;
  *param_2 = (longlong)pcVar11;
  bVar9 = param_4 | 2;
  if ((cVar13 == '-') || (bVar9 = param_4, cVar13 == '+')) {
    param_4 = bVar9;
    cVar13 = *pcVar11;
    pcVar11 = pcVar2 + 2;
    *param_2 = (longlong)pcVar11;
  }
  if ((param_3 & 0xffffffef) == 0) {
    if ((byte)(cVar13 - 0x30U) < 10) {
      iVar5 = cVar13 + -0x30;
LAB_1401968fb:
      if (iVar5 != 0) goto LAB_140196949;
      cVar1 = *pcVar11;
      *param_2 = (longlong)(pcVar11 + 1);
      if ((cVar1 + 0xa8U & 0xdf) != 0) {
        *param_2 = (longlong)pcVar11;
        uVar8 = 8;
        if (param_3 != 0) {
          uVar8 = (ulonglong)param_3;
        }
        if ((cVar1 != '\0') && (*pcVar11 != cVar1)) {
          puVar7 = (undefined4 *)FUN_14019e8cc();
          *puVar7 = 0x16;
          FUN_1401ae640();
        }
        goto LAB_140196955;
      }
      cVar13 = pcVar11[1];
      *param_2 = (longlong)(pcVar11 + 2);
      uVar8 = 0x10;
    }
    else {
      if ((byte)(cVar13 + 0x9fU) < 0x1a) {
        iVar5 = cVar13 + -0x57;
        goto LAB_1401968fb;
      }
      if ((byte)(cVar13 + 0xbfU) < 0x1a) {
        iVar5 = cVar13 + -0x37;
        goto LAB_1401968fb;
      }
LAB_140196949:
      uVar8 = 10;
    }
    if (param_3 != 0) {
      uVar8 = (ulonglong)param_3;
    }
  }
LAB_140196955:
  pcVar11 = (char *)*param_2;
  uVar12 = 0xffffffff % uVar8;
  uVar14 = 0;
  while( true ) {
    if ((byte)(cVar13 - 0x30U) < 10) {
      uVar10 = (int)cVar13 - 0x30;
    }
    else if ((byte)(cVar13 + 0x9fU) < 0x1a) {
      uVar10 = (int)cVar13 - 0x57;
    }
    else if ((byte)(cVar13 + 0xbfU) < 0x1a) {
      uVar10 = (int)cVar13 - 0x37;
    }
    else {
      uVar10 = 0xffffffff;
    }
    if ((uint)uVar8 <= uVar10) break;
    cVar13 = *pcVar11;
    uVar6 = uVar14 * (uint)uVar8;
    uVar10 = uVar6 + uVar10;
    uVar12 = (ulonglong)uVar10;
    param_4 = param_4 | (uVar10 < uVar6 || (uint)(0xffffffff / uVar8) < uVar14) << 2 | 8U;
    pcVar11 = pcVar11 + 1;
    *param_2 = (longlong)pcVar11;
    uVar14 = uVar10;
  }
  *param_2 = (longlong)(pcVar11 + -1);
  if ((cVar13 != '\0') && (pcVar11[-1] != cVar13)) {
    puVar7 = (undefined4 *)FUN_14019e8cc(uVar10,uVar12);
    *puVar7 = 0x16;
    FUN_1401ae640();
  }
  if ((param_4 & 8) == 0) {
    *param_2 = (longlong)pcVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pcVar2;
    return 0;
  }
  if ((param_4 & 4) == 0) {
    if ((param_4 & 1) == 0) {
      if ((param_4 & 2) == 0) goto LAB_140196a89;
LAB_140196a86:
      uVar14 = -uVar14;
      goto LAB_140196a89;
    }
    if ((param_4 & 2) == 0) {
      if (uVar14 < 0x80000000) goto LAB_140196a89;
    }
    else if (uVar14 < 0x80000001) goto LAB_140196a86;
    bVar9 = 1;
    bVar4 = param_4;
  }
  else {
    bVar9 = param_4;
    bVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x22;
  if ((bVar4 & bVar9) != 0) {
    plVar3 = (longlong *)param_2[1];
    if ((param_4 & 2) == 0) {
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = *param_2;
      }
      return 0x7fffffff;
    }
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = *param_2;
    }
    return 0x80000000;
  }
  uVar14 = 0xffffffff;
LAB_140196a89:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar14;
  }
  return uVar14;
}

