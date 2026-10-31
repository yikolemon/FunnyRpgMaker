/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10242e60 */

void FUN_10242e60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,char *param_7,undefined4 ****param_8)

{
  undefined2 *puVar1;
  byte bVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 ***pppuVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 ****ppppuVar11;
  undefined4 ****ppppuVar12;
  int extraout_ECX;
  int iVar13;
  int iVar14;
  undefined4 ****ppppuVar15;
  byte ****ppppbVar16;
  undefined4 ***local_5c;
  undefined1 local_58 [4];
  int *local_54;
  undefined4 ***local_50;
  int *local_4c;
  undefined4 ***local_48;
  byte ***local_44 [5];
  uint local_30;
  undefined4 ***local_2c [4];
  undefined4 ***local_1c;
  undefined4 ***local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10289a05;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_8 == (undefined4 ****)0x0) || ((*param_7 != '+' && (*param_7 != '-')))) {
    local_48 = (undefined4 ****)0x0;
  }
  else {
    local_48 = (undefined4 ****)0x1;
  }
  if (((((*(uint *)(param_5 + 0x14) & 0xe00) == 0x800) &&
       ((undefined4 ****)((int)local_48 + 2U) <= param_8)) && (param_7[(int)local_48] == '0')) &&
     (((param_7 + 1)[(int)local_48] == 'x' || ((param_7 + 1)[(int)local_48] == 'X')))) {
    local_48 = (undefined4 ****)((int)local_48 + 2U);
  }
  piVar3 = *(int **)(*(int *)(param_5 + 0x30) + 4);
  pcVar4 = *(code **)(*piVar3 + 4);
  local_54 = piVar3;
  (*(code *)PTR_guard_check_icall_1035d810)(local_14);
  (*pcVar4)();
  local_8 = 0;
  piVar8 = (int *)FUN_10240a50(local_58);
  local_8 = 0xffffffff;
  pcVar4 = *(code **)(*piVar3 + 8);
  (*(code *)PTR_guard_check_icall_1035d810)();
  puVar9 = (undefined4 *)(*pcVar4)();
  if (puVar9 != (undefined4 *)0x0) {
    pcVar4 = *(code **)*puVar9;
    (*(code *)PTR_guard_check_icall_1035d810)(1);
    (*pcVar4)();
  }
  FUN_102471b0(param_8,0);
  ppppuVar15 = local_2c;
  if ((undefined4 ****)0x7 < local_18) {
    ppppuVar15 = (undefined4 ****)local_2c[0];
  }
  local_8 = 1;
  pcVar4 = *(code **)(*piVar8 + 0x2c);
  (*(code *)PTR_guard_check_icall_1035d810)
            (param_7,(char *)((int)param_8 + (int)param_7),ppppuVar15);
  (*pcVar4)();
  piVar3 = *(int **)(*(int *)(param_5 + 0x30) + 4);
  pcVar4 = *(code **)(*piVar3 + 4);
  local_54 = piVar3;
  (*(code *)PTR_guard_check_icall_1035d810)();
  (*pcVar4)();
  local_8._0_1_ = 2;
  local_4c = (int *)FUN_10243830(local_58);
  local_8 = CONCAT31(local_8._1_3_,1);
  pcVar4 = *(code **)(*piVar3 + 8);
  (*(code *)PTR_guard_check_icall_1035d810)();
  puVar9 = (undefined4 *)(*pcVar4)();
  if (puVar9 != (undefined4 *)0x0) {
    pcVar4 = *(code **)*puVar9;
    (*(code *)PTR_guard_check_icall_1035d810)(1);
    (*pcVar4)();
  }
  pcVar4 = *(code **)(*local_4c + 0x14);
  (*(code *)PTR_guard_check_icall_1035d810)(local_44);
  (*pcVar4)();
  local_8 = CONCAT31(local_8._1_3_,3);
  ppppbVar16 = local_44;
  if (0xf < local_30) {
    ppppbVar16 = (byte ****)local_44[0];
  }
  if ((*(byte *)ppppbVar16 != 0x7f) && ('\0' < (char)*(byte *)ppppbVar16)) {
    pcVar4 = *(code **)(*local_4c + 0x10);
    (*(code *)PTR_guard_check_icall_1035d810)();
    uVar10 = (*pcVar4)();
    local_4c = (int *)(uVar10 & 0xffff);
    bVar2 = *(byte *)ppppbVar16;
    ppppuVar15 = (undefined4 ****)local_1c;
    ppppuVar12 = (undefined4 ****)local_18;
    while (((local_1c = ppppuVar15, local_18 = ppppuVar12, bVar2 != 0x7f && ('\0' < (char)bVar2)) &&
           ((uint)*(byte *)ppppbVar16 < (uint)((int)param_8 - (int)local_48)))) {
      param_8 = (undefined4 ****)((int)param_8 - (uint)*(byte *)ppppbVar16);
      if (ppppuVar15 < param_8) {
        FUN_10247090();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (ppppuVar12 == ppppuVar15) {
        if (ppppuVar15 == (undefined4 ****)0x7ffffffe) {
                    /* WARNING: Subroutine does not return */
          FUN_100013fb();
        }
        local_5c = (undefined4 ***)((int)ppppuVar15 + 1U | 7);
        if (local_5c < (undefined4 ****)0x7fffffff) {
          if ((undefined4 ****)(0x7ffffffe - ((uint)ppppuVar12 >> 1)) < ppppuVar12) {
            local_5c = (undefined4 ****)0x7ffffffe;
          }
          else {
            ppppuVar11 = (undefined4 ****)((int)ppppuVar12 + ((uint)ppppuVar12 >> 1));
            if (local_5c < ppppuVar11) {
              local_5c = ppppuVar11;
            }
          }
        }
        else {
          local_5c = (undefined4 ****)0x7ffffffe;
        }
        local_50 = (undefined4 ***)FUN_10250c70(local_2c,&local_5c);
        FUN_10236130();
        pppuVar7 = local_2c[0];
        local_1c = (undefined4 ***)((int)ppppuVar15 + 1);
        local_54 = (int *)((int)param_8 * 2);
        local_18 = local_5c;
        local_5c = (undefined4 ***)((int)local_54 + (int)local_50);
        if (ppppuVar12 < (undefined4 ****)0x8) {
          FUN_1025b2d0(local_50,local_2c,local_54);
          *(short *)local_5c = (short)local_4c;
          FUN_1025b2d0((undefined2 *)((int)local_5c + 2),(int)local_2c + (int)param_8 * 2,
                       ((int)ppppuVar15 - (int)param_8) * 2 + 2);
        }
        else {
          FUN_1025b2d0(local_50,local_2c[0],local_54);
          *(short *)local_5c = (short)local_4c;
          FUN_1025b2d0((undefined2 *)((int)local_5c + 2),(int)local_54 + (int)pppuVar7,
                       ((int)ppppuVar15 - (int)param_8) * 2 + 2);
          ppppuVar15 = (undefined4 ****)((int)ppppuVar12 * 2 + 2);
          ppppuVar11 = (undefined4 ****)pppuVar7;
          if ((undefined4 ****)0xfff < ppppuVar15) {
            ppppuVar11 = (undefined4 ****)pppuVar7[-1];
            ppppuVar15 = (undefined4 ****)((int)ppppuVar12 * 2 + 0x25);
            if (0x1f < (uint)((int)pppuVar7 + (-4 - (int)ppppuVar11))) {
              pcVar4 = (code *)swi(0x29);
              (*pcVar4)();
              iVar13 = extraout_ECX;
              goto LAB_10243235;
            }
          }
          FUN_102283a0(ppppuVar11,ppppuVar15);
        }
        local_2c[0] = local_50;
        FUN_102360d0();
      }
      else {
        if (ppppuVar15 != (undefined4 ****)((int)ppppuVar15 + 1U)) {
          ppppuVar11 = local_2c;
          if ((undefined4 ****)0x7 < ppppuVar12) {
            ppppuVar11 = (undefined4 ****)local_2c[0];
          }
          FUN_10236190(ppppuVar11,ppppuVar12,ppppuVar15,(undefined4 ****)((int)ppppuVar15 + 1U));
        }
        local_1c = (undefined4 ***)((int)ppppuVar15 + 1);
        ppppuVar12 = local_2c;
        if ((undefined4 ****)0x7 < local_18) {
          ppppuVar12 = (undefined4 ****)local_2c[0];
        }
        puVar1 = (undefined2 *)((int)ppppuVar12 + (int)param_8 * 2);
        FUN_1025b2d0(puVar1 + 1,puVar1,((int)ppppuVar15 - (int)param_8) * 2 + 2);
        *puVar1 = (short)local_4c;
      }
      if ('\0' < (char)*(byte *)((int)ppppbVar16 + 1)) {
        ppppbVar16 = (byte ****)((int)ppppbVar16 + 1);
      }
      bVar2 = *(byte *)ppppbVar16;
      ppppuVar15 = (undefined4 ****)local_1c;
      ppppuVar12 = (undefined4 ****)local_18;
    }
  }
  local_50 = local_1c;
  ppppuVar12 = *(undefined4 *****)(param_5 + 0x20);
  iVar13 = param_5;
  ppppuVar15 = (undefined4 ****)local_48;
  if (((*(int *)(param_5 + 0x24) < 0) ||
      ((*(int *)(param_5 + 0x24) < 1 && (ppppuVar12 == (undefined4 ****)0x0)))) ||
     (ppppuVar12 <= local_1c)) {
LAB_10243235:
    iVar14 = 0;
  }
  else {
    iVar14 = (int)ppppuVar12 - (int)local_1c;
  }
  uVar10 = *(uint *)(iVar13 + 0x14) & 0x1c0;
  if (uVar10 == 0x40) {
    ppppuVar12 = local_2c;
    if ((undefined4 ****)0x7 < local_18) {
      ppppuVar12 = (undefined4 ****)local_2c[0];
    }
    puVar9 = (undefined4 *)FUN_10243390(param_1,local_58,param_3,param_4,ppppuVar12,ppppuVar15);
  }
  else if (uVar10 == 0x100) {
    ppppuVar12 = local_2c;
    if ((undefined4 ****)0x7 < local_18) {
      ppppuVar12 = (undefined4 ****)local_2c[0];
    }
    puVar9 = (undefined4 *)FUN_10243390(param_1,local_58,param_3,param_4,ppppuVar12,ppppuVar15);
    puVar9 = (undefined4 *)FUN_10243420(param_1,local_58,*puVar9,puVar9[1],param_6,iVar14);
    iVar14 = 0;
  }
  else {
    puVar9 = (undefined4 *)FUN_10243420(param_1,local_58,param_3,param_4,param_6,iVar14);
    iVar14 = 0;
    ppppuVar12 = local_2c;
    if ((undefined4 ****)0x7 < local_18) {
      ppppuVar12 = (undefined4 ****)local_2c[0];
    }
    puVar9 = (undefined4 *)FUN_10243390(param_1,local_58,*puVar9,puVar9[1],ppppuVar12,ppppuVar15);
  }
  ppppuVar12 = local_2c;
  if ((undefined4 ****)0x7 < local_18) {
    ppppuVar12 = (undefined4 ****)local_2c[0];
  }
  local_50 = (undefined4 ***)((int)local_50 - (int)ppppuVar15);
  puVar9 = (undefined4 *)
           FUN_10243390(param_1,local_58,*puVar9,puVar9[1],(int)ppppuVar12 + (int)ppppuVar15 * 2,
                        local_50);
  uVar5 = *puVar9;
  uVar6 = puVar9[1];
  *(undefined4 *)(param_5 + 0x20) = 0;
  *(undefined4 *)(param_5 + 0x24) = 0;
  FUN_10243420(param_1,param_2,uVar5,uVar6,param_6,iVar14);
  FUN_10001fee();
  FUN_102363f0();
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

