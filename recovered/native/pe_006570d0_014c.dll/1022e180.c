/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022e180 */

int FUN_1022e180(int param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  int *unaff_FS_OFFSET;
  undefined1 local_40 [16];
  int *local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10288af4;
  local_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  local_30 = (int *)(param_2 & 2);
  if (local_30 != (int *)0x0) {
    if (param_4 == 0) {
      if (DAT_1039cd08 == 0) {
        FUN_1022bea0(0);
        if (DAT_1039cd08 == 0) {
          DAT_1039ccf0 = DAT_1039ccf0 + 1;
          DAT_1039cd08 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      uVar6 = DAT_1039cd08;
      piVar7 = (int *)FUN_10228350(0x18);
      local_2c = piVar7;
      if (piVar7 == (int *)0x0) {
        FUN_1022e060(0,uVar6);
      }
      else {
        piVar7[1] = 0;
        *piVar7 = (int)std::ctype<char>::vftable;
        piVar8 = (int *)FUN_1022cc60(local_40);
        iVar11 = piVar8[1];
        iVar3 = piVar8[2];
        iVar4 = piVar8[3];
        piVar7[2] = *piVar8;
        piVar7[3] = iVar11;
        piVar7[4] = iVar3;
        piVar7[5] = iVar4;
        FUN_1022e060(piVar7,uVar6);
      }
    }
    else {
      if (DAT_1039cd08 == 0) {
        FUN_1022bea0(0);
        if (DAT_1039cd08 == 0) {
          DAT_1039ccf0 = DAT_1039ccf0 + 1;
          DAT_1039cd08 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      uVar5 = DAT_1039cd08;
      uVar10 = FUN_1001c23e(param_4,uVar6);
      FUN_1022e060(uVar10,uVar5);
    }
  }
  if ((param_2 & 8) != 0) {
    if (param_4 == 0) {
      if (DAT_1039d5f0 == 0) {
        FUN_1022bea0(0);
        if (DAT_1039d5f0 == 0) {
          DAT_1039ccf0 = DAT_1039ccf0 + 1;
          DAT_1039d5f0 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      uVar6 = DAT_1039d5f0;
      local_2c = (int *)FUN_10228350(8);
      if (local_2c == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        local_2c[1] = 0;
        *local_2c = (int)std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>
                         ::vftable;
        puVar9 = local_2c;
      }
      FUN_1022e060(puVar9,uVar6);
      if (DAT_1039cbb0 == 0) {
        FUN_1022bea0(0);
        if (DAT_1039cbb0 == 0) {
          DAT_1039cbb0 = DAT_1039ccf0 + 1;
          DAT_1039ccf0 = DAT_1039cbb0;
        }
        FUN_1022bee0();
      }
      uVar6 = DAT_1039cbb0;
      local_2c = (int *)FUN_10228350(8);
      if (local_2c == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        local_2c[1] = 0;
        *local_2c = (int)std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>
                         ::vftable;
        puVar9 = local_2c;
      }
      FUN_1022e060(puVar9,uVar6);
      if (DAT_1039c738 == 0) {
        FUN_1022bea0(0);
        if (DAT_1039c738 == 0) {
          DAT_1039c738 = DAT_1039ccf0 + 1;
          DAT_1039ccf0 = DAT_1039c738;
        }
        FUN_1022bee0();
      }
      uVar6 = DAT_1039c738;
      local_2c = (int *)FUN_10228350(0x18);
      local_8 = 10;
      if (local_2c == (int *)0x0) {
        uVar10 = 0;
        local_8 = 0xffffffff;
      }
      else {
        uVar10 = FUN_1022ff40(param_1,0,0);
        local_8 = 0xffffffff;
      }
    }
    else {
      if (DAT_1039d5f0 == 0) {
        FUN_1022bea0(0);
        if (DAT_1039d5f0 == 0) {
          DAT_1039ccf0 = DAT_1039ccf0 + 1;
          DAT_1039d5f0 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      uVar6 = DAT_1039d5f0;
      FUN_1022bea0(0);
      local_8 = 2;
      local_28 = DAT_1039d5f4;
      local_18 = DAT_1039d5f4;
      local_1c = DAT_1039d5f0;
      if (DAT_1039d5f0 == 0) {
        FUN_1022bea0(0);
        if (DAT_1039d5f0 == 0) {
          DAT_1039ccf0 = DAT_1039ccf0 + 1;
          DAT_1039d5f0 = DAT_1039ccf0;
        }
        FUN_1022bee0();
      }
      local_20 = DAT_1039d5f0 * 4;
      local_24 = *(int *)(param_4 + 4);
      local_1c = DAT_1039d5f0;
      if (DAT_1039d5f0 < *(uint *)(local_24 + 0xc)) {
        local_14 = *(int **)(local_20 + *(int *)(local_24 + 8));
        if (local_14 == (int *)0x0) goto LAB_1022e4af;
      }
      else {
        local_14 = (int *)0x0;
LAB_1022e4af:
        if (*(char *)(local_24 + 0x14) == '\0') {
LAB_1022e4d1:
          if (local_14 != (int *)0x0) goto LAB_1022e52c;
        }
        else {
          iVar11 = FUN_1022bde0();
          if (local_1c < *(uint *)(iVar11 + 0xc)) {
            local_14 = *(int **)(local_20 + *(int *)(iVar11 + 8));
            goto LAB_1022e4d1;
          }
        }
        if (local_28 == (int *)0x0) {
          iVar11 = FUN_1022e980(&local_18,param_4);
          piVar7 = local_18;
          if (iVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          local_14 = local_18;
          local_28 = local_18;
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_1022b910(local_18);
          pcVar2 = *(code **)(*piVar7 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar2)();
          DAT_1039d5f4 = local_18;
        }
        else {
          local_14 = local_28;
        }
      }
LAB_1022e52c:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      FUN_1022e060(local_14,uVar6);
      if (DAT_1039cbb0 == 0) {
        FUN_1022bea0(0);
        if (DAT_1039cbb0 == 0) {
          DAT_1039cbb0 = DAT_1039ccf0 + 1;
          DAT_1039ccf0 = DAT_1039cbb0;
        }
        FUN_1022bee0();
      }
      uVar6 = DAT_1039cbb0;
      FUN_1022bea0(0);
      local_8 = 5;
      local_28 = DAT_1039cbd0;
      local_18 = DAT_1039cbd0;
      local_20 = DAT_1039cbb0;
      if (DAT_1039cbb0 == 0) {
        FUN_1022bea0(0);
        if (DAT_1039cbb0 == 0) {
          DAT_1039cbb0 = DAT_1039ccf0 + 1;
          DAT_1039ccf0 = DAT_1039cbb0;
        }
        FUN_1022bee0();
      }
      local_1c = DAT_1039cbb0 * 4;
      local_2c = *(int **)(param_4 + 4);
      local_20 = DAT_1039cbb0;
      if (DAT_1039cbb0 < (uint)local_2c[3]) {
        local_14 = *(int **)(local_1c + local_2c[2]);
        if (local_14 == (int *)0x0) goto LAB_1022e60e;
      }
      else {
        local_14 = (int *)0x0;
LAB_1022e60e:
        if ((char)local_2c[5] == '\0') {
LAB_1022e630:
          if (local_14 != (int *)0x0) goto LAB_1022e68b;
        }
        else {
          iVar11 = FUN_1022bde0();
          if (local_20 < *(uint *)(iVar11 + 0xc)) {
            local_14 = *(int **)(local_1c + *(int *)(iVar11 + 8));
            goto LAB_1022e630;
          }
        }
        if (local_28 == (int *)0x0) {
          iVar11 = FUN_1007bb90(&local_18,param_4);
          piVar7 = local_18;
          if (iVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1000da81();
          }
          local_14 = local_18;
          local_2c = local_18;
          local_8 = CONCAT31(local_8._1_3_,6);
          FUN_1022b910(local_18);
          pcVar2 = *(code **)(*piVar7 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar2)();
          DAT_1039cbd0 = local_18;
        }
        else {
          local_14 = local_28;
        }
      }
LAB_1022e68b:
      local_8 = 0xffffffff;
      FUN_1022bee0();
      FUN_1022e060(local_14,uVar6);
      if (DAT_1039c738 == 0) {
        FUN_1022bea0(0);
        if (DAT_1039c738 == 0) {
          DAT_1039c738 = DAT_1039ccf0 + 1;
          DAT_1039ccf0 = DAT_1039c738;
        }
        FUN_1022bee0();
      }
      uVar6 = DAT_1039c738;
      uVar10 = FUN_1000c417(param_4);
    }
    FUN_1022e060(uVar10,uVar6);
  }
  if (local_30 == (int *)0x0) goto LAB_1022e8c2;
  if (param_4 == 0) {
    if (DAT_1039c7ec == 0) {
      FUN_1022bea0(0);
      if (DAT_1039c7ec == 0) {
        DAT_1039c7ec = DAT_1039ccf0 + 1;
        DAT_1039ccf0 = DAT_1039c7ec;
      }
      FUN_1022bee0();
    }
    uVar6 = DAT_1039c7ec;
    local_30 = (int *)FUN_10228350(8);
    if (local_30 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      local_30[1] = 0;
      *local_30 = (int)std::codecvt<char,char,_Mbstatet>::vftable;
      piVar7 = local_30;
    }
  }
  else {
    if (DAT_1039c7ec == 0) {
      FUN_1022bea0(0);
      if (DAT_1039c7ec == 0) {
        DAT_1039c7ec = DAT_1039ccf0 + 1;
        DAT_1039ccf0 = DAT_1039c7ec;
      }
      FUN_1022bee0();
    }
    uVar6 = DAT_1039c7ec;
    FUN_1022bea0(0);
    local_8 = 0xc;
    local_2c = DAT_1039cbc4;
    local_18 = DAT_1039cbc4;
    local_20 = DAT_1039c7ec;
    if (DAT_1039c7ec == 0) {
      FUN_1022bea0(0);
      if (DAT_1039c7ec == 0) {
        DAT_1039c7ec = DAT_1039ccf0 + 1;
        DAT_1039ccf0 = DAT_1039c7ec;
      }
      FUN_1022bee0();
    }
    local_1c = DAT_1039c7ec * 4;
    local_30 = *(int **)(param_4 + 4);
    local_20 = DAT_1039c7ec;
    if (DAT_1039c7ec < (uint)local_30[3]) {
      local_14 = *(int **)(local_1c + local_30[2]);
      if (local_14 == (int *)0x0) goto LAB_1022e82b;
    }
    else {
      local_14 = (int *)0x0;
LAB_1022e82b:
      if ((char)local_30[5] == '\0') {
LAB_1022e84d:
        if (local_14 != (int *)0x0) goto LAB_1022e8a8;
      }
      else {
        iVar11 = FUN_1022bde0();
        if (local_20 < *(uint *)(iVar11 + 0xc)) {
          local_14 = *(int **)(local_1c + *(int *)(iVar11 + 8));
          goto LAB_1022e84d;
        }
      }
      if (local_2c == (int *)0x0) {
        iVar11 = FUN_10075168(&local_18,param_4);
        piVar7 = local_18;
        if (iVar11 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_1000da81();
        }
        local_14 = local_18;
        local_30 = local_18;
        local_8 = CONCAT31(local_8._1_3_,0xd);
        FUN_1022b910(local_18);
        pcVar2 = *(code **)(*piVar7 + 4);
        (*(code *)PTR_guard_check_icall_1035d810)();
        (*pcVar2)();
        DAT_1039cbc4 = local_18;
      }
      else {
        local_14 = local_2c;
      }
    }
LAB_1022e8a8:
    local_8 = 0xffffffff;
    FUN_1022bee0();
    piVar7 = local_14;
  }
  FUN_1022e060(piVar7,uVar6);
LAB_1022e8c2:
  FUN_10251000(param_1,param_2,param_3,param_4);
  FUN_10236450(param_1,param_2,param_3,param_4);
  FUN_10237740(param_1,param_2,param_3,param_4);
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | param_2;
  pcVar13 = *(char **)(param_1 + 0x2c);
  if (pcVar13 == (char *)0x0) {
    pcVar13 = (char *)(param_1 + 0x30);
  }
  pcVar12 = *(char **)(param_3 + 0x18);
  if (pcVar12 != pcVar13) {
    if (pcVar12 != (char *)0x0) {
      thunk_FUN_10274120(pcVar12);
    }
    *(undefined4 *)(param_3 + 0x18) = 0;
    if (pcVar13 != (char *)0x0) {
      pcVar12 = pcVar13;
      do {
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      local_30 = (int *)(pcVar12 + (1 - (int)(pcVar13 + 1)));
      local_2c = (int *)FUN_1026faa0(local_30);
      if (local_2c != (int *)0x0) {
        FUN_1025b2d0(local_2c,pcVar13,local_30);
      }
      *(int **)(param_3 + 0x18) = local_2c;
    }
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}

