/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10252020 */

void FUN_10252020(undefined4 *param_1,int *param_2,int *param_3,char param_4,int param_5,int param_6
                 )

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  code ****ppppcVar4;
  int ****ppppiVar5;
  byte *pbVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  char ******ppppppcVar10;
  uint uVar11;
  code ******ppppppcVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int ******ppppppiVar16;
  int iVar17;
  char *pcVar18;
  code ******ppppppcVar19;
  byte ******ppppppbVar20;
  char *pcVar21;
  int ******ppppppiVar22;
  char local_14c [4];
  int *local_148;
  int *****local_144;
  int *local_140;
  undefined1 local_13c [4];
  code *****local_138;
  int local_134;
  undefined4 *local_130;
  uint local_12c;
  undefined4 *local_128;
  int local_124;
  int local_120;
  uint local_11c;
  uint local_118;
  char local_111;
  uint local_110;
  undefined4 *local_10c;
  int *local_108;
  int *local_104;
  int *local_100;
  uint local_fc;
  code *****local_f8;
  int *****local_f4;
  char local_ed;
  undefined1 local_ec [16];
  int local_dc;
  undefined1 local_d4 [16];
  int local_c4;
  code *****local_bc [5];
  uint local_a8;
  code *****local_a4 [5];
  uint local_90;
  byte *****local_8c [4];
  int local_7c;
  uint local_78;
  int *****local_74 [4];
  uint local_64;
  uint local_60;
  code *****local_5c [4];
  int local_4c;
  uint local_48;
  char *****local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_34;
  uint local_30;
  int *****local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028a232;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_130 = param_1;
  local_10c = param_1;
  local_108 = param_3;
  local_134 = param_6;
  local_110 = 0;
  local_140 = param_2;
  local_138 = *(code ******)(*(int *)(param_5 + 0x30) + 4);
  pcVar3 = *(code **)((int)*local_138 + 4);
  local_f8 = local_138;
  (*(code *)PTR_guard_check_icall_1035d810)(local_14);
  (*pcVar3)();
  if (param_4 == '\0') {
    local_8 = 2;
    local_104 = (int *)FUN_102552e0(local_13c);
  }
  else {
    local_8 = 1;
    local_104 = (int *)FUN_102554e0(local_13c);
  }
  pcVar3 = *(code **)((int)*local_f8 + 8);
  (*(code *)PTR_guard_check_icall_1035d810)();
  local_128 = (undefined4 *)(*pcVar3)();
  if (local_128 != (undefined4 *)0x0) {
    pcVar3 = *(code **)*local_128;
    (*(code *)PTR_guard_check_icall_1035d810)(1);
    (*pcVar3)();
  }
  local_11c = local_11c & 0xffffff00;
  local_111 = '\0';
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c = (int *****)0x0;
  local_8 = 3;
  pcVar3 = *(code **)(*local_104 + 0x2c);
  (*(code *)PTR_guard_check_icall_1035d810)(local_14c);
  (*pcVar3)();
  *local_10c = 0;
  local_10c[1] = 0;
  local_10c[2] = 0;
  local_10c[3] = 0;
  local_10c[4] = 0;
  local_10c[5] = 0xf;
  *(undefined1 *)local_10c = 0;
  local_fc = 1;
  local_110 = 1;
  local_138 = *(code ******)(*(int *)(param_5 + 0x30) + 4);
  ppppcVar4 = (code ****)(*local_138)[1];
  local_f8 = local_138;
  (*(code *)PTR_guard_check_icall_1035d810)();
  (*(code *)ppppcVar4)();
  local_8._0_1_ = 4;
  local_148 = (int *)FUN_1001c23e(local_13c);
  local_8 = CONCAT31(local_8._1_3_,3);
  ppppcVar4 = (code ****)(*local_f8)[2];
  (*(code *)PTR_guard_check_icall_1035d810)();
  local_128 = (undefined4 *)(*(code *)ppppcVar4)();
  if (local_128 != (undefined4 *)0x0) {
    pcVar3 = *(code **)*local_128;
    (*(code *)PTR_guard_check_icall_1035d810)(1);
    (*pcVar3)();
  }
  pcVar3 = *(code **)(*local_148 + 0x1c);
  (*(code *)PTR_guard_check_icall_1035d810)
            ("0123456789-","0123456789abcdefghijklmnopqrstuvwxyz",local_134);
  (*pcVar3)();
  local_118 = 0;
