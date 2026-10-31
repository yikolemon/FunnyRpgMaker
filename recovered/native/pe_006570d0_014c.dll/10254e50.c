/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10254e50 */

void __thiscall FUN_10254e50(int param_1,undefined4 param_2,char param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  lconv *plVar13;
  int iVar14;
  char *pcVar15;
  int *unaff_FS_OFFSET;
  undefined1 local_50 [44];
  int local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  int local_14;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028997d;
  local_10 = *unaff_FS_OFFSET;
  uVar11 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  local_14 = param_1;
  puVar12 = (undefined4 *)FUN_1022bf80(local_50,uVar11);
  uVar4 = puVar12[1];
  uVar5 = puVar12[2];
  uVar6 = puVar12[3];
  uVar7 = puVar12[4];
  uVar8 = puVar12[5];
  uVar9 = puVar12[6];
  uVar10 = puVar12[7];
  uVar1 = *(undefined8 *)(puVar12 + 8);
  uVar3 = puVar12[10];
  *(undefined4 *)(param_1 + 0x2c) = *puVar12;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x3c) = uVar7;
  *(undefined4 *)(param_1 + 0x40) = uVar8;
  *(undefined4 *)(param_1 + 0x44) = uVar9;
  *(undefined4 *)(param_1 + 0x48) = uVar10;
  *(undefined8 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  plVar13 = _localeconv();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_1c = plVar13->mon_grouping;
  local_8 = 0;
  local_18 = local_1c;
  do {
    cVar2 = *local_18;
    local_18 = local_18 + 1;
  } while (cVar2 != '\0');
  local_18 = local_18 + (1 - (int)(local_1c + 1));
  local_24 = param_1;
  local_20 = (char *)FUN_1026d360(local_18,1);
  if (local_20 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10228470();
  }
  if (local_18 != (char *)0x0) {
    FUN_1025b2d0(local_20,local_1c,local_18);
  }
  *(char **)(param_1 + 8) = local_20;
  local_1c = (&plVar13->int_curr_symbol)[*(char *)(param_1 + 0x28) == '\0'];
  local_20 = local_1c;
  do {
    cVar2 = *local_20;
    local_20 = local_20 + 1;
  } while (cVar2 != '\0');
  local_20 = local_20 + (1 - (int)(local_1c + 1));
  local_18 = (char *)FUN_1026d360(local_20,1);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10228470();
  }
  if (local_20 != (char *)0x0) {
    FUN_1025b2d0(local_18,local_1c,local_20);
  }
  *(char **)(param_1 + 0x10) = local_18;
  local_18 = "";
  if ((byte)plVar13->p_sign_posn < 5) {
    local_18 = plVar13->positive_sign;
  }
  local_20 = local_18;
  do {
    cVar2 = *local_20;
    local_20 = local_20 + 1;
  } while (cVar2 != '\0');
  local_20 = local_20 + (1 - (int)(local_18 + 1));
  local_1c = (char *)FUN_1026d360(local_20,1);
  if (local_1c != (char *)0x0) {
    if (local_20 != (char *)0x0) {
      FUN_1025b2d0(local_1c,local_18,local_20);
    }
    *(char **)(param_1 + 0x14) = local_1c;
    local_18 = "-";
    if ((byte)plVar13->n_sign_posn < 5) {
      local_18 = plVar13->negative_sign;
    }
    local_20 = local_18;
    do {
      cVar2 = *local_20;
      local_20 = local_20 + 1;
    } while (cVar2 != '\0');
    local_20 = local_20 + (1 - (int)(local_18 + 1));
    local_1c = (char *)FUN_1026d360(local_20,1);
    if (local_1c != (char *)0x0) {
      if (local_20 != (char *)0x0) {
        FUN_1025b2d0(local_1c,local_18,local_20);
      }
      cVar2 = *(char *)(param_1 + 0x28);
      *(char **)(param_1 + 0x18) = local_1c;
      *(char *)(param_1 + 0xc) = *plVar13->mon_decimal_point;
      *(char *)(param_1 + 0xd) = *plVar13->mon_thousands_sep;
      iVar14 = (int)(&plVar13->int_frac_digits)[cVar2 == '\0'];
      *(int *)(param_1 + 0x1c) = iVar14;
      if ((iVar14 < 0) || (0x7e < iVar14)) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      if ((((cVar2 == '\0') && ((uint)(int)plVar13->p_sep_by_space < 3)) &&
          ((uint)(int)plVar13->p_cs_precedes < 2)) && ((uint)(int)plVar13->p_sign_posn < 5)) {
        pcVar15 = "+v$x+v$xv$+xv+$xv$+x+$vx+$vx$v+x+$vx$+vx+v $+v $v $+v +$v $++$ v+$ v$ v++$ v$+ v+xv$+ v$v$ +v+ $v$ ++x$v+ $v$v ++ $v$ +v"
                  + plVar13->p_sign_posn * 4 +
                    ((int)plVar13->p_cs_precedes + plVar13->p_sep_by_space * 2) * 0x14;
      }
      else {
        pcVar15 = "$+xv";
      }
      *(undefined4 *)(local_14 + 0x20) = *(undefined4 *)pcVar15;
      if (((cVar2 == '\0') && ((uint)(int)plVar13->n_sep_by_space < 3)) &&
         (((uint)(int)plVar13->n_cs_precedes < 2 && ((uint)(int)plVar13->n_sign_posn < 5)))) {
        pcVar15 = "+v$x+v$xv$+xv+$xv$+x+$vx+$vx$v+x+$vx$+vx+v $+v $v $+v +$v $++$ v+$ v$ v++$ v$+ v+xv$+ v$v$ +v+ $v$ ++x$v+ $v$v ++ $v$ +v"
                  + plVar13->n_sign_posn * 4 +
                    ((int)plVar13->n_cs_precedes + plVar13->n_sep_by_space * 2) * 0x14;
      }
      else {
        pcVar15 = "$+xv";
      }
      *(undefined4 *)(local_14 + 0x24) = *(undefined4 *)pcVar15;
      if (param_3 != '\0') {
        *(undefined4 *)(local_14 + 0x20) = 0x76782b24;
        *(undefined4 *)(local_14 + 0x24) = 0x76782b24;
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

