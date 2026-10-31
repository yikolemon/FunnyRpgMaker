/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004165ec */

undefined4 * __cdecl
FUN_004165ec(undefined4 *param_1,undefined4 *param_2,double param_3,int *param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  size_t sVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  char *pcVar10;
  uint uVar11;
  size_t sVar12;
  char *pcVar13;
  int *******pppppppiVar14;
  int *******pppppppiVar15;
  int *******pppppppiVar16;
  bool bVar17;
  char local_661;
  char *local_65c;
  undefined1 local_655;
  char *local_654;
  size_t local_650;
  int local_64c;
  int local_648;
  undefined1 local_642;
  undefined1 local_641;
  undefined4 local_640;
  char *local_63c;
  int local_638;
  char *local_634;
  undefined4 local_630;
  uint local_62c;
  char *local_628;
  ulonglong local_624;
  size_t local_61c;
  int local_618;
  char *local_614;
  char *local_610;
  byte local_60c [4];
  int *local_608;
  int local_604;
  int ******local_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined8 local_5f0;
  int ******local_5e4;
  undefined1 *puStack_5e0;
  byte *pbStack_5dc;
  int *piStack_5d8;
  int *local_5d4;
  int *piStack_5d0;
  char **local_5cc;
  char **local_5c8;
  int ******local_5c4;
  int *local_5c0;
  char **local_5bc;
  ulonglong *local_5b8;
  undefined1 *local_5b4;
  char **local_5b0;
  undefined4 *local_5ac;
  double local_5a8;
  double local_5a0;
  undefined4 local_591;
  char acStack_58d [1381];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = &stack0xfffff980;
  local_604 = param_5;
  local_18 = 0xffffffff;
  local_1c = &LAB_004182e0;
  local_20 = ExceptionList;
  local_62c = 2;
  if (*(byte *)((int)param_4 + 10) != 0) {
    local_62c = (uint)*(byte *)((int)param_4 + 10);
  }
  local_641 = (undefined1)local_62c;
  local_661 = 'p';
  sVar12 = param_4[1];
  local_64c = 4;
  switch((char)param_4[2]) {
  case 'A':
    bVar3 = true;
    goto LAB_004166f7;
  case 'B':
  case 'C':
  case 'D':
switchD_00416670_caseD_1:
    local_64c = 3;
    local_661 = 'e';
    bVar17 = true;
    break;
  case 'E':
    bVar3 = true;
switchD_00416670_caseD_4:
    if (sVar12 == 0xffffffff) {
      sVar12 = 6;
    }
    local_64c = 1;
    goto LAB_004166f3;
  case 'F':
    bVar3 = true;
switchD_00416670_caseD_5:
    if (sVar12 == 0xffffffff) {
      sVar12 = 6;
    }
    local_64c = 2;
LAB_004166f3:
    local_661 = 'e';
LAB_004166f7:
    bVar17 = false;
    goto LAB_00416717;
  case 'G':
    bVar3 = true;
switchD_00416670_caseD_6:
    sVar5 = sVar12 + (sVar12 == 0);
    bVar17 = sVar12 != 0xffffffff;
    sVar12 = 6;
    if (bVar17) {
      sVar12 = sVar5;
    }
    local_64c = 3;
    local_661 = 'e';
    bVar17 = false;
    goto LAB_00416717;
  default:
    bVar3 = false;
    switch((char)param_4[2]) {
    case 'a':
      bVar17 = false;
      break;
    default:
      goto switchD_00416670_caseD_1;
    case 'e':
      goto switchD_00416670_caseD_4;
    case 'f':
      goto switchD_00416670_caseD_5;
    case 'g':
      goto switchD_00416670_caseD_6;
    }
  }
  bVar3 = false;
LAB_00416717:
  local_650 = 0x432;
  if (0x432 < (int)sVar12) {
    local_650 = sVar12;
  }
  local_61c = 0x432;
  if ((int)sVar12 < 0x432) {
    local_61c = sVar12;
  }
  uVar11 = (uint)((ulonglong)param_3 >> 0x20);
  ExceptionList = &local_20;
  uVar6 = FUN_0048f660(SUB84(param_3,0),uVar11);
  local_642 = uVar6 != 0;
  if (NAN(param_3)) {
    iVar2 = -(uint)(uVar6 == 0);
    acStack_58d[iVar2 + -1] = 'n';
    (acStack_58d + iVar2 + -3)[0] = 'n';
    (acStack_58d + iVar2 + -3)[1] = 'a';
    local_614 = acStack_58d + iVar2;
    local_624 = CONCAT44(local_624._4_4_,local_614);
  }
  else if (sVar12 == 0xffffffff) {
    if (bVar17) {
      local_624 = FUN_0040e2d4(&local_591,(uint *)&local_28,(ulonglong)param_3);
      local_614 = (char *)local_624;
    }
    else {
      local_624 = FUN_00416dc8(&local_591,(uint *)&local_28,(ulonglong)param_3,local_64c);
      local_614 = (char *)local_624;
    }
  }
  else {
    local_624 = FUN_004170c5(&local_591,(uint *)&local_28,(ulonglong)param_3,local_64c,local_61c);
    local_614 = (char *)local_624;
  }
  local_610 = (char *)&local_591;
  local_638 = (int)local_614 - (int)local_610;
  if (uVar6 == 0) {
    if ((char)local_62c != '\x02') {
      local_638 = local_638 + 1;
    }
  }
  else {
    local_610 = (char *)((int)&local_591 + 1);
  }
  pcVar10 = local_610;
  if (bVar3) {
    for (; pcVar10 != local_614; pcVar10 = pcVar10 + 1) {
      if ((byte)(*pcVar10 + 0x9fU) < 0x1a) {
        *pcVar10 = *pcVar10 + -0x20;
      }
    }
    local_661 = local_661 + -0x20;
  }
  local_655 = 0;
  local_640 = 0;
  local_618 = 0;
  local_600 = (int ******)0x0;
  uStack_5fc = 0;
  uStack_5f8 = 0;
  uStack_5f4 = 0;
  local_5f0 = 0xf00000000;
  local_18 = 0;
  local_5a0 = param_3;
  local_63c = local_614;
  local_654 = local_610;
  local_628 = local_614;
  if (0x7fefffff < (uVar11 & 0x7fffffff)) {
    local_5a8 = param_3;
    piStack_5d8 = &local_638;
    local_60c[0] = *(char *)((int)param_4 + 9) == '\0' & *(byte *)((int)param_4 + 0xd) &
                   (uVar11 & 0x7fffffff) < 0x7ff00000;
    local_5e4 = (int ******)&local_641;
    puStack_5e0 = &local_642;
    pbStack_5dc = local_60c;
    local_5d4 = param_4;
    piStack_5d0 = &param_5;
    local_5cc = &local_610;
    local_5c8 = &local_614;
    local_5c4 = (int ******)&local_600;
    local_5c0 = &local_618;
    local_5bc = &local_628;
    local_5b8 = &local_624;
    local_5b4 = &local_655;
    local_5b0 = &local_63c;
    local_5ac = &local_640;
    local_18 = 0;
    local_648 = local_638;
    if (local_60c[0] == 0) {
      FUN_00415271(param_1,param_2,local_638,param_4,'\x02',&local_5e4);
    }
    else {
      FUN_00414fb4(&local_5e4,param_1,param_2);
    }
    local_18 = 0xffffffff;
    FUN_0040230a((int *)&local_600);
    ExceptionList = local_20;
    return param_1;
  }
  local_650 = local_650 - 0x432;
  bVar1 = *(byte *)(param_4 + 3);
  local_62c = CONCAT31(local_62c._1_3_,bVar1);
  local_634 = local_614;
  if (((*(byte *)((int)param_4 + 0xb) | bVar1) & 1) == 0) {
    local_630 = 0;
  }
  else {
    pcVar7 = local_614;
    pcVar10 = local_614;
    pcVar13 = local_610;
    local_65c = local_614;
    if (local_610 < local_614) {
      do {
        pcVar10 = pcVar13;
        pcVar4 = pcVar13;
        if ((*pcVar13 != '.') && (pcVar10 = pcVar7, pcVar4 = local_65c, *pcVar13 == local_661)) {
          local_634 = pcVar13;
          local_63c = pcVar13;
        }
        local_65c = pcVar4;
        pcVar13 = pcVar13 + 1;
        pcVar7 = pcVar10;
      } while (pcVar13 != local_614);
      local_628 = local_65c;
    }
    pcVar7 = pcVar10;
    if (local_634 < pcVar10) {
      pcVar7 = local_634;
    }
    local_630 = 0;
    if ((*(byte *)((int)param_4 + 0xb) != 0) && (pcVar10 == local_614)) {
      local_638 = local_638 + 1;
      local_655 = 1;
      local_630 = CONCAT31((int3)((uint)local_638 >> 8),1);
    }
    local_614 = pcVar7;
    if (bVar1 == 1) {
      local_648 = local_638;
      if (local_604 == 0) {
        local_608 = FUN_0047f650('\x01');
      }
      else {
        local_608 = *(int **)(local_604 + 4);
        (**(code **)(*local_608 + 4))();
      }
      local_18 = 1;
      piVar8 = FUN_0040a572(local_60c);
      (**(code **)(*piVar8 + 0x14))();
      local_18 = 2;
      FUN_00404c20((int *)&local_600);
      local_5f0 = CONCAT44(piStack_5d0,local_5d4);
      local_600 = local_5e4;
      uStack_5fc = puStack_5e0;
      uStack_5f8 = pbStack_5dc;
      uStack_5f4 = piStack_5d8;
      local_5d4 = (int *)0x0;
      piStack_5d0 = (int *)0xf;
      local_5e4 = (int ******)((uint)local_5e4 & 0xffffff00);
      local_18 = 0xffffffff;
      FUN_0040230a((int *)&local_5e4);
      if ((local_608 != (int *)0x0) &&
         (puVar9 = (undefined4 *)(**(code **)(*local_608 + 8))(), puVar9 != (undefined4 *)0x0)) {
        (**(code **)*puVar9)(1);
      }
      pppppppiVar14 = &local_600;
      if (0xf < local_5f0._4_4_) {
        pppppppiVar14 = (int *******)local_600;
      }
      local_618 = 0;
      if ((int)local_5f0 != 0) {
        uVar6 = (int)pcVar7 - (int)local_654;
        uVar11 = (uint)*(char *)pppppppiVar14;
        if (uVar11 < uVar6) {
          local_618 = 0;
          pppppppiVar15 = pppppppiVar14;
          do {
            uVar6 = uVar6 - uVar11;
            local_618 = local_618 + 1;
            pppppppiVar16 = (int *******)((int)pppppppiVar15 + 1);
            if ((int *******)((int)pppppppiVar15 + 1) ==
                (int *******)((int)local_5f0 + (int)pppppppiVar14)) {
              pppppppiVar16 = pppppppiVar15;
            }
            uVar11 = (uint)*(char *)pppppppiVar16;
            pppppppiVar15 = pppppppiVar16;
          } while (uVar11 < uVar6);
        }
      }
      local_648 = local_648 + local_618;
                    /* WARNING: Could not recover jumptable at 0x00416ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      local_638 = local_648;
      puVar9 = (undefined4 *)(**(code **)(&UNK_00416db8 + (local_64c + -1) * 4))();
      return puVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004169a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  local_648 = local_638;
  puVar9 = (undefined4 *)(**(code **)(&UNK_00416db8 + (local_64c + -1) * 4))();
  return puVar9;
}

