/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10237740 */

void FUN_10237740(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  undefined8 uVar11;
  int *piVar12;
  int *local_18;
  int *local_14;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10289b19;
  local_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  if ((param_2 & 2) != 0) {
    if (param_4 == 0) {
      if (DAT_1039ccf8 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_1039ccf8 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_1039ccf8 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_1039ccf8;
      iVar5 = FUN_10228350(0x44);
      if (iVar5 == 0) {
        FUN_1022dd70(param_3,0,piVar12);
      }
      else {
        uVar6 = FUN_10238ec0(param_1,0);
        FUN_1022dd70(param_3,uVar6,piVar12);
      }
    }
    else {
      if (DAT_1039ccf8 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_1039ccf8 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_1039ccf8 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_1039ccf8;
      uVar6 = FUN_10240a50(param_4,uVar4);
      FUN_1022dd70(param_3,uVar6,piVar12);
    }
  }
  if ((param_2 & 8) != 0) {
    if (param_4 == 0) {
      if (DAT_103a32a4 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32a4 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32a4 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a32a4;
      puVar7 = (undefined4 *)FUN_10228350(8);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7[1] = 0;
        *puVar7 = std::
                  num_get<unsigned_short,std::istreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
                  ::vftable;
      }
      FUN_1022dd70(param_3,puVar7,piVar12);
      if (DAT_103a32a8 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32a8 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32a8 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a32a8;
      puVar7 = (undefined4 *)FUN_10228350(8);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7[1] = 0;
        *puVar7 = std::
                  num_put<unsigned_short,std::ostreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
                  ::vftable;
      }
      FUN_1022dd70(param_3,puVar7,piVar12);
      if (DAT_103a32ac == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32ac == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32ac = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a32ac;
      puVar7 = (undefined4 *)FUN_10228350(0x18);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7[1] = 0;
        local_8 = 0xc;
        *puVar7 = std::numpunct<unsigned_short>::vftable;
        FUN_10243570(param_1,0);
      }
      local_8 = 0xffffffff;
      FUN_1022dd70(param_3,puVar7,piVar12);
    }
    else {
      local_18 = DAT_103a32a4;
      if (DAT_103a32a4 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32a4 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32a4 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      local_18 = DAT_103a32a4;
      FUN_1022bea0(0);
      piVar12 = DAT_103a32f4;
      local_8 = 2;
      local_14 = DAT_103a32f4;
      if (DAT_103a32a4 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32a4 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32a4 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_103a32a4;
      iVar5 = (int)DAT_103a32a4 * 4;
      iVar9 = *(int *)(param_4 + 4);
      if (DAT_103a32a4 < *(int **)(iVar9 + 0xc)) {
        piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
        if (piVar8 == (int *)0x0) goto LAB_10237a55;
      }
      else {
        piVar8 = (int *)0x0;
LAB_10237a55:
        if (*(char *)(iVar9 + 0x14) == '\0') {
LAB_10237a6b:
          if (piVar8 != (int *)0x0) goto LAB_10237ab8;
        }
        else {
          iVar9 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar9 + 0xc)) {
            piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
            goto LAB_10237a6b;
          }
        }
        piVar8 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar5 = FUN_10240b80(&local_14,param_4);
          piVar8 = local_14;
          if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_1022b910(local_14);
          pcVar1 = *(code **)(*piVar8 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_103a32f4 = piVar8;
        }
      }
LAB_10237ab8:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      FUN_1022dd70(param_3,piVar8,local_18);
      local_14 = DAT_103a32a8;
      if (DAT_103a32a8 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32a8 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32a8 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      local_14 = DAT_103a32a8;
      FUN_1022bea0(0);
      piVar12 = DAT_103a32f8;
      local_8 = 5;
      local_18 = DAT_103a32f8;
      if (DAT_103a32a8 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32a8 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32a8 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_103a32a8;
      iVar5 = (int)DAT_103a32a8 * 4;
      iVar9 = *(int *)(param_4 + 4);
      if (DAT_103a32a8 < *(int **)(iVar9 + 0xc)) {
        piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
        if (piVar8 == (int *)0x0) goto LAB_10237c9e;
      }
      else {
        piVar8 = (int *)0x0;
LAB_10237c9e:
        if (*(char *)(iVar9 + 0x14) == '\0') {
LAB_10237cb4:
          if (piVar8 != (int *)0x0) goto LAB_10237b90;
        }
        else {
          iVar9 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar9 + 0xc)) {
            piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
            goto LAB_10237cb4;
          }
        }
        piVar8 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar5 = FUN_102421b0(&local_18,param_4);
          piVar8 = local_18;
          if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          piVar12 = local_18;
          local_8 = CONCAT31(local_8._1_3_,6);
          FUN_1022b910(local_18);
          pcVar1 = *(code **)(*piVar8 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_103a32f8 = piVar12;
        }
      }
LAB_10237b90:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      FUN_1022dd70(param_3,piVar8,local_14);
      if (DAT_103a32ac == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32ac == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32ac = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a32ac;
      uVar6 = FUN_10243830(param_4);
      FUN_1022dd70(param_3,uVar6,piVar12);
    }
  }
  bVar3 = FUN_10243960(0,0);
  if ((param_2 & (1 << (bVar3 & 0x1f)) >> 1) != 0) {
    if (param_4 == 0) {
      if (DAT_103a32b0 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32b0 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32b0 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a32b0;
      puVar7 = (undefined4 *)FUN_10228350(0x10);
      if (puVar7 == (undefined4 *)0x0) {
        FUN_1022dd70(param_3,0,piVar12);
      }
      else {
        puVar7[1] = 0;
        *puVar7 = std::collate<unsigned_short>::vftable;
        uVar11 = FUN_1022ca50();
        *(undefined8 *)(puVar7 + 2) = uVar11;
        FUN_1022dd70(param_3,puVar7,piVar12);
      }
    }
    else {
      local_14 = DAT_103a32b0;
      if (DAT_103a32b0 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32b0 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32b0 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      local_14 = DAT_103a32b0;
      FUN_1022bea0(0);
      piVar12 = DAT_103a3300;
      local_8 = 0xd;
      local_18 = DAT_103a3300;
      if (DAT_103a32b0 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32b0 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32b0 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_103a32b0;
      iVar5 = (int)DAT_103a32b0 * 4;
      iVar9 = *(int *)(param_4 + 4);
      if (DAT_103a32b0 < *(int **)(iVar9 + 0xc)) {
        piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
        if (piVar8 == (int *)0x0) goto LAB_10237df9;
      }
      else {
        piVar8 = (int *)0x0;
LAB_10237df9:
        if (*(char *)(iVar9 + 0x14) == '\0') {
LAB_10237e0f:
          if (piVar8 != (int *)0x0) goto LAB_10237dd6;
        }
        else {
          iVar9 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar9 + 0xc)) {
            piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
            goto LAB_10237e0f;
          }
        }
        piVar8 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar5 = FUN_10243960(&local_18,param_4);
          piVar8 = local_18;
          if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          piVar12 = local_18;
          local_8 = CONCAT31(local_8._1_3_,0xe);
          FUN_1022b910(local_18);
          pcVar1 = *(code **)(*piVar8 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_103a3300 = piVar12;
        }
      }
LAB_10237dd6:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      FUN_1022dd70(param_3,piVar8,local_14);
    }
  }
  if ((param_2 & 0x20) != 0) {
    if (param_4 == 0) {
      if (DAT_103a32b4 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32b4 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32b4 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a32b4;
      piVar8 = (int *)FUN_10228350(8);
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8[1] = 0;
        *piVar8 = (int)std::messages<unsigned_short>::vftable;
      }
    }
    else {
      local_14 = DAT_103a32b4;
      if (DAT_103a32b4 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32b4 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32b4 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      local_14 = DAT_103a32b4;
      FUN_1022bea0(0);
      piVar12 = DAT_103a3304;
      local_8 = 0x10;
      local_18 = DAT_103a3304;
      if (DAT_103a32b4 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32b4 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32b4 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_103a32b4;
      iVar5 = (int)DAT_103a32b4 * 4;
      iVar9 = *(int *)(param_4 + 4);
      if (DAT_103a32b4 < *(int **)(iVar9 + 0xc)) {
        piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
        if (piVar8 == (int *)0x0) goto LAB_10237f8d;
      }
      else {
        piVar8 = (int *)0x0;
LAB_10237f8d:
        if (*(char *)(iVar9 + 0x14) == '\0') {
LAB_10237fa3:
          if (piVar8 != (int *)0x0) goto LAB_10237ff0;
        }
        else {
          iVar9 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar9 + 0xc)) {
            piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
            goto LAB_10237fa3;
          }
        }
        piVar8 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar5 = FUN_10243ce0(&local_18,param_4);
          piVar8 = local_18;
          if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          local_8 = CONCAT31(local_8._1_3_,0x11);
          FUN_1022b910(local_18);
          pcVar1 = *(code **)(*piVar8 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_103a3304 = piVar8;
        }
      }
LAB_10237ff0:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      piVar12 = local_14;
    }
    FUN_1022dd70(param_3,piVar8,piVar12);
  }
  if ((param_2 & 4) != 0) {
    if (param_4 == 0) {
      if (DAT_103a32b8 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32b8 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32b8 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a32b8;
      puVar7 = (undefined4 *)FUN_10228350(8);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7[1] = 0;
        *puVar7 = std::
                  money_get<unsigned_short,std::istreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
                  ::vftable;
      }
      FUN_1022dd70(param_3,puVar7,piVar12);
      if (DAT_103a32bc == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32bc == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32bc = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a32bc;
      puVar7 = (undefined4 *)FUN_10228350(8);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7[1] = 0;
        *puVar7 = std::
                  money_put<unsigned_short,std::ostreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
                  ::vftable;
      }
      FUN_1022dd70(param_3,puVar7,piVar12);
      if (DAT_103a32c0 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32c0 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32c0 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a32c0;
      puVar7 = (undefined4 *)FUN_10228350(0x58);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7[1] = 0;
        local_8 = 0x1d;
        *puVar7 = std::_Mpunct<unsigned_short>::vftable;
        *(undefined1 *)(puVar7 + 10) = 0;
        FUN_10247750(param_1,0);
        *puVar7 = std::moneypunct<unsigned_short,0>::vftable;
      }
      local_8 = 0xffffffff;
      FUN_1022dd70(param_3,puVar7,piVar12);
      if (DAT_103a32c4 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32c4 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32c4 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a32c4;
      puVar7 = (undefined4 *)FUN_10228350(0x58);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7[1] = 0;
        local_8 = 0x23;
        *puVar7 = std::_Mpunct<unsigned_short>::vftable;
        *(undefined1 *)(puVar7 + 10) = 1;
        FUN_10247750(param_1,0);
        *puVar7 = std::moneypunct<unsigned_short,1>::vftable;
      }
      local_8 = 0xffffffff;
      FUN_1022dd70(param_3,puVar7,piVar12);
    }
    else {
      local_14 = DAT_103a32b8;
      if (DAT_103a32b8 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32b8 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32b8 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      local_14 = DAT_103a32b8;
      FUN_1022bea0(0);
      piVar12 = DAT_103a3308;
      local_8 = 0x13;
      local_18 = DAT_103a3308;
      if (DAT_103a32b8 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32b8 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32b8 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_103a32b8;
      iVar5 = (int)DAT_103a32b8 * 4;
      iVar9 = *(int *)(param_4 + 4);
      if (DAT_103a32b8 < *(int **)(iVar9 + 0xc)) {
        piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
        if (piVar8 == (int *)0x0) goto LAB_102382cd;
      }
      else {
        piVar8 = (int *)0x0;
LAB_102382cd:
        if (*(char *)(iVar9 + 0x14) == '\0') {
LAB_102382e3:
          if (piVar8 != (int *)0x0) goto LAB_10238330;
        }
        else {
          iVar9 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar9 + 0xc)) {
            piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
            goto LAB_102382e3;
          }
        }
        piVar8 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar5 = FUN_10243db0(&local_18,param_4);
          piVar8 = local_18;
          if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          local_8 = CONCAT31(local_8._1_3_,0x14);
          FUN_1022b910(local_18);
          pcVar1 = *(code **)(*piVar8 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_103a3308 = piVar8;
        }
      }
LAB_10238330:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      FUN_1022dd70(param_3,piVar8,local_14);
      local_14 = DAT_103a32bc;
      if (DAT_103a32bc == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32bc == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32bc = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      local_14 = DAT_103a32bc;
      FUN_1022bea0(0);
      piVar12 = DAT_103a330c;
      local_8 = 0x16;
      local_18 = DAT_103a330c;
      if (DAT_103a32bc == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32bc == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32bc = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_103a32bc;
      iVar5 = (int)DAT_103a32bc * 4;
      iVar9 = *(int *)(param_4 + 4);
      if (DAT_103a32bc < *(int **)(iVar9 + 0xc)) {
        piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
        if (piVar8 == (int *)0x0) goto LAB_10238532;
      }
      else {
        piVar8 = (int *)0x0;
LAB_10238532:
        if (*(char *)(iVar9 + 0x14) == '\0') {
LAB_10238548:
          if (piVar8 != (int *)0x0) goto LAB_10238408;
        }
        else {
          iVar9 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar9 + 0xc)) {
            piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
            goto LAB_10238548;
          }
        }
        piVar8 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar5 = FUN_10245e90(&local_18,param_4);
          piVar8 = local_18;
          if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          piVar12 = local_18;
          local_8 = CONCAT31(local_8._1_3_,0x17);
          FUN_1022b910(local_18);
          pcVar1 = *(code **)(*piVar8 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_103a330c = piVar12;
        }
      }
LAB_10238408:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      FUN_1022dd70(param_3,piVar8,local_14);
      if (DAT_103a32c0 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32c0 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32c0 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a32c0;
      uVar6 = FUN_10247b30(param_4);
      FUN_1022dd70(param_3,uVar6,piVar12);
      if (DAT_103a32c4 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32c4 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32c4 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a32c4;
      uVar6 = FUN_10247d30(param_4);
      FUN_1022dd70(param_3,uVar6,piVar12);
    }
  }
  if ((param_2 & 0x10) != 0) {
    if (param_4 == 0) {
      if (DAT_103a32c8 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32c8 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32c8 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a32c8;
      iVar5 = FUN_10228350(0x44);
      local_8 = 0x27;
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_10247e60(param_1,0);
      }
      local_8 = 0xffffffff;
      FUN_1022dd70(param_3,uVar6,piVar12);
      if (DAT_103a32cc == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32cc == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32cc = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a32cc;
      iVar5 = FUN_10228350(0xc);
      if (iVar5 == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)FUN_10249740(param_1,0);
      }
    }
    else {
      local_14 = DAT_103a32c8;
      if (DAT_103a32c8 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32c8 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32c8 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      local_14 = DAT_103a32c8;
      FUN_1022bea0(0);
      piVar12 = DAT_103a3318;
      local_8 = 0x28;
      local_18 = DAT_103a3318;
      if (DAT_103a32c8 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32c8 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32c8 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_103a32c8;
      iVar5 = (int)DAT_103a32c8 * 4;
      iVar9 = *(int *)(param_4 + 4);
      if (DAT_103a32c8 < *(int **)(iVar9 + 0xc)) {
        piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
        if (piVar8 == (int *)0x0) goto LAB_102386d2;
      }
      else {
        piVar8 = (int *)0x0;
LAB_102386d2:
        if (*(char *)(iVar9 + 0x14) == '\0') {
LAB_102386e8:
          if (piVar8 != (int *)0x0) goto LAB_10238735;
        }
        else {
          iVar9 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar9 + 0xc)) {
            piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
            goto LAB_102386e8;
          }
        }
        piVar8 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar5 = FUN_10247ee0(&local_18,param_4);
          piVar8 = local_18;
          if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          local_8 = CONCAT31(local_8._1_3_,0x29);
          FUN_1022b910(local_18);
          pcVar1 = *(code **)(*piVar8 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_103a3318 = piVar8;
        }
      }
LAB_10238735:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      FUN_1022dd70(param_3,piVar8,local_14);
      local_14 = DAT_103a32cc;
      if (DAT_103a32cc == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32cc == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32cc = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      local_14 = DAT_103a32cc;
      FUN_1022bea0(0);
      piVar12 = DAT_103a331c;
      local_8 = 0x2b;
      local_18 = DAT_103a331c;
      if (DAT_103a32cc == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32cc == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32cc = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_103a32cc;
      iVar5 = (int)DAT_103a32cc * 4;
      iVar9 = *(int *)(param_4 + 4);
      if (DAT_103a32cc < *(int **)(iVar9 + 0xc)) {
        piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
        if (piVar8 == (int *)0x0) goto LAB_10238806;
      }
      else {
        piVar8 = (int *)0x0;
LAB_10238806:
        if (*(char *)(iVar9 + 0x14) == '\0') {
LAB_1023881c:
          if (piVar8 != (int *)0x0) goto LAB_10238869;
        }
        else {
          iVar9 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar9 + 0xc)) {
            piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
            goto LAB_1023881c;
          }
        }
        piVar8 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar5 = FUN_102497a0(&local_18,param_4);
          piVar8 = local_18;
          if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          local_8 = CONCAT31(local_8._1_3_,0x2c);
          FUN_1022b910(local_18);
          pcVar1 = *(code **)(*piVar8 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_103a331c = piVar8;
        }
      }
LAB_10238869:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      piVar12 = local_14;
    }
    FUN_1022dd70(param_3,piVar8,piVar12);
  }
  if ((param_2 & 2) == 0) goto LAB_10238a31;
  if (param_4 == 0) {
    if (DAT_1039cd00 == (int *)0x0) {
      FUN_1022bea0(0);
      if (DAT_1039cd00 == (int *)0x0) {
        DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
        DAT_1039cd00 = DAT_1039ccf0;
      }
      FUN_1022bee0();
    }
    piVar12 = DAT_1039cd00;
    iVar5 = FUN_10228350(0x34);
    if (iVar5 == 0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = (int *)FUN_10238a80(param_1,0);
    }
  }
  else {
    if (DAT_1039cd00 == (int *)0x0) {
      FUN_1022bea0(0);
      if (DAT_1039cd00 == (int *)0x0) {
        DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
        DAT_1039cd00 = DAT_1039ccf0;
      }
      FUN_1022bee0();
    }
    piVar12 = DAT_1039cd00;
    FUN_1022bea0(0);
    piVar2 = DAT_103a3320;
    local_8 = 0x2e;
    local_14 = DAT_103a3320;
    if (DAT_1039cd00 == (int *)0x0) {
      FUN_1022bea0(0);
      if (DAT_1039cd00 == (int *)0x0) {
        DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
        DAT_1039cd00 = DAT_1039ccf0;
      }
      FUN_1022bee0();
    }
    piVar8 = DAT_1039cd00;
    iVar5 = *(int *)(param_4 + 4);
    local_18 = (int *)((int)DAT_1039cd00 * 4);
    if (DAT_1039cd00 < *(int **)(iVar5 + 0xc)) {
      piVar10 = *(int **)((int)local_18 + *(int *)(iVar5 + 8));
      if (piVar10 == (int *)0x0) goto LAB_102389af;
    }
    else {
      piVar10 = (int *)0x0;
LAB_102389af:
      if (*(char *)(iVar5 + 0x14) == '\0') {
LAB_102389c8:
        if (piVar10 != (int *)0x0) goto LAB_10238a15;
      }
      else {
        iVar5 = FUN_1022bde0();
        if (piVar8 < *(int **)(iVar5 + 0xc)) {
          piVar10 = *(int **)((int)local_18 + *(int *)(iVar5 + 8));
          goto LAB_102389c8;
        }
      }
      piVar10 = piVar2;
      if (piVar2 == (int *)0x0) {
        iVar5 = FUN_10238ad0(&local_14,param_4);
        piVar10 = local_14;
        if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_1000da81();
        }
        local_8 = CONCAT31(local_8._1_3_,0x2f);
        FUN_1022b910(local_14);
        pcVar1 = *(code **)(*piVar10 + 4);
        (*(code *)PTR_guard_check_icall_1035d810)();
        (*pcVar1)();
        DAT_103a3320 = piVar10;
      }
    }
LAB_10238a15:
    local_8 = 0xffffffff;
    FUN_1022bee0();
  }
  FUN_1022dd70(param_3,piVar10,piVar12);
LAB_10238a31:
  *unaff_FS_OFFSET = local_10;
  return;
}

