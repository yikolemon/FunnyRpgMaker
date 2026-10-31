/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10247750 */

void __thiscall FUN_10247750(int param_1,undefined4 param_2,char param_3)

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
  uint uVar10;
  undefined4 *puVar11;
  lconv *plVar12;
  undefined4 uVar13;
  char *pcVar14;
  int iVar15;
  int *unaff_FS_OFFSET;
  undefined1 local_54 [44];
  undefined8 local_28;
  int local_20;
  char *local_1c;
  char *local_18;
  char local_14 [4];
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028994d;
  local_10 = *unaff_FS_OFFSET;
  uVar10 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  puVar11 = (undefined4 *)FUN_1022bf80(local_54,uVar10);
  uVar3 = puVar11[1];
  uVar4 = puVar11[2];
  uVar5 = puVar11[3];
  uVar6 = puVar11[4];
  uVar7 = puVar11[5];
  uVar8 = puVar11[6];
  uVar9 = puVar11[7];
  uVar1 = *(undefined8 *)(puVar11 + 8);
  uVar13 = puVar11[10];
  *(undefined4 *)(param_1 + 0x2c) = *puVar11;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  *(undefined4 *)(param_1 + 0x40) = uVar7;
  *(undefined4 *)(param_1 + 0x44) = uVar8;
  *(undefined4 *)(param_1 + 0x48) = uVar9;
  *(undefined8 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar13;
  plVar12 = _localeconv();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_28 = CONCAT44(param_1,(undefined4)local_28);
  local_1c = plVar12->mon_grouping;
  local_8 = 0;
  local_18 = local_1c;
  do {
    cVar2 = *local_18;
    local_18 = local_18 + 1;
  } while (cVar2 != '\0');
  local_18 = local_18 + (1 - (int)(local_1c + 1));
  local_20 = FUN_1026d360(local_18,1);
  if (local_20 != 0) {
    if (local_18 != (char *)0x0) {
      FUN_1025b2d0(local_20,local_1c,local_18);
    }
    *(int *)(param_1 + 8) = local_20;
    uVar13 = FUN_10250990((&plVar12->int_curr_symbol)[*(char *)(param_1 + 0x28) == '\0'],
                          param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x10) = uVar13;
    pcVar14 = "";
    if ((byte)plVar12->p_sign_posn < 5) {
      pcVar14 = plVar12->positive_sign;
    }
    uVar13 = FUN_10250990(pcVar14,param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x14) = uVar13;
    pcVar14 = "-";
    if ((byte)plVar12->n_sign_posn < 5) {
      pcVar14 = plVar12->negative_sign;
    }
    uVar13 = FUN_10250990(pcVar14,param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x18) = uVar13;
    local_28 = 0;
    local_14[0] = *plVar12->mon_decimal_point;
    local_18 = (char *)((uint)local_18 & 0xffff0000);
    FUN_1022d8f0(&local_18,local_14,1,&local_28,param_1 + 0x2c);
    *(undefined2 *)(param_1 + 0xc) = local_18._0_2_;
    local_28 = 0;
    local_14[0] = *plVar12->mon_thousands_sep;
    local_18 = (char *)((uint)local_18 & 0xffff0000);
    FUN_1022d8f0(&local_18,local_14,1,&local_28,param_1 + 0x2c);
    cVar2 = *(char *)(param_1 + 0x28);
    *(undefined2 *)(param_1 + 0xe) = local_18._0_2_;
    iVar15 = (int)(&plVar12->int_frac_digits)[cVar2 == '\0'];
    *(int *)(param_1 + 0x1c) = iVar15;
    if ((iVar15 < 0) || (0x7e < iVar15)) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    if ((((cVar2 == '\0') && ((uint)(int)plVar12->p_sep_by_space < 3)) &&
        ((uint)(int)plVar12->p_cs_precedes < 2)) && ((uint)(int)plVar12->p_sign_posn < 5)) {
      pcVar14 = "+v$x+v$xv$+xv+$xv$+x+$vx+$vx$v+x+$vx$+vx+v $+v $v $+v +$v $++$ v+$ v$ v++$ v$+ v+xv$+ v$v$ +v+ $v$ ++x$v+ $v$v ++ $v$ +v"
                + plVar12->p_sign_posn * 4 +
                  ((int)plVar12->p_cs_precedes + plVar12->p_sep_by_space * 2) * 0x14;
    }
    else {
      pcVar14 = "$+xv";
    }
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)pcVar14;
    if (((cVar2 == '\0') && ((uint)(int)plVar12->n_sep_by_space < 3)) &&
       (((uint)(int)plVar12->n_cs_precedes < 2 && ((uint)(int)plVar12->n_sign_posn < 5)))) {
      pcVar14 = "+v$x+v$xv$+xv+$xv$+x+$vx+$vx$v+x+$vx$+vx+v $+v $v $+v +$v $++$ v+$ v$ v++$ v$+ v+xv$+ v$v$ +v+ $v$ ++x$v+ $v$v ++ $v$ +v"
                + plVar12->n_sign_posn * 4 +
                  ((int)plVar12->n_cs_precedes + plVar12->n_sep_by_space * 2) * 0x14;
    }
    else {
      pcVar14 = "$+xv";
    }
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)pcVar14;
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

