/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10236450 */

void FUN_10236450(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

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
  puStack_c = &DAT_10289c21;
  local_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  if ((param_2 & 2) != 0) {
    if (param_4 == 0) {
      if (DAT_1039cd04 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_1039cd04 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_1039cd04 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_1039cd04;
      iVar5 = FUN_10228350(0x44);
      if (iVar5 == 0) {
        FUN_1022dd70(param_3,0,piVar12);
      }
      else {
        uVar6 = FUN_100924b0(param_1,0);
        FUN_1022dd70(param_3,uVar6,piVar12);
      }
    }
    else {
      if (DAT_1039cd04 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_1039cd04 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_1039cd04 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_1039cd04;
      uVar6 = FUN_10091ec2(param_4,uVar4);
      FUN_1022dd70(param_3,uVar6,piVar12);
    }
  }
  if ((param_2 & 8) != 0) {
    if (param_4 == 0) {
      if (DAT_103a3288 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3288 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3288 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a3288;
      puVar7 = (undefined4 *)FUN_10228350(8);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7[1] = 0;
        *puVar7 = std::
                  num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::
                  vftable;
      }
      FUN_1022dd70(param_3,puVar7,piVar12);
      if (DAT_1039cbb4 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_1039cbb4 == (int *)0x0) {
          DAT_1039cbb4 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_1039ccf0 = DAT_1039cbb4;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_1039cbb4;
      puVar7 = (undefined4 *)FUN_10228350(8);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7[1] = 0;
        *puVar7 = std::
                  num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::
                  vftable;
      }
      FUN_1022dd70(param_3,puVar7,piVar12);
      if (DAT_1039c730 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_1039c730 == (int *)0x0) {
          DAT_1039c730 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_1039ccf0 = DAT_1039c730;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_1039c730;
      iVar5 = FUN_10228350(0x18);
      local_8 = 10;
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_1023b190(param_1,0,0);
      }
      local_8 = 0xffffffff;
      FUN_1022dd70(param_3,uVar6,piVar12);
    }
    else {
      local_18 = DAT_103a3288;
      if (DAT_103a3288 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3288 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3288 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      local_18 = DAT_103a3288;
      FUN_1022bea0(0);
      piVar12 = DAT_103a32d0;
      local_8 = 2;
      local_14 = DAT_103a32d0;
      if (DAT_103a3288 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3288 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3288 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_103a3288;
      iVar9 = *(int *)(param_4 + 4);
      iVar5 = (int)DAT_103a3288 * 4;
      if (DAT_103a3288 < *(int **)(iVar9 + 0xc)) {
        piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
        if (piVar8 == (int *)0x0) goto LAB_10236752;
      }
      else {
        piVar8 = (int *)0x0;
LAB_10236752:
        if (*(char *)(iVar9 + 0x14) == '\0') {
LAB_10236768:
          if (piVar8 != (int *)0x0) goto LAB_102367b5;
        }
        else {
          iVar9 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar9 + 0xc)) {
            piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
            goto LAB_10236768;
          }
        }
        piVar8 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar5 = FUN_10239a20(&local_14,param_4);
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
          DAT_103a32d0 = piVar8;
        }
      }
LAB_102367b5:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      FUN_1022dd70(param_3,piVar8,local_18);
      local_14 = DAT_1039cbb4;
      if (DAT_1039cbb4 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_1039cbb4 == (int *)0x0) {
          DAT_1039cbb4 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_1039ccf0 = DAT_1039cbb4;
        }
        FUN_1022bee0();
      }
      local_14 = DAT_1039cbb4;
      FUN_1022bea0(0);
      piVar12 = DAT_1039cc84;
      local_8 = 5;
      local_18 = DAT_1039cc84;
      if (DAT_1039cbb4 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_1039cbb4 == (int *)0x0) {
          DAT_1039cbb4 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_1039ccf0 = DAT_1039cbb4;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_1039cbb4;
      iVar5 = (int)DAT_1039cbb4 * 4;
      iVar9 = *(int *)(param_4 + 4);
      if (DAT_1039cbb4 < *(int **)(iVar9 + 0xc)) {
        piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
        if (piVar8 == (int *)0x0) goto LAB_10236886;
      }
      else {
        piVar8 = (int *)0x0;
LAB_10236886:
        if (*(char *)(iVar9 + 0x14) == '\0') {
LAB_1023689c:
          if (piVar8 != (int *)0x0) goto LAB_102368e9;
        }
        else {
          iVar9 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar9 + 0xc)) {
            piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
            goto LAB_1023689c;
          }
        }
        piVar8 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar5 = FUN_100a1614(&local_18,param_4);
          piVar8 = local_18;
          if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          local_8 = CONCAT31(local_8._1_3_,6);
          FUN_1022b910(local_18);
          pcVar1 = *(code **)(*piVar8 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_1039cc84 = piVar8;
        }
      }
LAB_102368e9:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      FUN_1022dd70(param_3,piVar8,local_14);
      if (DAT_1039c730 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_1039c730 == (int *)0x0) {
          DAT_1039c730 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_1039ccf0 = DAT_1039c730;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_1039c730;
      uVar6 = FUN_100470ba(param_4);
      FUN_1022dd70(param_3,uVar6,piVar12);
    }
  }
  bVar3 = FUN_10091fd4(0,0);
  if ((param_2 & (1 << (bVar3 & 0x1f)) >> 1) != 0) {
    if (param_4 == 0) {
      if (DAT_1039cbac == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_1039cbac == (int *)0x0) {
          DAT_1039cbac = (int *)((int)DAT_1039ccf0 + 1);
          DAT_1039ccf0 = DAT_1039cbac;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_1039cbac;
      piVar8 = (int *)FUN_10228350(0x10);
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8[1] = 0;
        *piVar8 = (int)std::collate<wchar_t>::vftable;
        uVar11 = FUN_1022ca50();
        *(undefined8 *)(piVar8 + 2) = uVar11;
      }
    }
    else {
      local_14 = DAT_1039cbac;
      if (DAT_1039cbac == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_1039cbac == (int *)0x0) {
          DAT_1039cbac = (int *)((int)DAT_1039ccf0 + 1);
          DAT_1039ccf0 = DAT_1039cbac;
        }
        FUN_1022bee0();
      }
      local_14 = DAT_1039cbac;
      FUN_1022bea0(0);
      piVar12 = DAT_1039cc7c;
      local_8 = 0xb;
      local_18 = DAT_1039cc7c;
      if (DAT_1039cbac == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_1039cbac == (int *)0x0) {
          DAT_1039cbac = (int *)((int)DAT_1039ccf0 + 1);
          DAT_1039ccf0 = DAT_1039cbac;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_1039cbac;
      iVar9 = *(int *)(param_4 + 4);
      iVar5 = (int)DAT_1039cbac * 4;
      if (DAT_1039cbac < *(int **)(iVar9 + 0xc)) {
        piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
        if (piVar8 == (int *)0x0) goto LAB_10236a9d;
      }
      else {
        piVar8 = (int *)0x0;
LAB_10236a9d:
        if (*(char *)(iVar9 + 0x14) == '\0') {
LAB_10236ab3:
          if (piVar8 != (int *)0x0) goto LAB_10236b00;
        }
        else {
          iVar9 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar9 + 0xc)) {
            piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
            goto LAB_10236ab3;
          }
        }
        piVar8 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar5 = FUN_10091fd4(&local_18,param_4);
          piVar8 = local_18;
          if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          local_8 = CONCAT31(local_8._1_3_,0xc);
          FUN_1022b910(local_18);
          pcVar1 = *(code **)(*piVar8 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_1039cc7c = piVar8;
        }
      }
LAB_10236b00:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      piVar12 = local_14;
    }
    FUN_1022dd70(param_3,piVar8,piVar12);
  }
  if ((param_2 & 0x20) != 0) {
    if (param_4 == 0) {
      if (DAT_103a328c == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a328c == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a328c = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a328c;
      piVar8 = (int *)FUN_10228350(8);
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8[1] = 0;
        *piVar8 = (int)std::messages<wchar_t>::vftable;
      }
    }
    else {
      local_14 = DAT_103a328c;
      if (DAT_103a328c == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a328c == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a328c = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      local_14 = DAT_103a328c;
      FUN_1022bea0(0);
      piVar12 = DAT_103a32d4;
      local_8 = 0xe;
      local_18 = DAT_103a32d4;
      if (DAT_103a328c == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a328c == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a328c = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_103a328c;
      iVar9 = *(int *)(param_4 + 4);
      iVar5 = (int)DAT_103a328c * 4;
      if (DAT_103a328c < *(int **)(iVar9 + 0xc)) {
        piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
        if (piVar8 == (int *)0x0) goto LAB_10236c49;
      }
      else {
        piVar8 = (int *)0x0;
LAB_10236c49:
        if (*(char *)(iVar9 + 0x14) == '\0') {
LAB_10236c5f:
          if (piVar8 != (int *)0x0) goto LAB_10236cac;
        }
        else {
          iVar9 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar9 + 0xc)) {
            piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
            goto LAB_10236c5f;
          }
        }
        piVar8 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar5 = FUN_1023b360(&local_18,param_4);
          piVar8 = local_18;
          if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          local_8 = CONCAT31(local_8._1_3_,0xf);
          FUN_1022b910(local_18);
          pcVar1 = *(code **)(*piVar8 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_103a32d4 = piVar8;
        }
      }
LAB_10236cac:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      piVar12 = local_14;
    }
    FUN_1022dd70(param_3,piVar8,piVar12);
  }
  if ((param_2 & 4) != 0) {
    if (param_4 == 0) {
      if (DAT_103a3290 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3290 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3290 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a3290;
      puVar7 = (undefined4 *)FUN_10228350(8);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7[1] = 0;
        *puVar7 = std::
                  money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::
                  vftable;
      }
      FUN_1022dd70(param_3,puVar7,piVar12);
      if (DAT_103a3294 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3294 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3294 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a3294;
      puVar7 = (undefined4 *)FUN_10228350(8);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7[1] = 0;
        *puVar7 = std::
                  money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::
                  vftable;
      }
      FUN_1022dd70(param_3,puVar7,piVar12);
      if (DAT_103a3298 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3298 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3298 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a3298;
      puVar7 = (undefined4 *)FUN_10228350(0x58);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7[1] = 0;
        local_8 = 0x1b;
        *puVar7 = std::_Mpunct<wchar_t>::vftable;
        *(undefined1 *)(puVar7 + 10) = 0;
        FUN_1023e840(param_1,0);
        *puVar7 = std::moneypunct<wchar_t,0>::vftable;
      }
      local_8 = 0xffffffff;
      FUN_1022dd70(param_3,puVar7,piVar12);
      if (DAT_103a329c == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a329c == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a329c = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a329c;
      puVar7 = (undefined4 *)FUN_10228350(0x58);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7[1] = 0;
        local_8 = 0x21;
        *puVar7 = std::_Mpunct<wchar_t>::vftable;
        *(undefined1 *)(puVar7 + 10) = 1;
        FUN_1023e840(param_1,0);
        *puVar7 = std::moneypunct<wchar_t,1>::vftable;
      }
      local_8 = 0xffffffff;
      FUN_1022dd70(param_3,puVar7,piVar12);
    }
    else {
      local_14 = DAT_103a3290;
      if (DAT_103a3290 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3290 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3290 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      local_14 = DAT_103a3290;
      FUN_1022bea0(0);
      piVar12 = DAT_103a32d8;
      local_8 = 0x11;
      local_18 = DAT_103a32d8;
      if (DAT_103a3290 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3290 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3290 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_103a3290;
      iVar5 = (int)DAT_103a3290 * 4;
      iVar9 = *(int *)(param_4 + 4);
      if (DAT_103a3290 < *(int **)(iVar9 + 0xc)) {
        piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
        if (piVar8 == (int *)0x0) goto LAB_10236f8c;
      }
      else {
        piVar8 = (int *)0x0;
LAB_10236f8c:
        if (*(char *)(iVar9 + 0x14) == '\0') {
LAB_10236fa2:
          if (piVar8 != (int *)0x0) goto LAB_10236fef;
        }
        else {
          iVar9 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar9 + 0xc)) {
            piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
            goto LAB_10236fa2;
          }
        }
        piVar8 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar5 = FUN_1023b450(&local_18,param_4);
          piVar8 = local_18;
          if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          local_8 = CONCAT31(local_8._1_3_,0x12);
          FUN_1022b910(local_18);
          pcVar1 = *(code **)(*piVar8 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_103a32d8 = piVar8;
        }
      }
LAB_10236fef:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      FUN_1022dd70(param_3,piVar8,local_14);
      local_14 = DAT_103a3294;
      if (DAT_103a3294 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3294 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3294 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      local_14 = DAT_103a3294;
      FUN_1022bea0(0);
      piVar12 = DAT_103a32dc;
      local_8 = 0x14;
      local_18 = DAT_103a32dc;
      if (DAT_103a3294 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3294 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3294 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_103a3294;
      iVar5 = (int)DAT_103a3294 * 4;
      iVar9 = *(int *)(param_4 + 4);
      if (DAT_103a3294 < *(int **)(iVar9 + 0xc)) {
        piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
        if (piVar8 == (int *)0x0) goto LAB_1023717e;
      }
      else {
        piVar8 = (int *)0x0;
LAB_1023717e:
        if (*(char *)(iVar9 + 0x14) == '\0') {
LAB_10237194:
          if (piVar8 != (int *)0x0) goto LAB_102370c7;
        }
        else {
          iVar9 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar9 + 0xc)) {
            piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
            goto LAB_10237194;
          }
        }
        piVar8 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar5 = FUN_1023d530(&local_18,param_4);
          piVar8 = local_18;
          if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          piVar12 = local_18;
          local_8 = CONCAT31(local_8._1_3_,0x15);
          FUN_1022b910(local_18);
          pcVar1 = *(code **)(*piVar8 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_103a32dc = piVar12;
        }
      }
LAB_102370c7:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      FUN_1022dd70(param_3,piVar8,local_14);
      if (DAT_103a3298 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3298 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3298 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a3298;
      uVar6 = FUN_1023edb0(param_4);
      FUN_1022dd70(param_3,uVar6,piVar12);
      if (DAT_103a329c == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a329c == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a329c = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a329c;
      uVar6 = FUN_1023efb0(param_4);
      FUN_1022dd70(param_3,uVar6,piVar12);
    }
  }
  if ((param_2 & 0x10) != 0) {
    if (param_4 == 0) {
      if (DAT_103a32a0 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32a0 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32a0 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a32a0;
      iVar5 = FUN_10228350(0x44);
      local_8 = 0x25;
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_1023f160(param_1,0);
      }
      local_8 = 0xffffffff;
      FUN_1022dd70(param_3,uVar6,piVar12);
      if (DAT_103a3284 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3284 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3284 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar12 = DAT_103a3284;
      iVar5 = FUN_10228350(0xc);
      if (iVar5 == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)FUN_10239370(param_1,0);
      }
    }
    else {
      local_14 = DAT_103a32a0;
      if (DAT_103a32a0 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32a0 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32a0 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      local_14 = DAT_103a32a0;
      FUN_1022bea0(0);
      piVar12 = DAT_103a32e8;
      local_8 = 0x26;
      local_18 = DAT_103a32e8;
      if (DAT_103a32a0 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a32a0 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a32a0 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_103a32a0;
      iVar5 = (int)DAT_103a32a0 * 4;
      iVar9 = *(int *)(param_4 + 4);
      if (DAT_103a32a0 < *(int **)(iVar9 + 0xc)) {
        piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
        if (piVar8 == (int *)0x0) goto LAB_10237392;
      }
      else {
        piVar8 = (int *)0x0;
LAB_10237392:
        if (*(char *)(iVar9 + 0x14) == '\0') {
LAB_102373a8:
          if (piVar8 != (int *)0x0) goto LAB_102373f5;
        }
        else {
          iVar9 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar9 + 0xc)) {
            piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
            goto LAB_102373a8;
          }
        }
        piVar8 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar5 = FUN_1023f1e0(&local_18,param_4);
          piVar8 = local_18;
          if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          local_8 = CONCAT31(local_8._1_3_,0x27);
          FUN_1022b910(local_18);
          pcVar1 = *(code **)(*piVar8 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_103a32e8 = piVar8;
        }
      }
LAB_102373f5:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      FUN_1022dd70(param_3,piVar8,local_14);
      local_14 = DAT_103a3284;
      if (DAT_103a3284 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3284 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3284 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      local_14 = DAT_103a3284;
      FUN_1022bea0(0);
      piVar12 = DAT_103a32ec;
      local_8 = 0x29;
      local_18 = DAT_103a32ec;
      if (DAT_103a3284 == (int *)0x0) {
        FUN_1022bea0(0);
        if (DAT_103a3284 == (int *)0x0) {
          DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
          DAT_103a3284 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      piVar2 = DAT_103a3284;
      iVar5 = (int)DAT_103a3284 * 4;
      iVar9 = *(int *)(param_4 + 4);
      if (DAT_103a3284 < *(int **)(iVar9 + 0xc)) {
        piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
        if (piVar8 == (int *)0x0) goto LAB_102374c6;
      }
      else {
        piVar8 = (int *)0x0;
LAB_102374c6:
        if (*(char *)(iVar9 + 0x14) == '\0') {
LAB_102374dc:
          if (piVar8 != (int *)0x0) goto LAB_10237529;
        }
        else {
          iVar9 = FUN_1022bde0();
          if (piVar2 < *(int **)(iVar9 + 0xc)) {
            piVar8 = *(int **)(iVar5 + *(int *)(iVar9 + 8));
            goto LAB_102374dc;
          }
        }
        piVar8 = piVar12;
        if (piVar12 == (int *)0x0) {
          iVar5 = FUN_102393d0(&local_18,param_4);
          piVar8 = local_18;
          if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          local_8 = CONCAT31(local_8._1_3_,0x2a);
          FUN_1022b910(local_18);
          pcVar1 = *(code **)(*piVar8 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar1)();
          DAT_103a32ec = piVar8;
        }
      }
LAB_10237529:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      piVar12 = local_14;
    }
    FUN_1022dd70(param_3,piVar8,piVar12);
  }
  if ((param_2 & 2) == 0) goto LAB_102376f1;
  if (param_4 == 0) {
    if (DAT_1039ccfc == (int *)0x0) {
      FUN_1022bea0(0);
      if (DAT_1039ccfc == (int *)0x0) {
        DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
        DAT_1039ccfc = DAT_1039ccf0;
      }
      FUN_1022bee0();
    }
    piVar12 = DAT_1039ccfc;
    iVar5 = FUN_10228350(0x34);
    if (iVar5 == 0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = (int *)FUN_102337b0(param_1,0);
    }
  }
  else {
    if (DAT_1039ccfc == (int *)0x0) {
      FUN_1022bea0(0);
      if (DAT_1039ccfc == (int *)0x0) {
        DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
        DAT_1039ccfc = DAT_1039ccf0;
      }
      FUN_1022bee0();
    }
    piVar12 = DAT_1039ccfc;
    FUN_1022bea0(0);
    piVar2 = DAT_1039d740;
    local_8 = 0x2c;
    local_14 = DAT_1039d740;
    if (DAT_1039ccfc == (int *)0x0) {
      FUN_1022bea0(0);
      if (DAT_1039ccfc == (int *)0x0) {
        DAT_1039ccf0 = (int *)((int)DAT_1039ccf0 + 1);
        DAT_1039ccfc = DAT_1039ccf0;
      }
      FUN_1022bee0();
    }
    piVar8 = DAT_1039ccfc;
    iVar5 = *(int *)(param_4 + 4);
    local_18 = (int *)((int)DAT_1039ccfc * 4);
    if (DAT_1039ccfc < *(int **)(iVar5 + 0xc)) {
      piVar10 = *(int **)((int)local_18 + *(int *)(iVar5 + 8));
      if (piVar10 == (int *)0x0) goto LAB_1023766f;
    }
    else {
      piVar10 = (int *)0x0;
LAB_1023766f:
      if (*(char *)(iVar5 + 0x14) == '\0') {
LAB_10237688:
        if (piVar10 != (int *)0x0) goto LAB_102376d5;
      }
      else {
        iVar5 = FUN_1022bde0();
        if (piVar8 < *(int **)(iVar5 + 0xc)) {
          piVar10 = *(int **)((int)local_18 + *(int *)(iVar5 + 8));
          goto LAB_10237688;
        }
      }
      piVar10 = piVar2;
      if (piVar2 == (int *)0x0) {
        iVar5 = FUN_10233800(&local_14,param_4);
        piVar10 = local_14;
        if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_1000da81();
        }
        local_8 = CONCAT31(local_8._1_3_,0x2d);
        FUN_1022b910(local_14);
        pcVar1 = *(code **)(*piVar10 + 4);
        (*(code *)PTR_guard_check_icall_1035d810)();
        (*pcVar1)();
        DAT_1039d740 = piVar10;
      }
    }
LAB_102376d5:
    local_8 = 0xffffffff;
    FUN_1022bee0();
  }
  FUN_1022dd70(param_3,piVar10,piVar12);
LAB_102376f1:
  *unaff_FS_OFFSET = local_10;
  return;
}