LAB_10252250:
  if (local_118 < 4) {
    switch(local_14c[local_118]) {
    case ' ':
    case 'x':
      if (local_118 != 3) {
        local_ed = '\0';
LAB_10253886:
        if ((char)param_2[1] == '\0') {
          local_100 = (int *)*param_2;
          if (local_100 == (int *)0x0) {
LAB_102538cd:
            *param_2 = 0;
          }
          else {
            if ((*(byte **)local_100[7] == (byte *)0x0) || (*(int *)local_100[0xb] < 1)) {
              pcVar3 = *(code **)(*local_100 + 0x18);
              (*(code *)PTR_guard_check_icall_1035d810)();
              uVar11 = (*pcVar3)();
            }
            else {
              uVar11 = (uint)**(byte **)local_100[7];
            }
            if (uVar11 == 0xffffffff) goto LAB_102538cd;
            *(char *)((int)param_2 + 5) = (char)uVar11;
          }
          *(undefined1 *)(param_2 + 1) = 1;
        }
        if ((char)local_108[1] == '\0') {
          FUN_100e1fa2();
        }
        local_f4 = (int *****)*param_2;
        if ((int ******)local_f4 == (int ******)0x0) {
          if (*local_108 == 0) goto LAB_10253900;
        }
        else if (*local_108 != 0) goto LAB_10253900;
        if ((char)param_2[1] == '\0') {
          if ((int ******)local_f4 == (int ******)0x0) {
LAB_102539a4:
            *param_2 = 0;
          }
          else {
            if (((int ****)*local_f4[7] == (int ****)0x0) || ((int)*local_f4[0xb] < 1)) {
              ppppiVar5 = (int ****)(*local_f4)[6];
              (*(code *)PTR_guard_check_icall_1035d810)();
              uVar11 = (*(code *)ppppiVar5)();
            }
            else {
              uVar11 = (uint)*(byte *)*local_f4[7];
            }
            if (uVar11 == 0xffffffff) goto LAB_102539a4;
            *(char *)((int)param_2 + 5) = (char)uVar11;
          }
          *(undefined1 *)(param_2 + 1) = 1;
        }
        if ((*(byte *)(local_148[3] + (uint)*(byte *)((int)param_2 + 5) * 2) & 0x48) == 0)
        goto LAB_10253900;
        local_100 = (int *)*param_2;
        local_ed = '\x01';
        if (local_100 == (int *)0x0) {
LAB_10253a1e:
          *param_2 = 0;
          *(undefined1 *)(param_2 + 1) = 1;
        }
        else {
          if (*(int *)local_100[7] == 0) {
LAB_102539fb:
            pcVar3 = *(code **)(*local_100 + 0x1c);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar11 = (*pcVar3)();
          }
          else {
            iVar17 = *(int *)local_100[0xb];
            if (iVar17 < 1) goto LAB_102539fb;
            *(int *)local_100[0xb] = iVar17 + -1;
            pbVar6 = *(byte **)local_100[7];
            *(byte **)local_100[7] = pbVar6 + 1;
            uVar11 = (uint)*pbVar6;
          }
          if (uVar11 == 0xffffffff) goto LAB_10253a1e;
          *(undefined1 *)(param_2 + 1) = 0;
        }
        goto LAB_10253886;
      }
      break;
    case '$':
      pcVar3 = *(code **)(*local_104 + 0x18);
      (*(code *)PTR_guard_check_icall_1035d810)(local_5c);
      (*pcVar3)();
      local_fc = local_fc | 0x80;
      local_110 = local_fc;
      local_8 = CONCAT31(local_8._1_3_,5);
      if ((*(byte *)(param_5 + 0x14) & 8) == 0) {
        if ((char)param_2[1] == '\0') {
          local_f4 = (int *****)*param_2;
          if ((int ******)local_f4 == (int ******)0x0) {
LAB_10252309:
            *param_2 = 0;
          }
          else {
            if (((int ****)*local_f4[7] == (int ****)0x0) || ((int)*local_f4[0xb] < 1)) {
              ppppiVar5 = (int ****)(*local_f4)[6];
              (*(code *)PTR_guard_check_icall_1035d810)();
              uVar11 = (*(code *)ppppiVar5)();
            }
            else {
              uVar11 = (uint)*(byte *)*local_f4[7];
            }
            if (uVar11 == 0xffffffff) goto LAB_10252309;
            *(char *)((int)param_2 + 5) = (char)uVar11;
          }
          *(undefined1 *)(param_2 + 1) = 1;
        }
        if ((char)local_108[1] == '\0') {
          FUN_100e1fa2();
        }
        local_f4 = (int *****)*param_2;
        if ((int ******)local_f4 != (int ******)0x0) {
          if (*local_108 == 0) goto LAB_10252343;
          goto LAB_102523a2;
        }
        if (*local_108 == 0) goto LAB_102523a2;
LAB_10252343:
        if ((char)param_2[1] == '\0') {
          if ((int ******)local_f4 == (int ******)0x0) {
LAB_10252382:
            *param_2 = 0;
          }
          else {
            if (((int ****)*local_f4[7] == (int ****)0x0) || ((int)*local_f4[0xb] < 1)) {
              ppppiVar5 = (int ****)(*local_f4)[6];
              (*(code *)PTR_guard_check_icall_1035d810)();
              uVar11 = (*(code *)ppppiVar5)();
            }
            else {
              uVar11 = (uint)*(byte *)*local_f4[7];
            }
            if (uVar11 == 0xffffffff) goto LAB_10252382;
            *(char *)((int)param_2 + 5) = (char)uVar11;
          }
          *(undefined1 *)(param_2 + 1) = 1;
        }
        ppppppcVar19 = local_5c;
        if (0xf < local_48) {
          ppppppcVar19 = (code ******)local_5c[0];
        }
        if (*(char *)((int)param_2 + 5) == *(char *)ppppppcVar19) goto LAB_102523a2;
      }
      else {
LAB_102523a2:
        if ((local_118 != 3) || (1 < local_1c)) goto LAB_102524ab;
        if ((char)param_2[1] == '\0') {
          local_f4 = (int *****)*param_2;
          if ((int ******)local_f4 == (int ******)0x0) {
LAB_10252400:
            *param_2 = 0;
          }
          else {
            if (((int ****)*local_f4[7] == (int ****)0x0) || ((int)*local_f4[0xb] < 1)) {
              ppppiVar5 = (int ****)(*local_f4)[6];
              (*(code *)PTR_guard_check_icall_1035d810)();
              uVar11 = (*(code *)ppppiVar5)();
            }
            else {
              uVar11 = (uint)*(byte *)*local_f4[7];
            }
            if (uVar11 == 0xffffffff) goto LAB_10252400;
            *(char *)((int)param_2 + 5) = (char)uVar11;
          }
          *(undefined1 *)(param_2 + 1) = 1;
        }
        if ((char)local_108[1] == '\0') {
          FUN_100e1fa2();
        }
        local_f4 = (int *****)*param_2;
        if ((int ******)local_f4 == (int ******)0x0) {
          if (*local_108 != 0) {
LAB_1025243a:
            local_f8 = (code *****)local_5c;
            if (0xf < local_48) {
              local_f8 = local_5c[0];
            }
            if ((char)param_2[1] == '\0') {
              if ((int ******)local_f4 == (int ******)0x0) {
LAB_10252490:
                *param_2 = 0;
              }
              else {
                if (((int ****)*local_f4[7] == (int ****)0x0) || ((int)*local_f4[0xb] < 1)) {
                  ppppiVar5 = (int ****)(*local_f4)[6];
                  (*(code *)PTR_guard_check_icall_1035d810)();
                  uVar11 = (*(code *)ppppiVar5)();
                }
                else {
                  uVar11 = (uint)*(byte *)*local_f4[7];
                }
                if (uVar11 == 0xffffffff) goto LAB_10252490;
                *(char *)((int)param_2 + 5) = (char)uVar11;
              }
              *(undefined1 *)(param_2 + 1) = 1;
            }
            if (*(char *)((int)param_2 + 5) == *(char *)local_f8) goto LAB_102524ab;
          }
        }
        else if (*local_108 == 0) goto LAB_1025243a;
      }
      FUN_1022dcf0(0);
LAB_102524ab:
      ppppppcVar19 = local_5c;
      if (0xf < local_48) {
        ppppppcVar19 = (code ******)local_5c[0];
      }
LAB_102524b6:
      if ((char)param_2[1] == '\0') {
        local_f4 = (int *****)*param_2;
        if ((int ******)local_f4 == (int ******)0x0) {
LAB_10252507:
          *param_2 = 0;
        }
        else {
          if (((int ****)*local_f4[7] == (int ****)0x0) || ((int)*local_f4[0xb] < 1)) {
            local_f8 = (code *****)(*local_f4)[6];
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar11 = (*(code *)local_f8)();
          }
          else {
            uVar11 = (uint)*(byte *)*local_f4[7];
          }
          if (uVar11 == 0xffffffff) goto LAB_10252507;
          *(char *)((int)param_2 + 5) = (char)uVar11;
        }
        *(undefined1 *)(param_2 + 1) = 1;
      }
      if ((char)local_108[1] == '\0') {
        FUN_100e1fa2();
      }
      local_f4 = (int *****)*param_2;
      if ((int ******)local_f4 == (int ******)0x0) {
        if (*local_108 == 0) goto LAB_1025253a;
      }
      else if (*local_108 != 0) goto LAB_1025253a;
      ppppppcVar12 = local_5c;
      if (0xf < local_48) {
        ppppppcVar12 = (code ******)local_5c[0];
      }
      if (ppppppcVar19 == (code ******)((int)ppppppcVar12 + local_4c)) goto LAB_1025253a;
      if ((char)param_2[1] == '\0') {
        if ((int ******)local_f4 == (int ******)0x0) {
LAB_102525d6:
          *param_2 = 0;
        }
        else {
          if (((int ****)*local_f4[7] == (int ****)0x0) || ((int)*local_f4[0xb] < 1)) {
            local_f8 = (code *****)(*local_f4)[6];
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar11 = (*(code *)local_f8)();
          }
          else {
            uVar11 = (uint)*(byte *)*local_f4[7];
          }
          if (uVar11 == 0xffffffff) goto LAB_102525d6;
          *(char *)((int)param_2 + 5) = (char)uVar11;
        }
        *(undefined1 *)(param_2 + 1) = 1;
      }
      if (*(char *)((int)param_2 + 5) != *(char *)ppppppcVar19) goto LAB_1025253a;
      local_f4 = (int *****)*param_2;
      ppppppcVar19 = (code ******)((int)ppppppcVar19 + 1);
      if ((int ******)local_f4 == (int ******)0x0) {
LAB_10252650:
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
      }
      else {
        if ((int ****)*local_f4[7] == (int ****)0x0) {
LAB_1025261b:
          local_f8 = (code *****)(*local_f4)[7];
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar11 = (*(code *)local_f8)();
        }
        else {
          ppppiVar5 = (int ****)*local_f4[0xb];
          if ((int)ppppiVar5 < 1) goto LAB_1025261b;
          *local_f4[0xb] = (int ***)((int)ppppiVar5 + -1);
          ppppiVar5 = (int ****)*local_f4[7];
          *local_f4[7] = (int ***)((int)ppppiVar5 + 1);
          uVar11 = (uint)*(byte *)ppppiVar5;
        }
        if (uVar11 == 0xffffffff) goto LAB_10252650;
        *(undefined1 *)(param_2 + 1) = 0;
      }
      goto LAB_102524b6;
    case '+':
      if ((char)param_2[1] == '\0') {
        local_f4 = (int *****)*param_2;
        if ((int ******)local_f4 == (int ******)0x0) {
LAB_102526ae:
          *param_2 = 0;
        }
        else {
          if (((int ****)*local_f4[7] == (int ****)0x0) || ((int)*local_f4[0xb] < 1)) {
            ppppiVar5 = (int ****)(*local_f4)[6];
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar11 = (*(code *)ppppiVar5)();
          }
          else {
            uVar11 = (uint)*(byte *)*local_f4[7];
          }
          if (uVar11 == 0xffffffff) goto LAB_102526ae;
          *(char *)((int)param_2 + 5) = (char)uVar11;
        }
        *(undefined1 *)(param_2 + 1) = 1;
      }
      if ((char)local_108[1] == '\0') {
        FUN_100e1fa2();
      }
      if (*param_2 == 0) {
        if (*local_108 != 0) {
LAB_102526ea:
          pcVar3 = *(code **)(*local_104 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)(local_ec);
          (*pcVar3)();
          local_110 = local_fc | 0x202;
          local_8 = CONCAT31(local_8._1_3_,6);
          local_fc = local_110;
          if (local_dc == 0) {
LAB_10252801:
            local_ed = '\0';
          }
          else {
            pcVar3 = *(code **)(*local_104 + 0x1c);
            (*(code *)PTR_guard_check_icall_1035d810)(local_bc);
            (*pcVar3)();
            local_fc = local_fc | 0x404;
            local_8 = 7;
            local_f8 = (code *****)local_bc;
            if (0xf < local_a8) {
              local_f8 = local_bc[0];
            }
            local_110 = local_fc;
            if ((char)param_2[1] == '\0') {
              local_f4 = (int *****)*param_2;
              if ((int ******)local_f4 == (int ******)0x0) {
LAB_102527e3:
                *param_2 = 0;
              }
              else {
                if (((int ****)*local_f4[7] == (int ****)0x0) || ((int)*local_f4[0xb] < 1)) {
                  ppppiVar5 = (int ****)(*local_f4)[6];
                  (*(code *)PTR_guard_check_icall_1035d810)();
                  uVar11 = (*(code *)ppppiVar5)();
                }
                else {
                  uVar11 = (uint)*(byte *)*local_f4[7];
                }
                if (uVar11 == 0xffffffff) goto LAB_102527e3;
                *(char *)((int)param_2 + 5) = (char)uVar11;
              }
              *(undefined1 *)(param_2 + 1) = 1;
            }
            local_ed = '\x01';
            if (*(char *)local_f8 != *(char *)((int)param_2 + 5)) goto LAB_10252801;
          }
          if ((local_fc & 4) != 0) {
            local_110 = local_fc & 0xfffffffb;
            local_fc = local_110;
            FUN_10004e60();
          }
          local_8 = 3;
          if ((local_fc & 2) != 0) {
            local_110 = local_fc & 0xfffffffd;
            local_fc = local_110;
            FUN_10004e60();
          }
          if (local_ed == '\0') {
            pcVar3 = *(code **)(*local_104 + 0x20);
            (*(code *)PTR_guard_check_icall_1035d810)(local_74);
            (*pcVar3)();
            local_110 = local_fc | 0x1008;
            local_8 = CONCAT31(local_8._1_3_,8);
            local_fc = local_110;
            if (local_64 == 0) {
LAB_10252ace:
              local_ed = '\0';
            }
            else {
              pcVar3 = *(code **)(*local_104 + 0x20);
              (*(code *)PTR_guard_check_icall_1035d810)(local_a4);
              (*pcVar3)();
              local_fc = local_fc | 0x4010;
              local_8 = 9;
              local_f8 = (code *****)local_a4;
              if (0xf < local_90) {
                local_f8 = local_a4[0];
              }
              local_110 = local_fc;
              if ((char)param_2[1] == '\0') {
                local_f4 = (int *****)*param_2;
                if ((int ******)local_f4 == (int ******)0x0) {
LAB_10252ab0:
                  *param_2 = 0;
                }
                else {
                  if (((int ****)*local_f4[7] == (int ****)0x0) || ((int)*local_f4[0xb] < 1)) {
                    ppppiVar5 = (int ****)(*local_f4)[6];
                    (*(code *)PTR_guard_check_icall_1035d810)();
                    uVar11 = (*(code *)ppppiVar5)();
                  }
                  else {
                    uVar11 = (uint)*(byte *)*local_f4[7];
                  }
                  if (uVar11 == 0xffffffff) goto LAB_10252ab0;
                  *(char *)((int)param_2 + 5) = (char)uVar11;
                }
                *(undefined1 *)(param_2 + 1) = 1;
              }
              local_ed = '\x01';
              if (*(char *)local_f8 != *(char *)((int)param_2 + 5)) goto LAB_10252ace;
            }
            if ((local_fc & 0x10) != 0) {
              local_110 = local_fc & 0xffffffef;
              local_fc = local_110;
              FUN_10004e60();
            }
            local_8 = 3;
            if ((local_fc & 8) != 0) {
              local_110 = local_fc & 0xfffffff7;
              local_fc = local_110;
              FUN_10004e60();
            }
            if (local_ed == '\0') {
              pcVar3 = *(code **)(*local_104 + 0x1c);
              (*(code *)PTR_guard_check_icall_1035d810)(local_d4);
              (*pcVar3)();
              local_fc = local_fc | 0x8020;
              local_8 = CONCAT31(local_8._1_3_,10);
              local_110 = local_fc;
              if (local_c4 == 0) {
LAB_10252cf4:
                local_ed = '\0';
              }
              else {
                pcVar3 = *(code **)(*local_104 + 0x20);
                (*(code *)PTR_guard_check_icall_1035d810)(local_74);
                (*pcVar3)();
                local_fc = local_fc | 0x10040;
                local_ed = '\x01';
                local_110 = local_fc;
                if (local_64 != 0) goto LAB_10252cf4;
              }
              local_110 = local_fc;
              if ((local_fc & 0x40) != 0) {
                local_110 = local_fc & 0xffffffbf;
                local_fc = local_110;
                FUN_10004e60();
              }
              local_8 = 3;
              if ((local_fc & 0x20) != 0) {
                local_110 = local_fc & 0xffffffdf;
                local_fc = local_110;
                FUN_10004e60();
              }
              if (local_ed != '\0') {
                local_111 = '\x01';
              }
              break;
            }
            local_f4 = (int *****)*param_2;
            if ((int ******)local_f4 == (int ******)0x0) {
LAB_10252b77:
              *param_2 = 0;
              uVar7 = 1;
            }
            else {
              if ((int ****)*local_f4[7] == (int ****)0x0) {
LAB_10252b59:
                ppppiVar5 = (int ****)(*local_f4)[7];
                (*(code *)PTR_guard_check_icall_1035d810)();
                uVar11 = (*(code *)ppppiVar5)();
              }
              else {
                ppppiVar5 = (int ****)*local_f4[0xb];
                if ((int)ppppiVar5 < 1) goto LAB_10252b59;
                *local_f4[0xb] = (int ***)((int)ppppiVar5 + -1);
                ppppiVar5 = (int ****)*local_f4[7];
                *local_f4[7] = (int ***)((int)ppppiVar5 + 1);
                uVar11 = (uint)*(byte *)ppppiVar5;
              }
              if (uVar11 == 0xffffffff) goto LAB_10252b77;
              uVar7 = 0;
            }
            *(undefined1 *)(param_2 + 1) = uVar7;
            pcVar3 = *(code **)(*local_104 + 0x20);
            (*(code *)PTR_guard_check_icall_1035d810)(local_74);
            (*pcVar3)();
            local_110 = local_fc | 0x2000;
            local_fc = local_110;
            if (local_18 < 0x10) {
LAB_10252c36:
              local_1c = 0;
              local_18 = 0xf;
              local_2c = (int *****)((uint)local_2c & 0xffffff00);
              FUN_1022d2e0(local_74);
              FUN_10004e60();
              local_111 = '\x01';
              break;
            }
            local_f4 = local_2c;
            if (DAT_103235d4 != '\0') {
              pcVar21 = (char *)(local_18 + 1 + (int)local_2c);
              pcVar13 = (char *)((int)local_2c + local_1c + 1);
              pcVar18 = (char *)((uint)(pcVar21 + 7) & 0xfffffff8);
              pcVar9 = pcVar18;
              if (pcVar13 <= pcVar18) {
                pcVar9 = pcVar13;
              }
              if (pcVar18 < pcVar21) {
                pcVar21 = pcVar18;
              }
              guard_check_icall(local_2c,pcVar18,pcVar9,pcVar21);
            }
            uVar11 = local_18 + 1;
            ppppppiVar22 = (int ******)local_2c;
            if (uVar11 < 0x1000) {
LAB_10252c2c:
              FUN_102283a0(ppppppiVar22,uVar11);
              goto LAB_10252c36;
            }
            ppppppiVar22 = (int ******)local_2c[-1];
            uVar11 = local_18 + 0x24;
            if ((char *)((int)local_2c + (-4 - (int)ppppppiVar22)) < (char *)0x20)
            goto LAB_10252c2c;
LAB_10253a2d:
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)();
            goto LAB_10253a34;
          }
          local_f4 = (int *****)*param_2;
          if ((int ******)local_f4 == (int ******)0x0) {
LAB_102528ad:
            *param_2 = 0;
            uVar7 = 1;
          }
          else {
            if ((int ****)*local_f4[7] == (int ****)0x0) {
LAB_1025288f:
              ppppiVar5 = (int ****)(*local_f4)[7];
              (*(code *)PTR_guard_check_icall_1035d810)();
              uVar11 = (*(code *)ppppiVar5)();
            }
            else {
              ppppiVar5 = (int ****)*local_f4[0xb];
              if ((int)ppppiVar5 < 1) goto LAB_1025288f;
              *local_f4[0xb] = (int ***)((int)ppppiVar5 + -1);
              ppppiVar5 = (int ****)*local_f4[7];
              *local_f4[7] = (int ***)((int)ppppiVar5 + 1);
              uVar11 = (uint)*(byte *)ppppiVar5;
            }
            if (uVar11 == 0xffffffff) goto LAB_102528ad;
            uVar7 = 0;
          }
          *(undefined1 *)(param_2 + 1) = uVar7;
          pcVar3 = *(code **)(*local_104 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)(local_74);
          (*pcVar3)();
          local_110 = local_fc | 0x800;
          local_fc = local_110;
          if (0xf < local_18) {
            local_f4 = local_2c;
            if (DAT_103235d4 != '\0') {
              pcVar21 = (char *)(local_18 + 1 + (int)local_2c);
              pcVar13 = (char *)((int)local_2c + local_1c + 1);
              pcVar18 = (char *)((uint)(pcVar21 + 7) & 0xfffffff8);
              pcVar9 = pcVar18;
              if (pcVar13 <= pcVar18) {
                pcVar9 = pcVar13;
              }
              if (pcVar18 < pcVar21) {
                pcVar21 = pcVar18;
              }
              guard_check_icall(local_2c,pcVar18,pcVar9,pcVar21);
            }
            uVar11 = local_18 + 1;
            ppppppiVar22 = (int ******)local_2c;
            if (0xfff < uVar11) {
              ppppppiVar22 = (int ******)local_2c[-1];
              uVar11 = local_18 + 0x24;
              if ((char *)0x1f < (char *)((int)local_2c + (-4 - (int)ppppppiVar22)))
              goto LAB_10253a2d;
            }
            FUN_102283a0(ppppppiVar22,uVar11);
          }
          uVar11 = local_60;
          local_2c = (int *****)((uint)local_2c & 0xffffff00);
          if (local_60 < 0x10) {
            FUN_1025b2d0(&local_2c,local_74,local_64 + 1);
          }
          else {
            local_2c = local_74[0];
          }
          local_18 = uVar11;
          local_1c = local_64;
          local_64 = 0;
          local_60 = 0xf;
          local_74[0] = (int *****)((uint)local_74[0] & 0xffffff00);
          FUN_10004e60();
        }
      }
      else if (*local_108 == 0) goto LAB_102526ea;
      break;
    case 'v':
      local_120 = 0;
      pcVar3 = *(code **)(*local_104 + 0x24);
      (*(code *)PTR_guard_check_icall_1035d810)();
      local_f8 = (code *****)(*pcVar3)();
      pcVar3 = *(code **)(*local_104 + 0x14);
      (*(code *)PTR_guard_check_icall_1035d810)(local_8c);
      (*pcVar3)();
      local_110 = local_fc | 0x100;
      local_8._0_1_ = 0xb;
      local_fc = local_110;
      if (local_7c != 0) {
        pcVar3 = *(code **)(*local_104 + 0x10);
        (*(code *)PTR_guard_check_icall_1035d810)();
        local_ed = (*pcVar3)();
        if (local_ed != '\0') {
          ppppppbVar20 = local_8c;
          if (0xf < local_78) {
            ppppppbVar20 = (byte ******)local_8c[0];
          }
          if (*(byte *)ppppppbVar20 < 0x7f) {
            local_34 = 0;
            uStack_40 = 0;
            uStack_3c = 0;
            uStack_38 = 0;
            local_30 = 0xf;
            local_44 = (char *****)0x0;
            local_8 = CONCAT31(local_8._1_3_,0xc);
            FUN_1022d270(0,1);
            local_34 = 1;
            ppppppcVar10 = &local_44;
            if (0xf < local_30) {
              ppppppcVar10 = (char ******)local_44;
            }
            local_124 = 0;
            *(undefined2 *)ppppppcVar10 = 0;
LAB_10252e57:
            if ((char)param_2[1] == '\0') {
              local_f4 = (int *****)*param_2;
              if ((int ******)local_f4 == (int ******)0x0) {
LAB_10252e9e:
                *param_2 = 0;
              }
              else {
                if (((int ****)*local_f4[7] == (int ****)0x0) || ((int)*local_f4[0xb] < 1)) {
                  ppppiVar5 = (int ****)(*local_f4)[6];
                  (*(code *)PTR_guard_check_icall_1035d810)();
                  uVar11 = (*(code *)ppppiVar5)();
                }
                else {
                  uVar11 = (uint)*(byte *)*local_f4[7];
                }
                if (uVar11 == 0xffffffff) goto LAB_10252e9e;
                *(char *)((int)param_2 + 5) = (char)uVar11;
              }
              *(undefined1 *)(param_2 + 1) = 1;
            }
            if ((char)local_108[1] == '\0') {
              FUN_100e1fa2();
            }
            local_f4 = (int *****)*param_2;
            if ((int ******)local_f4 == (int ******)0x0) {
              if (*local_108 == 0) goto LAB_10252ed9;
            }
            else if (*local_108 != 0) goto LAB_10252ed9;
            if ((char)param_2[1] == '\0') {
              if ((int ******)local_f4 == (int ******)0x0) {
LAB_10252fcb:
                *param_2 = 0;
              }
              else {
                if (((int ****)*local_f4[7] == (int ****)0x0) || ((int)*local_f4[0xb] < 1)) {
                  ppppiVar5 = (int ****)(*local_f4)[6];
                  (*(code *)PTR_guard_check_icall_1035d810)();
                  uVar11 = (*(code *)ppppiVar5)();
                }
                else {
                  uVar11 = (uint)*(byte *)*local_f4[7];
                }
                if (uVar11 == 0xffffffff) goto LAB_10252fcb;
                *(char *)((int)param_2 + 5) = (char)uVar11;
              }
              *(undefined1 *)(param_2 + 1) = 1;
            }
            iVar17 = local_134;
            iVar8 = FUN_102298a0(local_134,local_134 + 0xb,*(undefined1 *)((int)param_2 + 5));
            if ((uint)(iVar8 - iVar17) < 10) {
              cVar2 = "0123456789-"[iVar8 - iVar17];
              local_12c = local_10c[4];
              if (local_12c < (uint)local_10c[5]) {
                local_100 = (int *)(local_12c + 1);
                if (((int *)local_12c != local_100) && (0xf < (uint)local_10c[5])) {
                  local_f4 = (int *****)*local_10c;
                  if (DAT_103235d4 != '\0') {
                    pcVar13 = (char *)(local_12c + 1 + (int)local_f4);
                    pcVar21 = (char *)((int)local_f4 + local_12c + 2);
                    pcVar18 = (char *)((uint)((int)local_f4 + local_10c[5] + 8) & 0xfffffff8);
                    pcVar9 = pcVar18;
                    if (pcVar13 <= pcVar18) {
                      pcVar9 = pcVar13;
                    }
                    if (pcVar18 < pcVar21) {
                      pcVar21 = pcVar18;
                    }
                    guard_check_icall(local_f4,pcVar18,pcVar9,pcVar21);
                    param_2 = local_140;
                  }
                }
                local_10c[4] = local_100;
                puVar14 = local_10c;
                if (0xf < (uint)local_10c[5]) {
                  puVar14 = (undefined4 *)*local_10c;
                }
                ((char *)(local_12c + (int)puVar14))[1] = '\0';
                *(char *)(local_12c + (int)puVar14) = cVar2;
              }
              else {
                FUN_10232b40(1,local_130,cVar2);
              }
              ppppppcVar10 = &local_44;
              if (0xf < local_30) {
                ppppppcVar10 = (char ******)local_44;
              }
              if (*(char *)((int)ppppppcVar10 + local_124) != '\x7f') {
                ppppppcVar10 = &local_44;
                if (0xf < local_30) {
                  ppppppcVar10 = (char ******)local_44;
                }
                *(char *)((int)ppppppcVar10 + local_124) =
                     *(char *)((int)ppppppcVar10 + local_124) + '\x01';
              }
            }
            else {
              ppppppcVar10 = &local_44;
              if (0xf < local_30) {
                ppppppcVar10 = (char ******)local_44;
              }
              if (*(char *)((int)ppppppcVar10 + local_124) == '\0') goto LAB_10252ed9;
              if ((char)param_2[1] == '\0') {
                local_100 = (int *)*param_2;
                if (local_100 == (int *)0x0) {
LAB_1025315e:
                  *param_2 = 0;
                }
                else {
                  if ((*(byte **)local_100[7] == (byte *)0x0) || (*(int *)local_100[0xb] < 1)) {
                    pcVar3 = *(code **)(*local_100 + 0x18);
                    (*(code *)PTR_guard_check_icall_1035d810)();
                    uVar11 = (*pcVar3)();
                  }
                  else {
                    uVar11 = (uint)**(byte **)local_100[7];
                  }
                  if (uVar11 == 0xffffffff) goto LAB_1025315e;
                  *(char *)((int)param_2 + 5) = (char)uVar11;
                }
                *(undefined1 *)(param_2 + 1) = 1;
              }
              if (*(char *)((int)param_2 + 5) != local_ed) goto LAB_10252ed9;
              local_100 = (int *)local_34;
              if (local_34 < local_30) {
                local_12c = local_34 + 1;
                if (((local_34 != local_34 + 1) && (0xf < local_30)) && (DAT_103235d4 != '\0')) {
                  pcVar13 = (char *)((int)local_44 + local_34 + 1);
                  pcVar21 = (char *)((int)local_44 + local_34 + 2);
                  pcVar18 = (char *)((uint)((int)local_44 + local_30 + 8) & 0xfffffff8);
                  pcVar9 = pcVar18;
                  if (pcVar13 <= pcVar18) {
                    pcVar9 = pcVar13;
                  }
                  if (pcVar18 < pcVar21) {
                    pcVar21 = pcVar18;
                  }
                  guard_check_icall(local_44,pcVar18,pcVar9,pcVar21);
                }
                local_34 = local_12c;
                ppppppcVar10 = &local_44;
                if (0xf < local_30) {
                  ppppppcVar10 = (char ******)local_44;
                }
                ((char *)((int)ppppppcVar10 + (int)local_100))[0] = '\0';
                ((char *)((int)ppppppcVar10 + (int)local_100))[1] = '\0';
              }
              else {
                FUN_10232b40(1,local_130,0);
              }
              local_124 = local_124 + 1;
            }
            local_100 = (int *)*param_2;
            if (local_100 == (int *)0x0) {
LAB_1025325c:
              *param_2 = 0;
              *(undefined1 *)(param_2 + 1) = 1;
            }
            else {
              if (*(int *)local_100[7] == 0) {
LAB_10253239:
                pcVar3 = *(code **)(*local_100 + 0x1c);
                (*(code *)PTR_guard_check_icall_1035d810)();
                uVar11 = (*pcVar3)();
              }
              else {
                iVar17 = *(int *)local_100[0xb];
                if (iVar17 < 1) goto LAB_10253239;
                *(int *)local_100[0xb] = iVar17 + -1;
                pbVar6 = *(byte **)local_100[7];
                *(byte **)local_100[7] = pbVar6 + 1;
                uVar11 = (uint)*pbVar6;
              }
              if (uVar11 == 0xffffffff) goto LAB_1025325c;
              *(undefined1 *)(param_2 + 1) = 0;
            }
            goto LAB_10252e57;
          }
        }
      }
LAB_10253303:
      if ((char)param_2[1] == '\0') {
        local_100 = (int *)*param_2;
        if (local_100 == (int *)0x0) {
LAB_1025334a:
          *param_2 = 0;
        }
        else {
          if ((*(byte **)local_100[7] == (byte *)0x0) || (*(int *)local_100[0xb] < 1)) {
            pcVar3 = *(code **)(*local_100 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar11 = (*pcVar3)();
          }
          else {
            uVar11 = (uint)**(byte **)local_100[7];
          }
          if (uVar11 == 0xffffffff) goto LAB_1025334a;
          *(char *)((int)param_2 + 5) = (char)uVar11;
        }
        *(undefined1 *)(param_2 + 1) = 1;
      }
      if ((char)local_108[1] == '\0') {
        FUN_100e1fa2();
      }
      local_100 = (int *)*param_2;
      if (local_100 == (int *)0x0) {
        if (*local_108 == 0) goto LAB_102532a7;
      }
      else if (*local_108 != 0) goto LAB_102532a7;
      if ((char)param_2[1] == '\0') {
        if (local_100 == (int *)0x0) {
LAB_102533cb:
          *param_2 = 0;
        }
        else {
          if ((*(byte **)local_100[7] == (byte *)0x0) || (*(int *)local_100[0xb] < 1)) {
            pcVar3 = *(code **)(*local_100 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar11 = (*pcVar3)();
          }
          else {
            uVar11 = (uint)**(byte **)local_100[7];
          }
          if (uVar11 == 0xffffffff) goto LAB_102533cb;
          *(char *)((int)param_2 + 5) = (char)uVar11;
        }
        *(undefined1 *)(param_2 + 1) = 1;
      }
      iVar17 = local_134;
      local_144 = (int *****)CONCAT31(local_144._1_3_,*(undefined1 *)((int)param_2 + 5));
      iVar8 = FUN_102298a0(local_134,local_134 + 0xb,local_144);
      if (9 < (uint)(iVar8 - iVar17)) goto LAB_102532a7;
      cVar2 = "0123456789-"[iVar8 - iVar17];
      local_100 = (int *)local_10c[4];
      if (local_100 < (uint)local_10c[5]) {
        local_12c = (int)local_100 + 1;
        if (((local_100 != (int *)local_12c) && (0xf < (uint)local_10c[5])) &&
           (local_f4 = (int *****)*local_10c, DAT_103235d4 != '\0')) {
          pcVar13 = (char *)((int)local_100 + 1U + (int)local_f4);
          pcVar21 = (char *)((int)local_f4 + (int)local_100 + 2U);
          pcVar18 = (char *)((uint)((int)local_f4 + local_10c[5] + 8) & 0xfffffff8);
          pcVar9 = pcVar18;
          if (pcVar13 <= pcVar18) {
            pcVar9 = pcVar13;
          }
          if (pcVar18 < pcVar21) {
            pcVar21 = pcVar18;
          }
          guard_check_icall(local_f4,pcVar18,pcVar9,pcVar21);
          param_2 = local_140;
        }
        local_10c[4] = local_12c;
        puVar14 = local_10c;
        if (0xf < (uint)local_10c[5]) {
          puVar14 = (undefined4 *)*local_10c;
        }
        ((char *)((int)local_100 + (int)puVar14))[1] = '\0';
        *(char *)((int)local_100 + (int)puVar14) = cVar2;
      }
      else {
        FUN_10232b40(1,local_130,cVar2);
      }
      local_100 = (int *)*param_2;
      if (local_100 == (int *)0x0) {
LAB_1025351e:
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
      }
      else {
        if (*(int *)local_100[7] == 0) {
LAB_102534fb:
          pcVar3 = *(code **)(*local_100 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar11 = (*pcVar3)();
        }
        else {
          iVar17 = *(int *)local_100[0xb];
          if (iVar17 < 1) goto LAB_102534fb;
          *(int *)local_100[0xb] = iVar17 + -1;
          pbVar6 = *(byte **)local_100[7];
          *(byte **)local_100[7] = pbVar6 + 1;
          uVar11 = (uint)*pbVar6;
        }
        if (uVar11 == 0xffffffff) goto LAB_1025351e;
        *(undefined1 *)(param_2 + 1) = 0;
      }
      goto LAB_10253303;
    }
    goto switchD_10252274_caseD_21;
  }
LAB_10253a34:
  if (local_1c < 2) goto LAB_10253b55;
  ppppppiVar22 = &local_2c;
  if (0xf < local_18) {
    ppppppiVar22 = (int ******)local_2c;
  }
  goto LAB_10253a50;
LAB_10252ed9:
  iVar17 = local_124;
  if (local_124 != 0) {
    ppppppcVar10 = &local_44;
    if (0xf < local_30) {
      ppppppcVar10 = (char ******)local_44;
    }
    if (*(char *)((int)ppppppcVar10 + local_124) < '\x01') {
      local_11c = CONCAT31((int3)((uint)ppppppcVar10 >> 8),1);
    }
    else {
      iVar17 = local_124 + 1;
    }
  }
  ppppppbVar20 = local_8c;
  if (0xf < local_78) {
    ppppppbVar20 = (byte ******)local_8c[0];
  }
  if ((char)local_11c != '\0') {
LAB_1025327f:
    FUN_10004e60();
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_10004e60();
    goto switchD_10252274_caseD_21;
  }
  while ((iVar17 != 0 && (bVar1 = *(byte *)ppppppbVar20, bVar1 != 0x7f))) {
    iVar17 = iVar17 + -1;
    local_124 = iVar17;
    if (iVar17 != 0) {
      ppppppcVar10 = &local_44;
      if (0xf < local_30) {
        ppppppcVar10 = (char ******)local_44;
      }
      param_2 = local_140;
      if (bVar1 == *(byte *)((int)ppppppcVar10 + iVar17)) goto LAB_10252f58;
LAB_10253278:
      local_11c = CONCAT31(local_11c._1_3_,1);
      goto LAB_1025327f;
    }
LAB_10252f58:
    if (iVar17 == 0) {
      ppppppcVar10 = &local_44;
      if (0xf < local_30) {
        ppppppcVar10 = (char ******)local_44;
      }
      if ((char)bVar1 < *(char *)ppppppcVar10) goto LAB_10253278;
    }
    iVar17 = local_124;
    if ('\0' < (char)*(byte *)((int)ppppppbVar20 + 1)) {
      ppppppbVar20 = (byte ******)((int)ppppppbVar20 + 1);
    }
  }
  local_8._0_1_ = 0xb;
  FUN_10004e60();
LAB_102532a7:
  pcVar3 = *(code **)(*local_104 + 0xc);
  (*(code *)PTR_guard_check_icall_1035d810)();
  local_ed = (*pcVar3)();
  if ((char)param_2[1] == '\0') {
    local_100 = (int *)*param_2;
    if (local_100 == (int *)0x0) {
LAB_1025354c:
      *param_2 = 0;
    }
    else {
      if ((*(byte **)local_100[7] == (byte *)0x0) || (*(int *)local_100[0xb] < 1)) {
        pcVar3 = *(code **)(*local_100 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar11 = (*pcVar3)();
      }
      else {
        uVar11 = (uint)**(byte **)local_100[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_1025354c;
      *(char *)((int)param_2 + 5) = (char)uVar11;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)local_108[1] == '\0') {
    FUN_100e1fa2();
  }
  local_100 = (int *)*param_2;
  ppppppcVar19 = (code ******)local_f8;
  if (local_100 == (int *)0x0) {
    if (*local_108 != 0) {
LAB_102535bb:
      if (local_ed != '\0') {
        if ((char)param_2[1] == '\0') {
          if (local_100 == (int *)0x0) {
LAB_10253604:
            *param_2 = 0;
          }
          else {
            if ((*(byte **)local_100[7] == (byte *)0x0) || (*(int *)local_100[0xb] < 1)) {
              pcVar3 = *(code **)(*local_100 + 0x18);
              (*(code *)PTR_guard_check_icall_1035d810)();
              uVar11 = (*pcVar3)();
            }
            else {
              uVar11 = (uint)**(byte **)local_100[7];
            }
            if (uVar11 == 0xffffffff) goto LAB_10253604;
            *(char *)((int)param_2 + 5) = (char)uVar11;
          }
          *(undefined1 *)(param_2 + 1) = 1;
        }
        ppppppcVar19 = (code ******)local_f8;
        if (*(char *)((int)param_2 + 5) == local_ed) {
LAB_10253620:
          local_100 = (int *)*param_2;
          if (local_100 == (int *)0x0) {
LAB_10253676:
            *param_2 = 0;
            *(undefined1 *)(param_2 + 1) = 1;
          }
          else {
            if (*(int *)local_100[7] == 0) {
LAB_1025364f:
              pcVar3 = *(code **)(*local_100 + 0x1c);
              (*(code *)PTR_guard_check_icall_1035d810)();
              uVar11 = (*pcVar3)();
            }
            else {
              iVar17 = *(int *)local_100[0xb];
              if (iVar17 < 1) goto LAB_1025364f;
              *(int *)local_100[0xb] = iVar17 + -1;
              pbVar6 = *(byte **)local_100[7];
              *(byte **)local_100[7] = pbVar6 + 1;
              uVar11 = (uint)*pbVar6;
            }
            if (uVar11 == 0xffffffff) goto LAB_10253676;
            *(undefined1 *)(param_2 + 1) = 0;
            FUN_100e1fa2();
          }
          if ((char)local_108[1] == '\0') {
            FUN_100e1fa2();
          }
          local_100 = (int *)*param_2;
          ppppppcVar19 = (code ******)local_f8;
          if (local_100 == (int *)0x0) {
            if (*local_108 == 0) {
LAB_102536a9:
              if (local_120 < (int)local_f8) {
                local_11c = CONCAT31(local_11c._1_3_,1);
              }
              goto LAB_1025358b;
            }
          }
          else if (*local_108 != 0) goto LAB_102536a9;
          if ((int)local_f8 <= local_120) goto LAB_1025358b;
          if ((char)param_2[1] == '\0') {
            if (local_100 == (int *)0x0) {
LAB_10253727:
              *param_2 = 0;
            }
            else {
              if ((*(byte **)local_100[7] == (byte *)0x0) || (*(int *)local_100[0xb] < 1)) {
                pcVar3 = *(code **)(*local_100 + 0x18);
                (*(code *)PTR_guard_check_icall_1035d810)();
                uVar11 = (*pcVar3)();
              }
              else {
                uVar11 = (uint)**(byte **)local_100[7];
              }
              if (uVar11 == 0xffffffff) goto LAB_10253727;
              *(char *)((int)param_2 + 5) = (char)uVar11;
            }
            *(undefined1 *)(param_2 + 1) = 1;
          }
          ppppppcVar19 = (code ******)local_f8;
          local_138 = (code *****)CONCAT31(local_138._1_3_,*(undefined1 *)((int)param_2 + 5));
          iVar17 = FUN_102298a0(local_134,local_134 + 0xb,local_138);
          if ((uint)(iVar17 - local_134) < 10) {
            local_128 = (undefined4 *)CONCAT31(local_128._1_3_,"0123456789-"[iVar17 - local_134]);
            local_100 = (int *)local_10c[4];
            if (local_100 < (uint)local_10c[5]) {
              iVar17 = (int)local_100 + 1;
              FUN_1022d270(local_100,iVar17);
              local_10c[4] = iVar17;
              puVar14 = local_10c;
              if (0xf < (uint)local_10c[5]) {
                puVar14 = (undefined4 *)*local_10c;
              }
              local_120 = local_120 + 1;
              *(undefined1 *)((int)local_100 + (int)puVar14) = local_128._0_1_;
              ((undefined1 *)((int)local_100 + (int)puVar14))[1] = 0;
            }
            else {
              FUN_10232b40(1,local_130,local_128);
              local_120 = local_120 + 1;
            }
            goto LAB_10253620;
          }
          local_11c = CONCAT31(local_11c._1_3_,1);
        }
      }
    }
  }
  else if (*local_108 == 0) goto LAB_102535bb;
LAB_1025358b:
  puVar14 = local_10c;
  if (local_10c[4] == 0) {
    local_11c = CONCAT31(local_11c._1_3_,1);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_10004e60();
  }
  else {
    if (local_120 < (int)ppppppcVar19) {
      do {
        local_100 = (int *)puVar14[4];
        if (local_100 < (int *)puVar14[5]) {
          iVar17 = (int)local_100 + 1;
          FUN_1022d270(local_100,iVar17);
          puVar14[4] = iVar17;
          puVar15 = puVar14;
          if (0xf < (uint)puVar14[5]) {
            puVar15 = (undefined4 *)*puVar14;
          }
          *(undefined2 *)((int)puVar15 + (int)local_100) = 0x30;
          ppppppcVar19 = (code ******)local_f8;
        }
        else {
          FUN_10232b40(1,local_130,0x30);
        }
        local_120 = local_120 + 1;
        param_2 = local_140;
      } while (local_120 < (int)ppppppcVar19);
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_10004e60();
  }
  goto switchD_10252274_caseD_21;
LAB_1025253a:
  ppppppcVar12 = local_5c;
  if (0xf < local_48) {
    ppppppcVar12 = (code ******)local_5c[0];
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  local_11c = local_11c & 0xff;
  if (ppppppcVar19 != (code ******)((int)ppppppcVar12 + local_4c)) {
    local_11c = 1;
  }
  FUN_10004e60();
switchD_10252274_caseD_21:
  local_118 = local_118 + 1;
  if ((char)local_11c != '\0') goto code_r0x10253948;
  goto LAB_10252250;
LAB_10253900:
  if (local_14c[local_118] == ' ') {
    uVar7 = (undefined1)local_11c;
    if (local_ed == '\0') {
      uVar7 = 1;
    }
    local_11c = CONCAT31(local_11c._1_3_,uVar7);
  }
  goto switchD_10252274_caseD_21;
code_r0x10253948:
  FUN_1022dcf0(0);
  goto LAB_10253b6f;
LAB_10253a50:
  ppppppiVar22 = (int ******)((int)ppppppiVar22 + 1);
  local_144 = (int *****)ppppppiVar22;
  ppppppiVar16 = &local_2c;
  if (0xf < local_18) {
    ppppppiVar16 = (int ******)local_2c;
  }
  if (ppppppiVar22 != (int ******)(local_1c + (int)ppppppiVar16)) {
    if ((char)param_2[1] == '\0') {
      FUN_100e1fa2();
    }
    if ((char)local_108[1] == '\0') {
      FUN_100e1fa2();
    }
    if (*param_2 == 0) {
      if (*local_108 == 0) goto LAB_10253a9b;
    }
    else if (*local_108 != 0) goto LAB_10253a9b;
    if ((char)param_2[1] == '\0') {
      FUN_100e1fa2();
    }
    if (*(char *)((int)param_2 + 5) != *(char *)ppppppiVar22) goto LAB_10253a9b;
    local_138 = (code *****)*param_2;
    if ((code ******)local_138 == (code ******)0x0) {
LAB_10253b3e:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    else {
      if ((code ****)*local_138[7] == (code ****)0x0) {
LAB_10253b0d:
        ppppcVar4 = (code ****)(*local_138)[7];
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar11 = (*(code *)ppppcVar4)();
      }
      else {
        ppppcVar4 = (code ****)*local_138[0xb];
        if ((int)ppppcVar4 < 1) goto LAB_10253b0d;
        *local_138[0xb] = (code ***)((int)ppppcVar4 + -1);
        ppppcVar4 = (code ****)*local_138[7];
        *local_138[7] = (code ***)((int)ppppcVar4 + 1);
        uVar11 = (uint)*(byte *)ppppcVar4;
        local_144 = (int *****)ppppppiVar22;
      }
      ppppppiVar22 = (int ******)local_144;
      if (uVar11 == 0xffffffff) goto LAB_10253b3e;
      *(undefined1 *)(param_2 + 1) = 0;
    }
    goto LAB_10253a50;
  }
LAB_10253a9b:
  ppppppiVar16 = &local_2c;
  if (0xf < local_18) {
    ppppppiVar16 = (int ******)local_2c;
  }
  if (ppppppiVar22 == (int ******)(local_1c + (int)ppppppiVar16)) {
LAB_10253b55:
    if (local_111 != '\0') {
      FUN_1007ce2a(0,1,0x2d);
    }
  }
  else {
    FUN_1022dcf0(0);
  }
LAB_10253b6f:
  FUN_10004e60();
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

