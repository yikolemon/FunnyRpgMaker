/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023e840 */

void __thiscall FUN_1023e840(int param_1,undefined4 param_2,char param_3)

{
  undefined8 uVar1;
  char cVar2;
  wchar_t wVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  lconv *plVar14;
  int iVar15;
  char *pcVar16;
  wchar_t *pwVar17;
  int *unaff_FS_OFFSET;
  undefined1 local_50 [44];
  int local_24;
  int local_20;
  wchar_t *local_1c;
  wchar_t *local_18;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028997d;
  local_10 = *unaff_FS_OFFSET;
  uVar12 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  puVar13 = (undefined4 *)FUN_1022bf80(local_50,uVar12);
  uVar5 = puVar13[1];
  uVar6 = puVar13[2];
  uVar7 = puVar13[3];
  uVar8 = puVar13[4];
  uVar9 = puVar13[5];
  uVar10 = puVar13[6];
  uVar11 = puVar13[7];
  uVar1 = *(undefined8 *)(puVar13 + 8);
  uVar4 = puVar13[10];
  *(undefined4 *)(param_1 + 0x2c) = *puVar13;
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  *(undefined4 *)(param_1 + 0x38) = uVar7;
  *(undefined4 *)(param_1 + 0x3c) = uVar8;
  *(undefined4 *)(param_1 + 0x40) = uVar9;
  *(undefined4 *)(param_1 + 0x44) = uVar10;
  *(undefined4 *)(param_1 + 0x48) = uVar11;
  *(undefined8 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  plVar14 = _localeconv();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_1c = (wchar_t *)plVar14->mon_grouping;
  local_8 = 0;
  pcVar16 = (char *)local_1c;
  do {
    cVar2 = *pcVar16;
    pcVar16 = pcVar16 + 1;
  } while (cVar2 != '\0');
  local_18 = (wchar_t *)(pcVar16 + (1 - (int)((int)local_1c + 1)));
  local_24 = param_1;
  local_20 = FUN_1026d360(local_18,1);
  if (local_20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10228470();
  }
  if (local_18 != (wchar_t *)0x0) {
    FUN_1025b2d0(local_20,local_1c,local_18);
  }
  *(int *)(param_1 + 8) = local_20;
  local_1c = (&plVar14->_W_int_curr_symbol)[*(char *)(param_1 + 0x28) == '\0'];
  pwVar17 = local_1c;
  do {
    wVar3 = *pwVar17;
    pwVar17 = pwVar17 + 1;
  } while (wVar3 != L'\0');
  local_20 = ((int)pwVar17 - (int)(local_1c + 1) >> 1) + 1;
  local_18 = (wchar_t *)FUN_1026d360(local_20,2);
  if (local_18 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10228470();
  }
  FUN_1025b2d0(local_18,local_1c,local_20 * 2);
  *(wchar_t **)(param_1 + 0x10) = local_18;
  local_18 = L"";
  if ((byte)plVar14->p_sign_posn < 5) {
    local_18 = plVar14->_W_positive_sign;
  }
  pwVar17 = local_18;
  do {
    wVar3 = *pwVar17;
    pwVar17 = pwVar17 + 1;
  } while (wVar3 != L'\0');
  local_20 = ((int)pwVar17 - (int)(local_18 + 1) >> 1) + 1;
  local_1c = (wchar_t *)FUN_1026d360(local_20,2);
  if (local_1c != (wchar_t *)0x0) {
    FUN_1025b2d0(local_1c,local_18,local_20 * 2);
    *(wchar_t **)(param_1 + 0x14) = local_1c;
    local_18 = L"-";
    if ((byte)plVar14->n_sign_posn < 5) {
      local_18 = plVar14->_W_negative_sign;
    }
    pwVar17 = local_18;
    do {
      wVar3 = *pwVar17;
      pwVar17 = pwVar17 + 1;
    } while (wVar3 != L'\0');
    local_20 = ((int)pwVar17 - (int)(local_18 + 1) >> 1) + 1;
    local_1c = (wchar_t *)FUN_1026d360(local_20,2);
    if (local_1c != (wchar_t *)0x0) {
      FUN_1025b2d0(local_1c,local_18,local_20 * 2);
      cVar2 = *(char *)(param_1 + 0x28);
      *(wchar_t **)(param_1 + 0x18) = local_1c;
      *(wchar_t *)(param_1 + 0xc) = *plVar14->_W_mon_decimal_point;
      *(wchar_t *)(param_1 + 0xe) = *plVar14->_W_mon_thousands_sep;
      iVar15 = (int)(&plVar14->int_frac_digits)[cVar2 == '\0'];
      *(int *)(param_1 + 0x1c) = iVar15;
      if ((iVar15 < 0) || (0x7e < iVar15)) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      if ((((cVar2 == '\0') && ((uint)(int)plVar14->p_sep_by_space < 3)) &&
          ((uint)(int)plVar14->p_cs_precedes < 2)) && ((uint)(int)plVar14->p_sign_posn < 5)) {
        pcVar16 = "+v$x+v$xv$+xv+$xv$+x+$vx+$vx$v+x+$vx$+vx+v $+v $v $+v +$v $++$ v+$ v$ v++$ v$+ v+xv$+ v$v$ +v+ $v$ ++x$v+ $v$v ++ $v$ +v"
                  + plVar14->p_sign_posn * 4 +
                    ((int)plVar14->p_cs_precedes + plVar14->p_sep_by_space * 2) * 0x14;
      }
      else {
        pcVar16 = "$+xv";
      }
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)pcVar16;
      if (((cVar2 == '\0') && ((uint)(int)plVar14->n_sep_by_space < 3)) &&
         (((uint)(int)plVar14->n_cs_precedes < 2 && ((uint)(int)plVar14->n_sign_posn < 5)))) {
        pcVar16 = "+v$x+v$xv$+xv+$xv$+x+$vx+$vx$v+x+$vx$+vx+v $+v $v $+v +$v $++$ v+$ v$ v++$ v$+ v+xv$+ v$v$ +v+ $v$ ++x$v+ $v$v ++ $v$ +v"
                  + plVar14->n_sign_posn * 4 +
                    ((int)plVar14->n_cs_precedes + plVar14->n_sep_by_space * 2) * 0x14;
      }
      else {
        pcVar16 = "$+xv";
      }
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)pcVar16;
      if (param_3 != '\0') {
        *(undefined4 *)(param_1 + 0x20) = 0x76782b24;
        *(undefined4 *)(param_1 + 0x24) = 0x76782b24;
      }
      *unaff_FS_OFFSET = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_10228470();
  }
                    /* WARNING: Subroutine does not return */
  FUN_10228470();
}

