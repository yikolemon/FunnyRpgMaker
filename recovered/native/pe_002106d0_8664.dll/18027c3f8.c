/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027c3f8 */

ulonglong FUN_18027c3f8(longlong param_1,longlong *param_2,uint param_3,byte param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  char cVar16;
  
  lVar1 = *param_2;
  cVar5 = '\0';
  if ((lVar1 == 0) || (param_2[3] == 0)) {
    puVar7 = (undefined4 *)FUN_18027e66c();
    *puVar7 = 0x16;
    FUN_180290a50();
LAB_18027c477:
    puVar2 = (undefined1 *)param_2[3];
    if ((puVar2 != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *puVar2 = 0;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_180290c30(0,0,0,0,0,param_1);
    goto LAB_18027c477;
  }
  lVar3 = param_2[2];
  uVar12 = lVar3 + 1;
  param_2[2] = uVar12;
  if (((param_2[1] == 0) || (uVar12 <= (ulonglong)param_2[1])) &&
     (pcVar8 = *(char **)(lVar1 + 0x10), pcVar8 != *(char **)(lVar1 + 8))) {
    cVar5 = *pcVar8;
    *(char **)(lVar1 + 0x10) = pcVar8 + 1;
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_180272dc0();
  }
  while( true ) {
    iVar6 = FUN_1802784ec(cVar5,8,param_1 + 0x18);
    cVar16 = '\0';
    if (iVar6 == 0) break;
    lVar1 = param_2[2];
    param_2[2] = lVar1 + 1U;
    if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) {
      lVar1 = *param_2;
      pcVar8 = *(char **)(lVar1 + 0x10);
      if (pcVar8 == *(char **)(lVar1 + 8)) goto LAB_18027c4ee;
      cVar5 = *pcVar8;
      *(char **)(lVar1 + 0x10) = pcVar8 + 1;
    }
    else {
LAB_18027c4ee:
      cVar5 = '\0';
    }
  }
  bVar14 = param_4 | 2;
  if (cVar5 != '-') {
    bVar14 = param_4;
  }
  if ((cVar5 - 0x2bU & 0xfd) == 0) {
    lVar1 = param_2[2];
    param_2[2] = lVar1 + 1U;
    if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) {
      lVar1 = *param_2;
      pcVar8 = *(char **)(lVar1 + 0x10);
      if (pcVar8 != *(char **)(lVar1 + 8)) {
        cVar5 = *pcVar8;
        *(char **)(lVar1 + 0x10) = pcVar8 + 1;
        goto LAB_18027c56b;
      }
    }
    cVar5 = '\0';
  }
LAB_18027c56b:
  uVar15 = param_3;
  if ((param_3 & 0xffffffef) != 0) goto LAB_18027c682;
  if ((byte)(cVar5 - 0x30U) < 10) {
    iVar6 = cVar5 + -0x30;
LAB_18027c5b1:
    if (iVar6 == 0) {
      uVar9 = param_2[1];
      uVar12 = param_2[2] + 1;
      param_2[2] = uVar12;
      if ((uVar9 == 0) || (uVar12 <= uVar9)) {
        lVar1 = *param_2;
        pcVar8 = *(char **)(lVar1 + 0x10);
        if (pcVar8 == *(char **)(lVar1 + 8)) goto LAB_18027c602;
        cVar16 = *pcVar8;
        *(char **)(lVar1 + 0x10) = pcVar8 + 1;
        uVar12 = param_2[2];
        uVar9 = param_2[1];
        if ((cVar16 != 'x') && (cVar16 != 'X')) goto LAB_18027c602;
        uVar15 = 0x10;
        if (param_3 != 0) {
          uVar15 = param_3;
        }
        param_2[2] = uVar12 + 1;
        if ((uVar9 != 0) && (uVar9 < uVar12 + 1)) {
LAB_18027c65c:
          cVar5 = '\0';
          goto LAB_18027c682;
        }
        plVar11 = (longlong *)*param_2;
        pcVar8 = (char *)plVar11[2];
        if (pcVar8 == (char *)plVar11[1]) goto LAB_18027c65c;
        cVar5 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      }
      else {
LAB_18027c602:
        uVar15 = 8;
        if (param_3 != 0) {
          uVar15 = param_3;
        }
        param_2[2] = uVar12 - 1;
        if (((uVar9 != 0) && (uVar9 < uVar12 - 1)) || (cVar16 == -1 || cVar16 == '\0'))
        goto LAB_18027c682;
        plVar11 = (longlong *)*param_2;
        if (plVar11[2] == *plVar11) goto LAB_18027c682;
        pcVar8 = (char *)(plVar11[2] + -1);
      }
      plVar11[2] = (longlong)pcVar8;
      goto LAB_18027c682;
    }
  }
  else {
    if ((byte)(cVar5 + 0x9fU) < 0x1a) {
      iVar6 = cVar5 + -0x57;
      goto LAB_18027c5b1;
    }
    if ((byte)(cVar5 + 0xbfU) < 0x1a) {
      iVar6 = cVar5 + -0x37;
      goto LAB_18027c5b1;
    }
  }
  uVar15 = 10;
  if (param_3 != 0) {
    uVar15 = param_3;
  }
LAB_18027c682:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)(int)uVar15;
  uVar12 = 0;
  do {
    while( true ) {
      if ((byte)(cVar5 - 0x30U) < 10) {
        uVar10 = (int)cVar5 - 0x30;
      }
      else if ((byte)(cVar5 + 0x9fU) < 0x1a) {
        uVar10 = (int)cVar5 - 0x57;
      }
      else if ((byte)(cVar5 + 0xbfU) < 0x1a) {
        uVar10 = (int)cVar5 - 0x37;
      }
      else {
        uVar10 = 0xffffffff;
      }
      if (uVar15 <= uVar10) {
        lVar1 = param_2[2];
        param_2[2] = lVar1 - 1U;
        if (((param_2[1] == 0) || (lVar1 - 1U <= (ulonglong)param_2[1])) &&
           (cVar5 != -1 && cVar5 != '\0')) {
          plVar11 = (longlong *)*param_2;
          if (plVar11[2] != *plVar11) {
            plVar11[2] = plVar11[2] + -1;
          }
        }
        if ((bVar14 & 8) == 0) {
          if (lVar3 != param_2[2]) {
            *(undefined1 *)param_2[3] = 0;
          }
          if ((undefined1 *)param_2[3] == (undefined1 *)0x0) {
            return 0;
          }
          if (param_2[2] != 0) {
            return 0;
          }
          *(undefined1 *)param_2[3] = 0;
          return 0;
        }
        cVar5 = FUN_18027cb6c(bVar14);
        if (cVar5 == '\0') {
          if ((bVar14 & 2) != 0) {
            uVar12 = -uVar12;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x30) = 1;
          *(undefined4 *)(param_1 + 0x2c) = 0x22;
          if ((bVar14 & 1) != 0) {
            puVar2 = (undefined1 *)param_2[3];
            if ((bVar14 & 2) == 0) {
              if ((puVar2 != (undefined1 *)0x0) && (param_2[2] == 0)) {
                *puVar2 = 0;
              }
              return 0x7fffffffffffffff;
            }
            if ((puVar2 != (undefined1 *)0x0) && (param_2[2] == 0)) {
              *puVar2 = 0;
            }
            return 0x8000000000000000;
          }
          uVar12 = 0xffffffffffffffff;
        }
        if ((undefined1 *)param_2[3] != (undefined1 *)0x0) {
          if (param_2[2] == 0) {
            *(undefined1 *)param_2[3] = 0;
            return uVar12;
          }
          return uVar12;
        }
        return uVar12;
      }
      uVar9 = (longlong)(int)uVar15 * uVar12;
      uVar13 = uVar10 + uVar9;
      lVar1 = param_2[2];
      bVar14 = bVar14 | (uVar13 < uVar9 ||
                        SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar4,0) <
                        uVar12) << 2 | 8U;
      param_2[2] = lVar1 + 1U;
      uVar12 = uVar13;
      if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) break;
LAB_18027c70d:
      cVar5 = '\0';
    }
    lVar1 = *param_2;
    pcVar8 = *(char **)(lVar1 + 0x10);
    if (pcVar8 == *(char **)(lVar1 + 8)) goto LAB_18027c70d;
    cVar5 = *pcVar8;
    *(char **)(lVar1 + 0x10) = pcVar8 + 1;
  } while( true );
}

