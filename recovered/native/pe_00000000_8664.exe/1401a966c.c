/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a966c */

ulonglong FUN_1401a966c(longlong param_1,longlong *param_2,uint param_3,byte param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  int iVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  byte bVar15;
  
  pcVar2 = (char *)*param_2;
  if (pcVar2 == (char *)0x0) {
    puVar9 = (undefined4 *)FUN_14019e8cc();
    *puVar9 = 0x16;
    FUN_1401ae640();
LAB_1401a96e1:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_1401ae820(0,0,0,0,0,param_1);
    goto LAB_1401a96e1;
  }
  cVar7 = *pcVar2;
  *param_2 = (longlong)(pcVar2 + 1);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_140193950();
  }
  while (iVar8 = FUN_140196dfc(cVar7,8,param_1 + 0x18), iVar8 != 0) {
    cVar7 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  bVar15 = param_4 | 2;
  if (cVar7 != '-') {
    bVar15 = param_4;
  }
  if ((cVar7 - 0x2bU & 0xfd) == 0) {
    cVar7 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  uVar14 = param_3;
  if ((param_3 & 0xffffffef) != 0) goto LAB_1401a97f3;
  if ((byte)(cVar7 - 0x30U) < 10) {
    iVar8 = cVar7 + -0x30;
LAB_1401a9796:
    if (iVar8 != 0) goto LAB_1401a97e7;
    pcVar3 = (char *)*param_2;
    cVar1 = *pcVar3;
    *param_2 = (longlong)(pcVar3 + 1);
    if ((cVar1 + 0xa8U & 0xdf) != 0) {
      *param_2 = (longlong)pcVar3;
      uVar14 = 8;
      if (param_3 != 0) {
        uVar14 = param_3;
      }
      if ((cVar1 != '\0') && (*pcVar3 != cVar1)) {
        puVar9 = (undefined4 *)FUN_14019e8cc();
        *puVar9 = 0x16;
        FUN_1401ae640();
      }
      goto LAB_1401a97f3;
    }
    cVar7 = pcVar3[1];
    *param_2 = (longlong)(pcVar3 + 2);
    uVar14 = 0x10;
  }
  else {
    if ((byte)(cVar7 + 0x9fU) < 0x1a) {
      iVar8 = cVar7 + -0x57;
      goto LAB_1401a9796;
    }
    if ((byte)(cVar7 + 0xbfU) < 0x1a) {
      iVar8 = cVar7 + -0x37;
      goto LAB_1401a9796;
    }
LAB_1401a97e7:
    uVar14 = 10;
  }
  if (param_3 != 0) {
    uVar14 = param_3;
  }
LAB_1401a97f3:
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (longlong)(int)uVar14;
  auVar6 = ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff);
  uVar12 = SUB168(auVar6 % auVar5,0);
  uVar13 = 0;
  while( true ) {
    if ((byte)(cVar7 - 0x30U) < 10) {
      uVar11 = (ulonglong)((int)cVar7 - 0x30);
    }
    else if ((byte)(cVar7 + 0x9fU) < 0x1a) {
      uVar11 = (ulonglong)((int)cVar7 - 0x57);
    }
    else if ((byte)(cVar7 + 0xbfU) < 0x1a) {
      uVar11 = (ulonglong)((int)cVar7 - 0x37);
    }
    else {
      uVar11 = 0xffffffff;
    }
    pcVar3 = (char *)*param_2;
    if (uVar14 <= (uint)uVar11) break;
    cVar7 = *pcVar3;
    uVar10 = (longlong)(int)uVar14 * uVar13;
    uVar12 = uVar11 + uVar10;
    *param_2 = (longlong)(pcVar3 + 1);
    bVar15 = bVar15 | (uVar12 < uVar10 || SUB168(auVar6 / auVar5,0) < uVar13) << 2 | 8U;
    uVar13 = uVar12;
  }
  *param_2 = (longlong)(pcVar3 + -1);
  if ((cVar7 != '\0') && (pcVar3[-1] != cVar7)) {
    puVar9 = (undefined4 *)FUN_14019e8cc(uVar11,uVar12);
    *puVar9 = 0x16;
    FUN_1401ae640();
  }
  if ((bVar15 & 8) == 0) {
    *param_2 = (longlong)pcVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pcVar2;
    return 0;
  }
  cVar7 = FUN_14019b47c(bVar15,uVar13);
  if (cVar7 == '\0') {
    if ((bVar15 & 2) != 0) {
      uVar13 = -uVar13;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x22;
    if ((bVar15 & 1) != 0) {
      plVar4 = (longlong *)param_2[1];
      if ((bVar15 & 2) == 0) {
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = *param_2;
        }
        return 0x7fffffffffffffff;
      }
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *param_2;
      }
      return 0x8000000000000000;
    }
    uVar13 = 0xffffffffffffffff;
  }
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar13;
  }
  return uVar13;
}

