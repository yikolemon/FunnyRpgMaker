/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1024a710 */

void FUN_1024a710(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,char *param_6,undefined4 *****param_7,char param_8)

{
  undefined2 *puVar1;
  byte bVar2;
  int *piVar3;
  code *pcVar4;
  byte ***pppbVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte ****ppppbVar8;
  undefined4 ****ppppuVar9;
  undefined2 uVar10;
  uint uVar11;
  undefined4 *****pppppuVar12;
  lconv *plVar13;
  undefined4 *****pppppuVar14;
  undefined4 *puVar15;
  undefined4 *****pppppuVar16;
  int iVar17;
  undefined4 *****pppppuVar18;
  char *_Control;
  int iVar19;
  undefined4 ****local_68;
  char local_64;
  undefined1 local_63;
  undefined1 local_60 [4];
  int *local_5c;
  byte ****local_58;
  int *local_54;
  undefined4 local_50;
  undefined4 ****local_4c;
  undefined4 ****local_48;
  byte ****local_44 [5];
  uint local_30;
  undefined4 ****local_2c [4];
  undefined4 ****local_1c;
  undefined4 ****local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10289275;
  local_10 = ExceptionList;
  uVar11 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_58 = (byte ****)param_6;
  local_4c = param_7;
  if ((param_7 == (undefined4 *****)0x0) || ((*param_6 != '+' && (*param_6 != '-')))) {
    local_48 = (undefined4 *****)0x0;
  }
  else {
    local_48 = (undefined4 *****)0x1;
  }
  if ((*(uint *)(param_4 + 0x14) & 0x3000) == 0x3000) {
    _Control = "pP";
    if ((((undefined4 *****)((int)local_48 + 2U) <= param_7) && (param_6[(int)local_48] == '0')) &&
       (((param_6 + 1)[(int)local_48] == 'x' || ((param_6 + 1)[(int)local_48] == 'X')))) {
      local_48 = (undefined4 *****)((int)local_48 + 2U);
    }
  }
  else {
    _Control = "eE";
  }
  local_14 = uVar11;
  pppppuVar12 = (undefined4 *****)_strcspn(param_6,_Control);
  local_63 = 0;
  plVar13 = _localeconv();
  local_64 = *plVar13->decimal_point;
  pppppuVar14 = (undefined4 *****)_strcspn(param_6,&local_64);
  piVar3 = *(int **)(*(int *)(param_4 + 0x30) + 4);
  pcVar4 = *(code **)(*piVar3 + 4);
  local_5c = piVar3;
  (*(code *)PTR_guard_check_icall_1035d810)(uVar11);
  (*pcVar4)();
  local_8 = 0;
  local_54 = (int *)FUN_10240a50(local_60);
  local_8 = 0xffffffff;
  pcVar4 = *(code **)(*piVar3 + 8);
  (*(code *)PTR_guard_check_icall_1035d810)();
  puVar15 = (undefined4 *)(*pcVar4)();
  if (puVar15 != (undefined4 *)0x0) {
    pcVar4 = *(code **)*puVar15;
    (*(code *)PTR_guard_check_icall_1035d810)(1);
    (*pcVar4)();
  }
  ppppuVar9 = local_4c;
  FUN_102471b0(local_4c,0);
  pppppuVar18 = local_2c;
  if ((undefined4 *****)0x7 < local_18) {
    pppppuVar18 = (undefined4 *****)local_2c[0];
  }
  local_8 = 1;
  pcVar4 = *(code **)(*local_54 + 0x2c);
  (*(code *)PTR_guard_check_icall_1035d810)
            (local_58,(char *)((int)ppppuVar9 + (int)local_58),pppppuVar18);
  (*pcVar4)();
  piVar3 = *(int **)(*(int *)(param_4 + 0x30) + 4);
  pcVar4 = *(code **)(*piVar3 + 4);
  local_5c = piVar3;
  (*(code *)PTR_guard_check_icall_1035d810)();
  (*pcVar4)();
  local_8._0_1_ = 2;
  local_58 = (byte ****)FUN_10243830(local_60);
  local_8 = CONCAT31(local_8._1_3_,1);
  pcVar4 = *(code **)(*piVar3 + 8);
  (*(code *)PTR_guard_check_icall_1035d810)();
  puVar15 = (undefined4 *)(*pcVar4)();
  if (puVar15 != (undefined4 *)0x0) {
    pcVar4 = *(code **)*puVar15;
    (*(code *)PTR_guard_check_icall_1035d810)(1);
    (*pcVar4)();
  }
  ppppbVar8 = local_58;
  pppbVar5 = (byte ***)(*local_58)[5];
  (*(code *)PTR_guard_check_icall_1035d810)(local_44);
  (*(code *)pppbVar5)();
  local_8 = CONCAT31(local_8._1_3_,3);
  pppbVar5 = (byte ***)(*ppppbVar8)[4];
  (*(code *)PTR_guard_check_icall_1035d810)();
  uVar11 = (*(code *)pppbVar5)();
  local_54 = (int *)(uVar11 & 0xffff);
  if (pppppuVar14 != (undefined4 *****)local_4c) {
    pppbVar5 = (byte ***)(*ppppbVar8)[3];
    (*(code *)PTR_guard_check_icall_1035d810)();
    uVar10 = (*(code *)pppbVar5)();
    pppppuVar18 = local_2c;
    if ((undefined4 *****)0x7 < local_18) {
      pppppuVar18 = (undefined4 *****)local_2c[0];
    }
    *(undefined2 *)((int)pppppuVar18 + (int)pppppuVar14 * 2) = uVar10;
  }
  if (param_8 != '\0') {
    if (pppppuVar14 == (undefined4 *****)local_4c) {
      pppppuVar14 = pppppuVar12;
    }
    local_58 = (byte ****)local_44;
    if (0xf < local_30) {
      local_58 = local_44[0];
    }
    bVar2 = *(byte *)local_58;
    pppppuVar12 = (undefined4 *****)local_1c;
    pppppuVar18 = (undefined4 *****)local_18;
    while (((local_1c = pppppuVar12, local_18 = pppppuVar18, bVar2 != 0x7f && ('\0' < (char)bVar2))
           && ((uint)*(byte *)local_58 < (uint)((int)pppppuVar14 - (int)local_48)))) {
      pppppuVar14 = (undefined4 *****)((int)pppppuVar14 - (uint)*(byte *)local_58);
      if (pppppuVar12 < pppppuVar14) {
        FUN_10247090();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pppppuVar18 == pppppuVar12) {
        if (pppppuVar12 == (undefined4 *****)0x7ffffffe) {
                    /* WARNING: Subroutine does not return */
          FUN_100013fb();
        }
        local_68 = (undefined4 ****)((int)pppppuVar12 + 1U | 7);
        if (local_68 < (undefined4 *****)0x7fffffff) {
          if ((undefined4 *****)(0x7ffffffe - ((uint)pppppuVar18 >> 1)) < pppppuVar18) {
            local_68 = (undefined4 *****)0x7ffffffe;
          }
          else {
            pppppuVar16 = (undefined4 *****)(((uint)pppppuVar18 >> 1) + (int)pppppuVar18);
            if (local_68 < pppppuVar16) {
              local_68 = pppppuVar16;
            }
          }
        }
        else {
          local_68 = (undefined4 *****)0x7ffffffe;
        }
        local_4c = (undefined4 ****)FUN_10250c70(local_2c,&local_68);
        FUN_10236130();
        ppppuVar9 = local_2c[0];
        local_1c = (undefined4 ****)((int)pppppuVar12 + 1);
        local_5c = (int *)((int)pppppuVar14 * 2);
        local_18 = local_68;
        local_68 = (undefined4 ****)((int)local_5c + (int)local_4c);
        if (pppppuVar18 < (undefined4 *****)0x8) {
          FUN_1025b2d0(local_4c,local_2c,local_5c);
          *(short *)local_68 = (short)local_54;
          FUN_1025b2d0((undefined2 *)((int)local_68 + 2),(int)local_2c + (int)pppppuVar14 * 2,
                       ((int)pppppuVar12 - (int)pppppuVar14) * 2 + 2);
        }
        else {
          FUN_1025b2d0(local_4c,local_2c[0],local_5c);
          *(short *)local_68 = (short)local_54;
          FUN_1025b2d0((undefined2 *)((int)local_68 + 2),(int)local_5c + (int)ppppuVar9,
                       ((int)pppppuVar12 - (int)pppppuVar14) * 2 + 2);
          pppppuVar12 = (undefined4 *****)((int)pppppuVar18 * 2 + 2);
          pppppuVar16 = (undefined4 *****)ppppuVar9;
          if ((undefined4 *****)0xfff < pppppuVar12) {
            pppppuVar16 = (undefined4 *****)ppppuVar9[-1];
            pppppuVar12 = (undefined4 *****)((int)pppppuVar18 * 2 + 0x25);
            pppppuVar18 = (undefined4 *****)((int)ppppuVar9 - (int)pppppuVar16);
            if ((undefined4 *****)0x1f < pppppuVar18 + -1) {
              pcVar4 = (code *)swi(0x29);
              iVar17 = (*pcVar4)();
              goto LAB_1024ab47;
            }
          }
          FUN_102283a0(pppppuVar16,pppppuVar12);
        }
        local_2c[0] = local_4c;
        FUN_102360d0();
      }
      else {
        if (pppppuVar12 != (undefined4 *****)((int)pppppuVar12 + 1U)) {
          pppppuVar16 = local_2c;
          if ((undefined4 *****)0x7 < pppppuVar18) {
            pppppuVar16 = (undefined4 *****)local_2c[0];
          }
          FUN_10236190(pppppuVar16,pppppuVar18,pppppuVar12,(undefined4 *****)((int)pppppuVar12 + 1U)
                      );
        }
        local_1c = (undefined4 ****)((int)pppppuVar12 + 1);
        pppppuVar18 = local_2c;
        if ((undefined4 *****)0x7 < local_18) {
          pppppuVar18 = (undefined4 *****)local_2c[0];
        }
        puVar1 = (undefined2 *)((int)pppppuVar18 + (int)pppppuVar14 * 2);
        FUN_1025b2d0(puVar1 + 1,puVar1,((int)pppppuVar12 - (int)pppppuVar14) * 2 + 2);
        *puVar1 = (short)local_54;
      }
      if ('\0' < (char)*(byte *)((int)local_58 + 1)) {
        local_58 = (byte ****)((int)local_58 + 1);
      }
      bVar2 = *(byte *)local_58;
      pppppuVar12 = (undefined4 *****)local_1c;
      pppppuVar18 = (undefined4 *****)local_18;
    }
  }
  pppppuVar14 = *(undefined4 ******)(param_4 + 0x20);
  iVar17 = param_4;
  pppppuVar18 = (undefined4 *****)local_1c;
  pppppuVar12 = (undefined4 *****)local_48;
  if (((*(int *)(param_4 + 0x24) < 0) ||
      ((*(int *)(param_4 + 0x24) < 1 && (pppppuVar14 == (undefined4 *****)0x0)))) ||
     (pppppuVar14 <= local_1c)) {
LAB_1024ab47:
    iVar19 = 0;
  }
  else {
    iVar19 = (int)pppppuVar14 - (int)local_1c;
  }
  uVar11 = *(uint *)(iVar17 + 0x14) & 0x1c0;
  if (uVar11 == 0x40) {
    pppppuVar14 = local_2c;
    if ((undefined4 *****)0x7 < local_18) {
      pppppuVar14 = (undefined4 *****)local_2c[0];
    }
    puVar15 = (undefined4 *)FUN_10243390(local_50,local_60,param_2,param_3,pppppuVar14,pppppuVar12);
  }
  else if (uVar11 == 0x100) {
    pppppuVar14 = local_2c;
    if ((undefined4 *****)0x7 < local_18) {
      pppppuVar14 = (undefined4 *****)local_2c[0];
    }
    puVar15 = (undefined4 *)FUN_10243390(local_50,local_60,param_2,param_3,pppppuVar14,pppppuVar12);
    puVar15 = (undefined4 *)FUN_10243420(local_50,local_60,*puVar15,puVar15[1],param_5,iVar19);
    iVar19 = 0;
  }
  else {
    puVar15 = (undefined4 *)FUN_10243420(local_50,local_60,param_2,param_3,param_5,iVar19);
    iVar19 = 0;
    pppppuVar14 = local_2c;
    if ((undefined4 *****)0x7 < local_18) {
      pppppuVar14 = (undefined4 *****)local_2c[0];
    }
    puVar15 = (undefined4 *)
              FUN_10243390(local_50,local_60,*puVar15,puVar15[1],pppppuVar14,pppppuVar12);
  }
  pppppuVar14 = local_2c;
  if ((undefined4 *****)0x7 < local_18) {
    pppppuVar14 = (undefined4 *****)local_2c[0];
  }
  puVar15 = (undefined4 *)
            FUN_10243390(local_50,local_60,*puVar15,puVar15[1],
                         (int)pppppuVar14 + (int)pppppuVar12 * 2,(int)pppppuVar18 - (int)pppppuVar12
                        );
  uVar6 = *puVar15;
  uVar7 = puVar15[1];
  *(undefined4 *)(param_4 + 0x20) = 0;
  *(undefined4 *)(param_4 + 0x24) = 0;
  FUN_10243420(local_50,param_1,uVar6,uVar7,param_5,iVar19);
  FUN_10001fee();
  FUN_102363f0();
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

