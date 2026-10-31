/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022ea30 */

void FUN_1022ea30(int *param_1,int param_2,int param_3,int param_4,char param_5,int *param_6,
                 uint *param_7,undefined1 *param_8)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 ****ppppuVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  uint uVar13;
  code *pcVar14;
  undefined1 *local_80;
  int *local_7c;
  undefined1 local_78 [4];
  int *local_74;
  undefined1 *local_70;
  uint *local_6c;
  undefined4 local_68;
  undefined4 ***local_64 [4];
  undefined4 local_54;
  uint local_50;
  undefined4 ***local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint local_3c;
  uint local_38;
  undefined1 local_34 [32];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10288ccd;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_7c = param_1;
  local_6c = param_7;
  piVar1 = *(int **)(param_6[0xc] + 4);
  local_70 = param_8;
  local_68 = param_6;
  pcVar14 = *(code **)(*piVar1 + 4);
  local_74 = piVar1;
  if ((param_6[5] & 0x4000U) == 0) {
LAB_1022ecea:
    (*(code *)PTR_guard_check_icall_1035d810)();
    (*pcVar14)();
    local_8 = 4;
    uVar10 = FUN_102300c0(local_34,&param_2,&param_4,local_68[5],local_78);
    local_68 = (int *)CONCAT22(local_68._2_2_,(short)uVar10);
    local_8 = 0xffffffff;
    if (local_74 != (int *)0x0) {
      pcVar14 = *(code **)(*local_74 + 8);
      (*(code *)PTR_guard_check_icall_1035d810)();
      puVar3 = (undefined4 *)(*pcVar14)();
      if (puVar3 != (undefined4 *)0x0) {
        pcVar14 = *(code **)*puVar3;
        (*(code *)PTR_guard_check_icall_1035d810)(1);
        (*pcVar14)();
      }
      uVar10 = (uint)local_68 & 0xffff;
    }
    if ((char)uVar10 < '\0') {
      *local_70 = 0;
      *local_6c = 2;
    }
    else {
      iVar6 = FUN_10257a10(local_34,&local_80,(int)(char)uVar10,&local_74);
      *local_70 = iVar6 != 0;
      if (((local_80 == local_34) || (local_74 != (int *)0x0)) ||
         ((local_68._1_1_ != '\0' || ((iVar6 != 0 && (iVar6 != 1)))))) {
        *local_6c = 2;
      }
    }
  }
  else {
    (*(code *)PTR_guard_check_icall_1035d810)(local_14);
    (*pcVar14)();
    local_8 = 0;
    local_68 = (int *)FUN_1000c417(local_78);
    pcVar14 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar3 = (undefined4 *)(*pcVar14)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar14 = *(code **)*puVar3;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar14)();
    }
    local_3c = 1;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    local_38 = 0xf;
    local_4c = (undefined4 ****)0x0;
    local_8 = 1;
    pcVar14 = *(code **)(*local_68 + 0x18);
    (*(code *)PTR_guard_check_icall_1035d810)(local_64);
    (*pcVar14)();
    ppppuVar5 = local_64;
    if (0xf < local_50) {
      ppppuVar5 = (undefined4 ****)local_64[0];
    }
    local_8._0_1_ = 2;
    FUN_1000347e(ppppuVar5,local_54);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_10004e60();
    uVar10 = local_3c;
    if (local_3c < local_38) {
      if (((local_3c != local_3c + 1) && (0xf < local_38)) && (DAT_103235d4 != '\0')) {
        uVar8 = (int)local_4c + local_3c + 2;
        uVar13 = (int)local_4c + local_3c + 1;
        uVar11 = (int)local_4c + local_38 + 8 & 0xfffffff8;
        uVar4 = uVar11;
        if (uVar8 <= uVar11) {
          uVar4 = uVar8;
        }
        uVar8 = uVar11;
        if (uVar13 <= uVar11) {
          uVar8 = uVar13;
        }
        guard_check_icall(local_4c,uVar11,uVar8,uVar4);
      }
      local_3c = uVar10 + 1;
      ppppuVar5 = &local_4c;
      if (0xf < local_38) {
        ppppuVar5 = (undefined4 ****)local_4c;
      }
      *(undefined2 *)((int)ppppuVar5 + uVar10) = 0;
    }
    else {
      FUN_10232b40(1,local_7c,0);
    }
    pcVar14 = *(code **)(*local_68 + 0x1c);
    (*(code *)PTR_guard_check_icall_1035d810)(local_64);
    (*pcVar14)();
    ppppuVar5 = local_64;
    if (0xf < local_50) {
      ppppuVar5 = (undefined4 ****)local_64[0];
    }
    local_8._0_1_ = 3;
    FUN_1000347e(ppppuVar5,local_54);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_10004e60();
    ppppuVar5 = &local_4c;
    if (0xf < local_38) {
      ppppuVar5 = (undefined4 ****)local_4c;
    }
    iVar6 = FUN_10232710(&param_2,&param_4,2,ppppuVar5,1);
    if (iVar6 == 0) {
      *local_70 = 0;
    }
    else if (iVar6 == 1) {
      *local_70 = 1;
    }
    else {
      *local_70 = 0;
      *local_6c = 2;
    }
    local_8 = 0xffffffff;
    if (0xf < local_38) {
      if (DAT_103235d4 != '\0') {
        pcVar9 = (code *)(local_38 + 1 + (int)local_4c);
        pcVar14 = (code *)(local_3c + 1 + (int)local_4c);
        pcVar12 = (code *)((uint)(pcVar9 + 7) & 0xfffffff8);
        pcVar7 = pcVar12;
        if (pcVar9 <= pcVar12) {
          pcVar7 = pcVar9;
        }
        pcVar9 = pcVar12;
        if (pcVar14 <= pcVar12) {
          pcVar9 = pcVar14;
        }
        guard_check_icall(local_4c,pcVar12,pcVar9,pcVar7);
      }
      uVar10 = local_38 + 1;
      ppppuVar5 = (undefined4 ****)local_4c;
      if (0xfff < uVar10) {
        ppppuVar5 = (undefined4 ****)local_4c[-1];
        uVar10 = local_38 + 0x24;
        if (0x1f < (uint)((int)local_4c + (-4 - (int)ppppuVar5))) {
          pcVar7 = (code *)swi(0x29);
          (*pcVar7)();
          goto LAB_1022ecea;
        }
      }
      FUN_102283a0(ppppuVar5,uVar10);
    }
  }
  puVar2 = local_6c;
  if ((char)param_3 == '\0') {
    FUN_100e1fa2();
  }
  if (param_5 == '\0') {
    FUN_100e1fa2();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_1022edd0;
  }
  else if (param_4 == 0) goto LAB_1022edd0;
  *puVar2 = *puVar2 | 1;
LAB_1022edd0:
  *local_7c = param_2;
  local_7c[1] = param_3;
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

