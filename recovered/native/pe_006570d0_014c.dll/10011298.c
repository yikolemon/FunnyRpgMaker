/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10011298 */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_10011298(undefined4 param_1,undefined4 param_2,double param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  double dVar3;
  char *******pppppppcVar4;
  uint uVar5;
  char *******pppppppcVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined3 uVar11;
  uint uVar12;
  char *******pppppppcVar13;
  char *******pppppppcVar14;
  bool bVar15;
  undefined8 local_680;
  undefined8 local_678;
  int local_670;
  char *******local_66c;
  char local_661;
  char *******local_660;
  char *******local_65c;
  undefined1 local_655;
  char *******local_654;
  char *******local_650;
  int local_64c;
  int local_648;
  undefined1 local_642;
  undefined1 local_641;
  undefined4 local_640;
  char *******local_63c;
  int local_638;
  char *******local_634;
  undefined4 local_630;
  uint local_62c;
  char *******local_628;
  undefined8 local_624;
  char *******local_61c;
  int local_618;
  char *******local_614;
  char *******local_610;
  byte local_60c [4];
  int *local_608;
  int local_604;
  char *******local_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined8 local_5f0;
  char *******local_5e4;
  undefined1 *puStack_5e0;
  byte *pbStack_5dc;
  int *piStack_5d8;
  int local_5d4;
  undefined4 *puStack_5d0;
  char *******local_5cc;
  char *******local_5c8;
  char *******local_5c4;
  int *local_5c0;
  char *******local_5bc;
  undefined8 *local_5b8;
  undefined1 *local_5b4;
  char *******local_5b0;
  undefined4 *local_5ac;
  double local_5a8;
  undefined8 local_5a0;
  undefined1 local_591 [3];
  undefined1 auStack_58e [1382];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_680;
  local_604 = param_5;
  local_18 = 0xffffffff;
  local_1c = &LAB_10012b20;
  local_20 = ExceptionList;
  local_62c = 2;
  if (*(byte *)(param_4 + 10) != 0) {
    local_62c = (uint)*(byte *)(param_4 + 10);
  }
  local_641 = (undefined1)local_62c;
  uVar5 = (uint)*(byte *)(param_4 + 8);
  local_661 = 'p';
  pppppppcVar13 = *(char ********)(param_4 + 4);
  local_64c = 4;
  uVar11 = (undefined3)(uVar5 - 0x41 >> 8);
  switch(uVar5 - 0x41) {
  case 0:
    local_65c = (char *******)0x1;
    goto LAB_100113a3;
  case 1:
  case 2:
  case 3:
switchD_1001131c_caseD_1:
    local_64c = 3;
    local_661 = 'e';
    local_660 = (char *******)CONCAT31((int3)(uVar5 >> 8),1);
    break;
  case 4:
    local_65c = (char *******)CONCAT31(uVar11,1);
switchD_1001131c_caseD_4:
    if (pppppppcVar13 == (char *******)0xffffffff) {
      pppppppcVar13 = (char *******)0x6;
    }
    local_64c = 1;
    goto LAB_1001139f;
  case 5:
    local_65c = (char *******)CONCAT31(uVar11,1);
switchD_1001131c_caseD_5:
    if (pppppppcVar13 == (char *******)0xffffffff) {
      pppppppcVar13 = (char *******)0x6;
    }
    local_64c = 2;
LAB_1001139f:
    local_661 = 'e';
LAB_100113a3:
    local_660 = (char *******)0x0;
    goto LAB_100113c3;
  case 6:
    local_65c = (char *******)CONCAT31(uVar11,1);
switchD_1001131c_caseD_6:
    pppppppcVar6 = (char *******)((int)pppppppcVar13 + (uint)(pppppppcVar13 == (char *******)0x0));
    bVar15 = pppppppcVar13 != (char *******)0xffffffff;
    pppppppcVar13 = (char *******)0x6;
    if (bVar15) {
      pppppppcVar13 = pppppppcVar6;
    }
    local_64c = 3;
    local_661 = 'e';
    local_660 = (char *******)0x0;
    goto LAB_100113c3;
  default:
    uVar5 = uVar5 - 0x61;
    local_65c = (char *******)0x0;
    switch(uVar5) {
    case 0:
      local_660 = (char *******)0x0;
      break;
    default:
      goto switchD_1001131c_caseD_1;
    case 4:
      goto switchD_1001131c_caseD_4;
    case 5:
      goto switchD_1001131c_caseD_5;
    case 6:
      goto switchD_1001131c_caseD_6;
    }
  }
  local_65c = (char *******)0x0;
LAB_100113c3:
  local_650 = (char *******)0x432;
  if (0x432 < (int)pppppppcVar13) {
    local_650 = pppppppcVar13;
  }
  local_61c = (char *******)0x432;
  if ((int)pppppppcVar13 < 0x432) {
    local_61c = pppppppcVar13;
  }
  local_680 = param_3;
  ExceptionList = &local_20;
  iVar7 = FUN_10268ff0();
  local_642 = iVar7 != 0;
  if (NAN(param_3)) {
    iVar2 = -(uint)(iVar7 == 0);
    auStack_58e[iVar2] = 0x6e;
    *(undefined2 *)(local_591 + iVar2 + 1) = 0x616e;
    local_624 = CONCAT44(local_624._4_4_,auStack_58e + iVar2 + 1);
  }
  else if (pppppppcVar13 == (char *******)0xffffffff) {
    if ((char)local_660 == '\0') {
      local_670 = local_64c;
      local_678 = param_3;
      local_680 = (double)CONCAT44(&local_28,local_591);
      local_66c = (char *******)0x0;
      local_624 = FUN_10011a74();
    }
    else {
      local_66c = (char *******)0x0;
      local_670 = 0;
      local_678 = param_3;
      local_680 = (double)CONCAT44(&local_28,local_591);
      local_624 = FUN_10008a2f();
    }
  }
  else {
    local_66c = local_61c;
    local_670 = local_64c;
    local_678 = param_3;
    local_680 = (double)CONCAT44(&local_28,local_591);
    local_624 = FUN_10011d71();
  }
  local_610 = (char *******)local_591;
  local_638 = (int)(char *******)local_624 - (int)local_610;
  if (iVar7 == 0) {
    if ((char)local_62c != '\x02') {
      local_638 = local_638 + 1;
    }
  }
  else {
    local_610 = (char *******)(local_591 + 1);
  }
  pppppppcVar13 = local_610;
  if ((char)local_65c != '\0') {
    for (; pppppppcVar13 != (char *******)local_624;
        pppppppcVar13 = (char *******)((int)pppppppcVar13 + 1)) {
      if ((byte)(*(char *)pppppppcVar13 + 0x9fU) < 0x1a) {
        *(char *)pppppppcVar13 = *(char *)pppppppcVar13 + -0x20;
      }
    }
    local_661 = local_661 + -0x20;
  }
  local_655 = 0;
  local_640 = 0;
  local_618 = 0;
  local_600 = (char *******)0x0;
  uStack_5fc = 0;
  uStack_5f8 = 0;
  uStack_5f4 = 0;
  local_5f0 = 0xf00000000;
  local_18 = 0;
  local_5a0 = param_3;
  dVar3 = local_5a0;
  local_5a0._4_4_ = (uint)((ulonglong)param_3 >> 0x20);
  local_63c = (char *******)local_624;
  local_660 = (char *******)local_624;
  local_654 = local_610;
  local_628 = (char *******)local_624;
  local_614 = (char *******)local_624;
  local_5a0 = dVar3;
  if ((local_5a0._4_4_ & 0x7fffffff) < 0x7ff00000) {
    local_650 = (char *******)((int)local_650 + -0x432);
    bVar1 = *(byte *)(param_4 + 0xc);
    local_62c = CONCAT31(local_62c._1_3_,bVar1);
    local_634 = (char *******)local_624;
    if (((*(byte *)(param_4 + 0xb) | bVar1) & 1) == 0) {
      local_630 = 0;
    }
    else {
      pppppppcVar6 = (char *******)local_624;
      pppppppcVar13 = (char *******)local_624;
      pppppppcVar14 = local_610;
      local_65c = (char *******)local_624;
      if (local_610 < (char *******)local_624) {
        do {
          pppppppcVar13 = pppppppcVar14;
          pppppppcVar4 = pppppppcVar14;
          if ((*(char *)pppppppcVar14 != '.') &&
             (pppppppcVar13 = pppppppcVar6, pppppppcVar4 = local_65c,
             *(char *)pppppppcVar14 == local_661)) {
            local_634 = pppppppcVar14;
            local_63c = pppppppcVar14;
          }
          local_65c = pppppppcVar4;
          pppppppcVar14 = (char *******)((int)pppppppcVar14 + 1);
          pppppppcVar6 = pppppppcVar13;
        } while (pppppppcVar14 != (char *******)local_624);
        local_628 = local_65c;
      }
      local_65c = pppppppcVar13;
      if (local_634 < pppppppcVar13) {
        local_65c = local_634;
      }
      local_630 = 0;
      if ((*(byte *)(param_4 + 0xb) != 0) && (pppppppcVar13 == (char *******)local_624)) {
        local_638 = local_638 + 1;
        local_655 = 1;
        local_630 = CONCAT31((int3)((uint)local_638 >> 8),1);
      }
      local_614 = local_65c;
      if (bVar1 == 1) {
        local_648 = local_638;
        if (local_604 == 0) {
          local_680 = (double)CONCAT44(local_680._4_4_,1);
          local_608 = (int *)FUN_1022bce0();
        }
        else {
          local_608 = *(int **)(local_604 + 4);
          (**(code **)(*local_608 + 4))();
        }
        local_18 = 1;
        local_680._0_4_ = local_60c;
        piVar8 = (int *)FUN_1000c417();
        local_680 = (double)CONCAT44(local_680._4_4_,&local_5e4);
        (**(code **)(*piVar8 + 0x14))();
        local_18 = 2;
        FUN_10004e60();
        local_5f0 = CONCAT44(puStack_5d0,local_5d4);
        local_600 = local_5e4;
        uStack_5fc = puStack_5e0;
        uStack_5f8 = pbStack_5dc;
        uStack_5f4 = piStack_5d8;
        local_5d4 = 0;
        puStack_5d0 = (undefined4 *)0xf;
        local_5e4 = (char *******)((uint)local_5e4 & 0xffffff00);
        local_18 = 0xffffffff;
        FUN_10001fee();
        if (local_608 != (int *)0x0) {
          puVar9 = (undefined4 *)(**(code **)(*local_608 + 8))();
          if (puVar9 != (undefined4 *)0x0) {
            (**(code **)*puVar9)(1);
          }
        }
        pppppppcVar13 = (char *******)&local_600;
        if (0xf < local_5f0._4_4_) {
          pppppppcVar13 = local_600;
        }
        local_618 = 0;
        if ((char *******)local_5f0 != (char *******)0x0) {
          uVar5 = (int)local_65c - (int)local_654;
          uVar12 = (uint)*(char *)pppppppcVar13;
          local_65c = (char *******)local_5f0;
          if (uVar12 < uVar5) {
            local_65c = (char *******)((int)(char *******)local_5f0 + (int)pppppppcVar13);
            local_618 = 0;
            do {
              uVar5 = uVar5 - uVar12;
              local_618 = local_618 + 1;
              pppppppcVar6 = (char *******)((int)pppppppcVar13 + 1);
              if ((char *******)((int)pppppppcVar13 + 1) == local_65c) {
                pppppppcVar6 = pppppppcVar13;
              }
              uVar12 = (uint)*(char *)pppppppcVar6;
              pppppppcVar13 = pppppppcVar6;
            } while (uVar12 < uVar5);
          }
        }
        local_648 = local_648 + local_618;
                    /* WARNING: Could not recover jumptable at 0x1001176c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        local_638 = local_648;
        uVar10 = (**(code **)(&UNK_10011a64 + (local_64c + -1) * 4))();
        return uVar10;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x1001164c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    local_648 = local_638;
    uVar10 = (**(code **)(&UNK_10011a64 + (local_64c + -1) * 4))();
    return uVar10;
  }
  local_5a8 = param_3;
  piStack_5d8 = &local_638;
  local_60c[0] = *(char *)(param_4 + 9) == '\0' & *(byte *)(param_4 + 0xd) &
                 (local_5a0._4_4_ & 0x7fffffff) < 0x7ff00000;
  local_5e4 = (char *******)&local_641;
  puStack_5e0 = &local_642;
  pbStack_5dc = local_60c;
  local_5d4 = param_4;
  puStack_5d0 = &param_5;
  local_5cc = (char *******)&local_610;
  local_5c8 = (char *******)&local_614;
  local_5c4 = (char *******)&local_600;
  local_5c0 = &local_618;
  local_5bc = (char *******)&local_628;
  local_5b8 = &local_624;
  local_5b4 = &local_655;
  local_5b0 = (char *******)&local_63c;
  local_5ac = &local_640;
  local_18 = 0;
  local_648 = local_638;
  if (local_60c[0] == 0) {
    local_66c = (char *******)&local_5e4;
    local_678 = (double)CONCAT44(param_4,local_638);
    local_680 = (double)CONCAT44(param_2,param_1);
    local_670 = 2;
    FUN_1000ff49();
  }
  else {
    local_680 = (double)CONCAT44(param_2,param_1);
    FUN_1000fc94();
  }
  local_18 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_20;
  return param_1;
}

