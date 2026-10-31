/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10251000 */

void FUN_10251000(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  undefined8 uVar11;
  int *piVar12;
  int *local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028a302;
  local_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  bVar3 = FUN_1001c350(0,0,uVar4);
  if ((param_2 & (1 << (bVar3 & 0x1f)) >> 1) != 0) {
    if (param_4 == 0) {
      if (DAT_1039c7f0 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_1039c7f0 == (int *)0x0) {
          DAT_1039c7f0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_1039ccf0 = DAT_1039c7f0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_1039c7f0;
      piVar5 = (int *)FUN_10228350(0x10);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5[1] = 0;
        *piVar5 = (int)std::collate<char>::vftable;
        uVar11 = FUN_1022ca50();
        *(undefined8 *)(piVar5 + 2) = uVar11;
      }
    }
    else {
      local_1c = DAT_1039c7f0;
      if (DAT_1039c7f0 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_1039c7f0 == (int *)0x0) {
          DAT_1039c7f0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_1039ccf0 = DAT_1039c7f0;
        }
        FUN_1022bee0();
      }
      local_1c = DAT_1039c7f0;
      FUN_1022bea0(0);
      piVar12 = DAT_1039c7f4;
      local_8 = 0;
      local_18 = DAT_1039c7f4;
      if (DAT_1039c7f0 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_1039c7f0 == (int *)0x0) {
          DAT_1039c7f0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_1039ccf0 = DAT_1039c7f0;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_1039c7f0;
      iVar7 = *(int *)(param_4 + 4);
      local_14 = (int *)((int)DAT_1039c7f0 * 4);
      if (DAT_1039c7f0 < *(int **)(iVar7 + 0xc)) {
        piVar5 = *(int **)((int)local_14 + *(int *)(iVar7 + 8));
        if (piVar5 == (int *)0x0) goto LAB_10251176;
      }
      else {
        piVar5 = (int *)0x0;
LAB_10251176:
        if (*(char *)(iVar7 + 0x14) == '\0') {
LAB_1025118f:
          if (piVar5 != (int *)0x0) goto LAB_102511da;
        }
        else {
          iVar7 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar7 + 0xc)) {
            piVar5 = *(int **)((int)local_14 + *(int *)(iVar7 + 8));
            goto LAB_1025118f;
          }
        }
        piVar5 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar7 = FUN_1001c350(&local_18,param_4);
          piVar5 = local_18;
          if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_1022b910(local_18);
          pcVar1 = *(code **)(*piVar5 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_1039c7f4 = piVar5;
        }
      }
LAB_102511da:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      piVar12 = local_1c;
    }
    FUN_1022dd70(param_3,piVar5,piVar12);
  }
  if ((param_2 & 0x20) != 0) {
    if (param_4 == 0) {
      if (DAT_103a3324 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3324 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3324 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a3324;
      piVar5 = (int *)FUN_10228350(8);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5[1] = 0;
        *piVar5 = (int)std::messages<char>::vftable;
      }
    }
    else {
      local_14 = DAT_103a3324;
      if (DAT_103a3324 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3324 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3324 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      local_14 = DAT_103a3324;
      FUN_1022bea0(0);
      piVar12 = DAT_103a3340;
      local_8 = 3;
      local_18 = DAT_103a3340;
      if (DAT_103a3324 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3324 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3324 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_103a3324;
      iVar7 = *(int *)(param_4 + 4);
      local_1c = (int *)((int)DAT_103a3324 * 4);
      if (DAT_103a3324 < *(int **)(iVar7 + 0xc)) {
        piVar5 = *(int **)((int)local_1c + *(int *)(iVar7 + 8));
        if (piVar5 == (int *)0x0) goto LAB_10251325;
      }
      else {
        piVar5 = (int *)0x0;
LAB_10251325:
        if (*(char *)(iVar7 + 0x14) == '\0') {
LAB_1025133e:
          if (piVar5 != (int *)0x0) goto LAB_10251389;
        }
        else {
          iVar7 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar7 + 0xc)) {
            piVar5 = *(int **)((int)local_1c + *(int *)(iVar7 + 8));
            goto LAB_1025133e;
          }
        }
        piVar5 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar7 = FUN_10251c40(&local_18,param_4);
          piVar5 = local_18;
          if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          local_8 = CONCAT31(local_8._1_3_,4);
          FUN_1022b910(local_18);
          pcVar1 = *(code **)(*piVar5 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_103a3340 = piVar5;
        }
      }
LAB_10251389:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      piVar12 = local_14;
    }
    FUN_1022dd70(param_3,piVar5,piVar12);
  }
  if ((param_2 & 4) != 0) {
    if (param_4 == 0) {
      if (DAT_103a3328 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3328 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3328 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a3328;
      puVar6 = (undefined4 *)FUN_10228350(8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6[1] = 0;
        *puVar6 = std::money_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::
                  vftable;
      }
      FUN_1022dd70(param_3,puVar6,piVar12);
      if (DAT_103a332c == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a332c == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a332c = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a332c;
      puVar6 = (undefined4 *)FUN_10228350(8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6[1] = 0;
        *puVar6 = std::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::
                  vftable;
      }
      FUN_1022dd70(param_3,puVar6,piVar12);
      if (DAT_103a3330 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3330 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3330 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a3330;
      puVar6 = (undefined4 *)FUN_10228350(0x58);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6[1] = 0;
        local_8 = 0x10;
        *puVar6 = std::_Mpunct<char>::vftable;
        *(undefined1 *)(puVar6 + 10) = 0;
        FUN_10254e50(param_1,0);
        *puVar6 = std::moneypunct<char,0>::vftable;
      }
      local_8 = 0xffffffff;
      FUN_1022dd70(param_3,puVar6,piVar12);
      if (DAT_103a3334 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3334 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3334 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a3334;
      puVar6 = (undefined4 *)FUN_10228350(0x58);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6[1] = 0;
        local_8 = 0x16;
        *puVar6 = std::_Mpunct<char>::vftable;
        *(undefined1 *)(puVar6 + 10) = 1;
        FUN_10254e50(param_1,0);
        *puVar6 = std::moneypunct<char,1>::vftable;
      }
      local_8 = 0xffffffff;
      FUN_1022dd70(param_3,puVar6,piVar12);
    }
    else {
      local_14 = DAT_103a3328;
      if (DAT_103a3328 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3328 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3328 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      local_14 = DAT_103a3328;
      FUN_1022bea0(0);
      piVar12 = DAT_103a3344;
      local_8 = 6;
      local_18 = DAT_103a3344;
      if (DAT_103a3328 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3328 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3328 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_103a3328;
      iVar7 = *(int *)(param_4 + 4);
      local_1c = (int *)((int)DAT_103a3328 * 4);
      if (DAT_103a3328 < *(int **)(iVar7 + 0xc)) {
        piVar5 = *(int **)((int)local_1c + *(int *)(iVar7 + 8));
        if (piVar5 == (int *)0x0) goto LAB_10251667;
      }
      else {
        piVar5 = (int *)0x0;
LAB_10251667:
        if (*(char *)(iVar7 + 0x14) == '\0') {
LAB_10251680:
          if (piVar5 != (int *)0x0) goto LAB_102516cb;
        }
        else {
          iVar7 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar7 + 0xc)) {
            piVar5 = *(int **)((int)local_1c + *(int *)(iVar7 + 8));
            goto LAB_10251680;
          }
        }
        piVar5 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar7 = FUN_10251d10(&local_18,param_4);
          piVar5 = local_18;
          if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          local_8 = CONCAT31(local_8._1_3_,7);
          FUN_1022b910(local_18);
          pcVar1 = *(code **)(*piVar5 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_103a3344 = piVar5;
        }
      }
LAB_102516cb:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      FUN_1022dd70(param_3,piVar5,local_14);
      local_14 = DAT_103a332c;
      if (DAT_103a332c == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a332c == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a332c = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      local_14 = DAT_103a332c;
      FUN_1022bea0(0);
      piVar12 = DAT_103a3348;
      local_8 = 9;
      local_18 = DAT_103a3348;
      if (DAT_103a332c == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a332c == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a332c = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_103a332c;
      iVar7 = *(int *)(param_4 + 4);
      local_1c = (int *)((int)DAT_103a332c * 4);
      if (DAT_103a332c < *(int **)(iVar7 + 0xc)) {
        piVar5 = *(int **)((int)local_1c + *(int *)(iVar7 + 8));
        if (piVar5 == (int *)0x0) goto LAB_1025179f;
      }
      else {
        piVar5 = (int *)0x0;
LAB_1025179f:
        if (*(char *)(iVar7 + 0x14) == '\0') {
LAB_102517b8:
          if (piVar5 != (int *)0x0) goto LAB_10251803;
        }
        else {
          iVar7 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar7 + 0xc)) {
            piVar5 = *(int **)((int)local_1c + *(int *)(iVar7 + 8));
            goto LAB_102517b8;
          }
        }
        piVar5 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar7 = FUN_10253c10(&local_18,param_4);
          piVar5 = local_18;
          if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          local_8 = CONCAT31(local_8._1_3_,10);
          FUN_1022b910(local_18);
          pcVar1 = *(code **)(*piVar5 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_103a3348 = piVar5;
        }
      }
LAB_10251803:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      FUN_1022dd70(param_3,piVar5,local_14);
      if (DAT_103a3330 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3330 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3330 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a3330;
      uVar8 = FUN_102552e0(param_4);
      FUN_1022dd70(param_3,uVar8,piVar12);
      if (DAT_103a3334 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3334 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3334 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a3334;
      uVar8 = FUN_102554e0(param_4);
      FUN_1022dd70(param_3,uVar8,piVar12);
    }
  }
  if ((param_2 & 0x10) == 0) goto LAB_10251c0a;
  if (param_4 == 0) {
    if (DAT_103a3338 == (int *)0x0) {
      FUN_1022bea0(0);
      if (DAT_103a3338 == (int *)0x0) {
        DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
        DAT_103a3338 = DAT_1039ccf0;
      }
      FUN_1022bee0();
    }
    piVar12 = DAT_103a3338;
    iVar7 = FUN_10228350(0x44);
    local_8 = 0x1a;
    if (iVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_10255610(param_1,0);
    }
    local_8 = 0xffffffff;
    FUN_1022dd70(param_3,uVar8,piVar12);
    if (DAT_103a333c == (int *)0x0) {
      FUN_1022bea0(0);
      if (DAT_103a333c == (int *)0x0) {
        DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
        DAT_103a333c = DAT_1039ccf0;
      }
      FUN_1022bee0();
    }
    piVar12 = DAT_103a333c;
    iVar7 = FUN_10228350(0xc);
    if (iVar7 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_10256de0(param_1,0);
    }
  }
  else {
    if (DAT_103a3338 == (int *)0x0) {
      FUN_1022bea0(0);
      if (DAT_103a3338 == (int *)0x0) {
        DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
        DAT_103a3338 = DAT_1039ccf0;
      }
      FUN_1022bee0();
    }
    piVar12 = DAT_103a3338;
    FUN_1022bea0(0);
    piVar2 = DAT_103a3354;
    local_8 = 0x1b;
    local_18 = DAT_103a3354;
    if (DAT_103a3338 == (int *)0x0) {
      FUN_1022bea0(0);
      if (DAT_103a3338 == (int *)0x0) {
        DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
        DAT_103a3338 = DAT_1039ccf0;
      }
      FUN_1022bee0();
    }
    piVar5 = DAT_103a3338;
    local_1c = (int *)((int)DAT_103a3338 * 4);
    iVar7 = *(int *)(param_4 + 4);
    if (DAT_103a3338 < *(int **)(iVar7 + 0xc)) {
      piVar10 = *(int **)((int)local_1c + *(int *)(iVar7 + 8));
      if (piVar10 == (int *)0x0) goto LAB_10251a58;
    }
    else {
      piVar10 = (int *)0x0;
LAB_10251a58:
      if (*(char *)(iVar7 + 0x14) == '\0') {
LAB_10251a71:
        if (piVar10 != (int *)0x0) goto LAB_10251abe;
      }
      else {
        iVar7 = FUN_1022bde0();
        if (piVar5 < *(int **)(iVar7 + 0xc)) {
          piVar10 = *(int **)((int)local_1c + *(int *)(iVar7 + 8));
          goto LAB_10251a71;
        }
      }
      piVar10 = piVar2;
      if (piVar2 == (int *)0x0) {
        iVar7 = FUN_10255690(&local_18,param_4);
        piVar10 = local_18;
        if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_1000da81();
        }
        local_8 = CONCAT31(local_8._1_3_,0x1c);
        FUN_1022b910(local_18);
        pcVar1 = *(code **)(*piVar10 + 4);
        (*(code *)PTR_guard_check_icall_1035d810)();
        (*pcVar1)();
        DAT_103a3354 = piVar10;
      }
    }
LAB_10251abe:
    local_8 = 0xffffffff;
    FUN_1022bee0();
    FUN_1022dd70(param_3,piVar10,piVar12);
    local_18 = DAT_103a333c;
    if (DAT_103a333c == (int *)0x0) {
      FUN_1022bea0(0);
      if (DAT_103a333c == (int *)0x0) {
        DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
        DAT_103a333c = DAT_1039ccf0;
      }
      FUN_1022bee0();
    }
    local_18 = DAT_103a333c;
    FUN_1022bea0(0);
    piVar12 = DAT_103a3358;
    local_8 = 0x1e;
    local_1c = DAT_103a3358;
    if (DAT_103a333c == (int *)0x0) {
      FUN_1022bea0(0);
      if (DAT_103a333c == (int *)0x0) {
        DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
        DAT_103a333c = DAT_1039ccf0;
      }
      FUN_1022bee0();
    }
    piVar2 = DAT_103a333c;
    iVar7 = (int)DAT_103a333c * 4;
    iVar9 = *(int *)(param_4 + 4);
    if (DAT_103a333c < *(int **)(iVar9 + 0xc)) {
      piVar5 = *(int **)(iVar7 + *(int *)(iVar9 + 8));
      if (piVar5 == (int *)0x0) goto LAB_10251b8d;
    }
    else {
      piVar5 = (int *)0x0;
LAB_10251b8d:
      if (*(char *)(iVar9 + 0x14) == '\0') {
LAB_10251ba3:
        if (piVar5 != (int *)0x0) goto LAB_10251bec;
      }
      else {
        iVar9 = FUN_1022bde0();
        if (piVar2 < *(int **)(iVar9 + 0xc)) {
          piVar5 = *(int **)(iVar7 + *(int *)(iVar9 + 8));
          goto LAB_10251ba3;
        }
      }
      piVar5 = piVar12;
      if (piVar12 == (int *)0x0) {
        iVar7 = FUN_10256e40(&local_1c,param_4);
        piVar5 = local_1c;
        if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_1000da81();
        }
        local_8 = CONCAT31(local_8._1_3_,0x1f);
        FUN_1022b910(local_1c);
        pcVar1 = *(code **)(*piVar5 + 4);
        (*(code *)PTR_guard_check_icall_1035d810)();
        (*pcVar1)();
        DAT_103a3358 = piVar5;
      }
    }
LAB_10251bec:
    local_8 = 0xffffffff;
    FUN_1022bee0();
    piVar12 = local_18;
  }
  FUN_1022dd70(param_3,piVar5,piVar12);
LAB_10251c0a:
  *unaff_FS_OFFSET = local_10;
  return;
}

