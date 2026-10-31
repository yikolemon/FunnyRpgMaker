/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023b790 */

void FUN_1023b790(undefined4 *param_1,int *param_2,int *param_3,char param_4,int param_5,int param_6
                 )

{
  byte bVar1;
  code *pcVar2;
  byte ****ppppbVar3;
  int ****ppppiVar4;
  short *psVar5;
  undefined1 uVar6;
  char cVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  char ******ppppppcVar14;
  char *pcVar15;
  byte *pbVar16;
  int iVar17;
  code ******ppppppcVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int ******ppppppiVar21;
  char *pcVar22;
  uint uVar23;
  byte *pbVar24;
  code ******ppppppcVar25;
  byte ******ppppppbVar26;
  char *pcVar27;
  byte *pbVar28;
  int ******ppppppiVar29;
  char local_14c [4];
  undefined4 local_148;
  uint local_144;
  int *local_140;
  int local_13c;
  undefined4 *local_138;
  undefined4 *local_134;
  int local_130;
  uint local_12c;
  int local_128;
  int *****local_124;
  int *local_120;
  uint local_11c;
  char local_115;
  undefined1 local_114 [4];
  byte *****local_110;
  uint local_10c;
  undefined4 *local_108;
  code *****local_104;
  int *local_100;
  int *local_fc;
  uint local_f8;
  char local_f1;
  byte *****local_f0;
  undefined1 local_ec [16];
  int local_dc;
  undefined1 local_d4 [16];
  int local_c4;
  code *****local_bc [5];
  uint local_a8;
  code *****local_a4 [5];
  uint local_90;
  undefined1 local_8c [16];
  int local_7c;
  byte *****local_74 [4];
  int local_64;
  uint local_60;
  int *****local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_4c;
  uint local_48;
  code *****local_44 [4];
  int local_34;
  uint local_30;
  char *****local_2c;
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
  puStack_c = &DAT_10289912;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_138 = param_1;
  local_108 = param_1;
  local_100 = param_3;
  local_13c = param_6;
  local_10c = 0;
  local_140 = param_2;
  local_120 = *(int **)(*(int *)(param_5 + 0x30) + 4);
  pcVar2 = *(code **)(*local_120 + 4);
  local_110 = (byte *****)local_120;
  (*(code *)PTR_guard_check_icall_1035d810)(local_14);
  (*pcVar2)();
  if (param_4 == '\0') {
    local_8 = 2;
    local_fc = (int *)FUN_1023edb0(local_114);
  }
  else {
    local_8 = 1;
    local_fc = (int *)FUN_1023efb0(local_114);
  }
  pcVar2 = *(code **)(*local_120 + 8);
  (*(code *)PTR_guard_check_icall_1035d810)();
  local_134 = (undefined4 *)(*pcVar2)();
  if (local_134 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*local_134;
    (*(code *)PTR_guard_check_icall_1035d810)(1);
    (*pcVar2)();
  }
  local_12c = local_12c & 0xffffff00;
  local_115 = '\0';
  local_4c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  local_48 = 7;
  local_5c = (int *****)0x0;
  local_8 = 3;
  pcVar2 = *(code **)(*local_fc + 0x2c);
  (*(code *)PTR_guard_check_icall_1035d810)(local_14c);
  (*pcVar2)();
  *local_108 = 0;
  local_108[1] = 0;
  local_108[2] = 0;
  local_108[3] = 0;
  local_108[4] = 0;
  local_108[5] = 0xf;
  *(undefined1 *)local_108 = 0;
  local_f8 = 1;
  local_10c = 1;
  local_110 = *(byte ******)(*(int *)(param_5 + 0x30) + 4);
  ppppbVar3 = (byte ****)(*local_110)[1];
  local_f0 = local_110;
  (*(code *)PTR_guard_check_icall_1035d810)();
  (*(code *)ppppbVar3)();
  local_8._0_1_ = 4;
  local_120 = (int *)FUN_10091ec2(local_114);
  local_8._0_1_ = 3;
  ppppbVar3 = (byte ****)(*local_f0)[2];
  (*(code *)PTR_guard_check_icall_1035d810)();
  local_134 = (undefined4 *)(*(code *)ppppbVar3)();
  if (local_134 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*local_134;
    (*(code *)PTR_guard_check_icall_1035d810)(1);
    (*pcVar2)();
  }
  pcVar2 = *(code **)(*local_120 + 0x2c);
  (*(code *)PTR_guard_check_icall_1035d810)("0123456789-",&DAT_10301940,local_13c);
  (*pcVar2)();
  local_11c = 0;
LAB_1023b9c3:
  if (3 < local_11c) goto LAB_1023d351;
  switch(local_14c[local_11c]) {
  case ' ':
  case 'x':
    if (local_11c != 3) {
      local_f1 = '\0';
LAB_1023d176:
      if ((char)param_2[1] == '\0') {
        local_110 = (byte *****)*param_2;
        if ((byte ******)local_110 == (byte ******)0x0) {
LAB_1023d1c6:
          *param_2 = 0;
        }
        else {
          if (((byte ****)*local_110[7] == (byte ****)0x0) || ((int)*local_110[0xb] < 1)) {
            ppppbVar3 = (byte ****)(*local_110)[6];
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar10 = (*(code *)ppppbVar3)();
          }
          else {
            sVar10 = *(short *)*local_110[7];
          }
          if (sVar10 == -1) goto LAB_1023d1c6;
          *(short *)((int)param_2 + 6) = sVar10;
        }
        *(undefined1 *)(param_2 + 1) = 1;
      }
      if ((char)local_100[1] == '\0') {
        FUN_1023b0c0();
      }
      local_f0 = (byte *****)*param_2;
      if ((byte ******)local_f0 == (byte ******)0x0) {
        if (*local_100 == 0) goto LAB_1023d1f9;
      }
      else if (*local_100 != 0) goto LAB_1023d1f9;
      if ((char)param_2[1] == '\0') {
        if ((byte ******)local_f0 == (byte ******)0x0) {
LAB_1023d2a6:
          *param_2 = 0;
        }
        else {
          if (((byte ****)*local_f0[7] == (byte ****)0x0) || ((int)*local_f0[0xb] < 1)) {
            ppppbVar3 = (byte ****)(*local_f0)[6];
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar10 = (*(code *)ppppbVar3)();
          }
          else {
            sVar10 = *(short *)*local_f0[7];
          }
          if (sVar10 == -1) goto LAB_1023d2a6;
          *(short *)((int)param_2 + 6) = sVar10;
        }
        *(undefined1 *)(param_2 + 1) = 1;
      }
      pcVar2 = *(code **)(*local_120 + 0x10);
      (*(code *)PTR_guard_check_icall_1035d810)(0x48,*(undefined2 *)((int)param_2 + 6));
      cVar7 = (*pcVar2)();
      if (cVar7 == '\0') goto LAB_1023d1f9;
      local_110 = (byte *****)*param_2;
      local_f1 = '\x01';
      if ((byte ******)local_110 == (byte ******)0x0) {
LAB_1023d33b:
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
      }
      else {
        if ((byte ****)*local_110[7] == (byte ****)0x0) {
LAB_1023d310:
          ppppbVar3 = (byte ****)(*local_110)[7];
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar10 = (*(code *)ppppbVar3)();
        }
        else {
          ppppbVar3 = (byte ****)*local_110[0xb];
          if ((int)ppppbVar3 < 1) goto LAB_1023d310;
          *local_110[0xb] = (byte ***)((int)ppppbVar3 + -1);
          ppppbVar3 = (byte ****)*local_110[7];
          *local_110[7] = (byte ***)((int)ppppbVar3 + 2);
          sVar10 = *(short *)ppppbVar3;
        }
        if (sVar10 == -1) goto LAB_1023d33b;
        *(undefined1 *)(param_2 + 1) = 0;
      }
      goto LAB_1023d176;
    }
    break;
  case '$':
    pcVar2 = *(code **)(*local_fc + 0x18);
    (*(code *)PTR_guard_check_icall_1035d810)(local_44);
    (*pcVar2)();
    local_f8 = local_f8 | 0x80;
    local_10c = local_f8;
    local_8 = CONCAT31(local_8._1_3_,5);
    if ((*(byte *)(param_5 + 0x14) & 8) == 0) {
      if ((char)param_2[1] == '\0') {
        local_f0 = (byte *****)*param_2;
        if ((byte ******)local_f0 == (byte ******)0x0) {
LAB_1023ba85:
          *param_2 = 0;
        }
        else {
          if (((byte ****)*local_f0[7] == (byte ****)0x0) || ((int)*local_f0[0xb] < 1)) {
            ppppbVar3 = (byte ****)(*local_f0)[6];
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar10 = (*(code *)ppppbVar3)();
          }
          else {
            sVar10 = *(short *)*local_f0[7];
          }
          if (sVar10 == -1) goto LAB_1023ba85;
          *(short *)((int)param_2 + 6) = sVar10;
        }
        *(undefined1 *)(param_2 + 1) = 1;
      }
      if ((char)local_100[1] == '\0') {
        FUN_1023b0c0();
      }
      local_f0 = (byte *****)*param_2;
      if ((byte ******)local_f0 != (byte ******)0x0) {
        if (*local_100 == 0) goto LAB_1023babf;
        goto LAB_1023bb29;
      }
      if (*local_100 == 0) goto LAB_1023bb29;
LAB_1023babf:
      if ((char)param_2[1] == '\0') {
        if ((byte ******)local_f0 == (byte ******)0x0) {
LAB_1023bb07:
          *param_2 = 0;
        }
        else {
          if (((byte ****)*local_f0[7] == (byte ****)0x0) || ((int)*local_f0[0xb] < 1)) {
            ppppbVar3 = (byte ****)(*local_f0)[6];
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar10 = (*(code *)ppppbVar3)();
          }
          else {
            sVar10 = *(short *)*local_f0[7];
          }
          if (sVar10 == -1) goto LAB_1023bb07;
          *(short *)((int)param_2 + 6) = sVar10;
        }
        *(undefined1 *)(param_2 + 1) = 1;
      }
      ppppppcVar25 = local_44;
      if (7 < local_30) {
        ppppppcVar25 = (code ******)local_44[0];
      }
      if (*(short *)((int)param_2 + 6) == *(short *)ppppppcVar25) goto LAB_1023bb29;
    }
    else {
LAB_1023bb29:
      if ((local_11c != 3) || (1 < local_4c)) goto LAB_1023bc74;
      if ((char)param_2[1] == '\0') {
        local_f0 = (byte *****)*param_2;
        if ((byte ******)local_f0 == (byte ******)0x0) {
LAB_1023bb90:
          *param_2 = 0;
        }
        else {
          if (((byte ****)*local_f0[7] == (byte ****)0x0) || ((int)*local_f0[0xb] < 1)) {
            ppppbVar3 = (byte ****)(*local_f0)[6];
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar10 = (*(code *)ppppbVar3)();
          }
          else {
            sVar10 = *(short *)*local_f0[7];
          }
          if (sVar10 == -1) goto LAB_1023bb90;
          *(short *)((int)param_2 + 6) = sVar10;
        }
        *(undefined1 *)(param_2 + 1) = 1;
      }
      if ((char)local_100[1] == '\0') {
        FUN_1023b0c0();
      }
      local_f0 = (byte *****)*param_2;
      if ((byte ******)local_f0 == (byte ******)0x0) {
        if (*local_100 != 0) {
LAB_1023bbca:
          local_104 = (code *****)local_44;
          if (7 < local_30) {
            local_104 = local_44[0];
          }
          if ((char)param_2[1] == '\0') {
            if ((byte ******)local_f0 == (byte ******)0x0) {
LAB_1023bc29:
              *param_2 = 0;
            }
            else {
              if (((byte ****)*local_f0[7] == (byte ****)0x0) || ((int)*local_f0[0xb] < 1)) {
                ppppbVar3 = (byte ****)(*local_f0)[6];
                (*(code *)PTR_guard_check_icall_1035d810)();
                sVar10 = (*(code *)ppppbVar3)();
              }
              else {
                sVar10 = *(short *)*local_f0[7];
              }
              if (sVar10 == -1) goto LAB_1023bc29;
              *(short *)((int)param_2 + 6) = sVar10;
            }
            *(undefined1 *)(param_2 + 1) = 1;
          }
          if (*(short *)((int)param_2 + 6) == *(short *)local_104) goto LAB_1023bc74;
        }
      }
      else if (*local_100 == 0) goto LAB_1023bbca;
    }
    if (local_34 != 0) {
      ppppppcVar25 = local_44;
      if (7 < local_30) {
        ppppppcVar25 = (code ******)local_44[0];
      }
      FUN_10236190(ppppppcVar25,local_30,local_34,0);
    }
    local_34 = 0;
    ppppppcVar25 = local_44;
    if (7 < local_30) {
      ppppppcVar25 = (code ******)local_44[0];
    }
    *(short *)ppppppcVar25 = 0;
LAB_1023bc74:
    ppppppcVar25 = local_44;
    if (7 < local_30) {
      ppppppcVar25 = (code ******)local_44[0];
    }
LAB_1023bc80:
    if ((char)param_2[1] == '\0') {
      local_f0 = (byte *****)*param_2;
      if ((byte ******)local_f0 == (byte ******)0x0) {
LAB_1023bcda:
        *param_2 = 0;
      }
      else {
        if (((byte ****)*local_f0[7] == (byte ****)0x0) || ((int)*local_f0[0xb] < 1)) {
          local_104 = (code *****)(*local_f0)[6];
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar10 = (*(code *)local_104)();
        }
        else {
          sVar10 = *(short *)*local_f0[7];
        }
        if (sVar10 == -1) goto LAB_1023bcda;
        *(short *)((int)param_2 + 6) = sVar10;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)local_100[1] == '\0') {
      FUN_1023b0c0();
    }
    local_f0 = (byte *****)*param_2;
    if ((byte ******)local_f0 == (byte ******)0x0) {
      if (*local_100 == 0) goto LAB_1023bd0d;
    }
    else if (*local_100 != 0) goto LAB_1023bd0d;
    ppppppcVar18 = local_44;
    if (7 < local_30) {
      ppppppcVar18 = (code ******)local_44[0];
    }
    if (ppppppcVar25 == (code ******)((int)ppppppcVar18 + local_34 * 2)) goto LAB_1023bd0d;
    if ((char)param_2[1] == '\0') {
      if ((byte ******)local_f0 == (byte ******)0x0) {
LAB_1023bdb4:
        *param_2 = 0;
      }
      else {
        if (((byte ****)*local_f0[7] == (byte ****)0x0) || ((int)*local_f0[0xb] < 1)) {
          local_104 = (code *****)(*local_f0)[6];
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar10 = (*(code *)local_104)();
        }
        else {
          sVar10 = *(short *)*local_f0[7];
        }
        if (sVar10 == -1) goto LAB_1023bdb4;
        *(short *)((int)param_2 + 6) = sVar10;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((int)param_2 + 6) != *(short *)ppppppcVar25) goto LAB_1023bd0d;
    local_f0 = (byte *****)*param_2;
    ppppppcVar25 = (code ******)((int)ppppppcVar25 + 2);
    if ((byte ******)local_f0 == (byte ******)0x0) {
LAB_1023be3a:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    else {
      if ((byte ****)*local_f0[7] == (byte ****)0x0) {
LAB_1023bdfd:
        local_104 = (code *****)(*local_f0)[7];
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar10 = (*(code *)local_104)();
      }
      else {
        ppppbVar3 = (byte ****)*local_f0[0xb];
        if ((int)ppppbVar3 < 1) goto LAB_1023bdfd;
        *local_f0[0xb] = (byte ***)((int)ppppbVar3 + -1);
        ppppbVar3 = (byte ****)*local_f0[7];
        *local_f0[7] = (byte ***)((int)ppppbVar3 + 2);
        sVar10 = *(short *)ppppbVar3;
      }
      if (sVar10 == -1) goto LAB_1023be3a;
      *(undefined1 *)(param_2 + 1) = 0;
    }
    goto LAB_1023bc80;
  case '+':
    if ((char)param_2[1] == '\0') {
      local_f0 = (byte *****)*param_2;
      if ((byte ******)local_f0 == (byte ******)0x0) {
LAB_1023bea1:
        *param_2 = 0;
      }
      else {
        if (((byte ****)*local_f0[7] == (byte ****)0x0) || ((int)*local_f0[0xb] < 1)) {
          ppppbVar3 = (byte ****)(*local_f0)[6];
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar10 = (*(code *)ppppbVar3)();
        }
        else {
          sVar10 = *(short *)*local_f0[7];
        }
        if (sVar10 == -1) goto LAB_1023bea1;
        *(short *)((int)param_2 + 6) = sVar10;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)local_100[1] == '\0') {
      FUN_1023b0c0();
    }
    if (*param_2 == 0) {
      if (*local_100 != 0) {
LAB_1023bedd:
        pcVar2 = *(code **)(*local_fc + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)(local_ec);
        (*pcVar2)();
        local_10c = local_f8 | 0x202;
        local_8 = CONCAT31(local_8._1_3_,6);
        local_f8 = local_10c;
        if (local_dc == 0) {
LAB_1023bfff:
          local_f1 = '\0';
        }
        else {
          pcVar2 = *(code **)(*local_fc + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)(local_a4);
          (*pcVar2)();
          local_f8 = local_f8 | 0x404;
          local_8 = 7;
          local_104 = (code *****)local_a4;
          if (7 < local_90) {
            local_104 = local_a4[0];
          }
          local_10c = local_f8;
          if ((char)param_2[1] == '\0') {
            local_f0 = (byte *****)*param_2;
            if ((byte ******)local_f0 == (byte ******)0x0) {
LAB_1023bfdf:
              *param_2 = 0;
            }
            else {
              if (((byte ****)*local_f0[7] == (byte ****)0x0) || ((int)*local_f0[0xb] < 1)) {
                ppppbVar3 = (byte ****)(*local_f0)[6];
                (*(code *)PTR_guard_check_icall_1035d810)();
                sVar10 = (*(code *)ppppbVar3)();
              }
              else {
                sVar10 = *(short *)*local_f0[7];
              }
              if (sVar10 == -1) goto LAB_1023bfdf;
              *(short *)((int)param_2 + 6) = sVar10;
            }
            *(undefined1 *)(param_2 + 1) = 1;
          }
          local_f1 = '\x01';
          if (*(short *)local_104 != *(short *)((int)param_2 + 6)) goto LAB_1023bfff;
        }
        if ((local_f8 & 4) != 0) {
          local_10c = local_f8 & 0xfffffffb;
          local_f8 = local_10c;
          FUN_102363f0();
        }
        local_8._0_1_ = 3;
        local_8._1_3_ = 0;
        if ((local_f8 & 2) != 0) {
          local_10c = local_f8 & 0xfffffffd;
          local_f8 = local_10c;
          FUN_102363f0();
        }
        if (local_f1 == '\0') {
          pcVar2 = *(code **)(*local_fc + 0x20);
          (*(code *)PTR_guard_check_icall_1035d810)(local_8c);
          (*pcVar2)();
          local_10c = local_f8 | 0x1008;
          local_8 = CONCAT31(local_8._1_3_,8);
          local_f8 = local_10c;
          if (local_7c == 0) {
LAB_1023c23d:
            local_f1 = '\0';
          }
          else {
            pcVar2 = *(code **)(*local_fc + 0x20);
            (*(code *)PTR_guard_check_icall_1035d810)(local_bc);
            (*pcVar2)();
            local_f8 = local_f8 | 0x4010;
            local_8 = 9;
            local_104 = (code *****)local_bc;
            if (7 < local_a8) {
              local_104 = local_bc[0];
            }
            local_10c = local_f8;
            if ((char)param_2[1] == '\0') {
              local_f0 = (byte *****)*param_2;
              if ((byte ******)local_f0 == (byte ******)0x0) {
LAB_1023c21d:
                *param_2 = 0;
              }
              else {
                if (((byte ****)*local_f0[7] == (byte ****)0x0) || ((int)*local_f0[0xb] < 1)) {
                  ppppbVar3 = (byte ****)(*local_f0)[6];
                  (*(code *)PTR_guard_check_icall_1035d810)();
                  sVar10 = (*(code *)ppppbVar3)();
                }
                else {
                  sVar10 = *(short *)*local_f0[7];
                }
                if (sVar10 == -1) goto LAB_1023c21d;
                *(short *)((int)param_2 + 6) = sVar10;
              }
              *(undefined1 *)(param_2 + 1) = 1;
            }
            local_f1 = '\x01';
            if (*(short *)local_104 != *(short *)((int)param_2 + 6)) goto LAB_1023c23d;
          }
          if ((local_f8 & 0x10) != 0) {
            local_10c = local_f8 & 0xffffffef;
            local_f8 = local_10c;
            FUN_102363f0();
          }
          local_8._0_1_ = 3;
          local_8._1_3_ = 0;
          if ((local_f8 & 8) != 0) {
            local_10c = local_f8 & 0xfffffff7;
            local_f8 = local_10c;
            FUN_102363f0();
          }
          if (local_f1 == '\0') {
            pcVar2 = *(code **)(*local_fc + 0x1c);
            (*(code *)PTR_guard_check_icall_1035d810)(local_d4);
            (*pcVar2)();
            local_f8 = local_f8 | 0x8020;
            local_8 = CONCAT31(local_8._1_3_,10);
            local_10c = local_f8;
            if (local_c4 == 0) {
LAB_1023c3f1:
              local_f1 = '\0';
            }
            else {
              pcVar2 = *(code **)(*local_fc + 0x20);
              (*(code *)PTR_guard_check_icall_1035d810)(local_8c);
              (*pcVar2)();
              local_f8 = local_f8 | 0x10040;
              local_f1 = '\x01';
              local_10c = local_f8;
              if (local_7c != 0) goto LAB_1023c3f1;
            }
            local_10c = local_f8;
            if ((local_f8 & 0x40) != 0) {
              local_10c = local_f8 & 0xffffffbf;
              local_f8 = local_10c;
              FUN_102363f0();
            }
            local_8._0_1_ = 3;
            local_8._1_3_ = 0;
            if ((local_f8 & 0x20) != 0) {
              local_10c = local_f8 & 0xffffffdf;
              local_f8 = local_10c;
              FUN_102363f0();
            }
            if (local_f1 != '\0') {
              local_115 = '\x01';
            }
            break;
          }
          local_f0 = (byte *****)*param_2;
          if ((byte ******)local_f0 == (byte ******)0x0) {
LAB_1023c2f1:
            *param_2 = 0;
            uVar6 = 1;
          }
          else {
            if ((byte ****)*local_f0[7] == (byte ****)0x0) {
LAB_1023c2cb:
              ppppbVar3 = (byte ****)(*local_f0)[7];
              (*(code *)PTR_guard_check_icall_1035d810)();
              sVar10 = (*(code *)ppppbVar3)();
            }
            else {
              ppppbVar3 = (byte ****)*local_f0[0xb];
              if ((int)ppppbVar3 < 1) goto LAB_1023c2cb;
              *local_f0[0xb] = (byte ***)((int)ppppbVar3 + -1);
              ppppbVar3 = (byte ****)*local_f0[7];
              *local_f0[7] = (byte ***)((int)ppppbVar3 + 2);
              sVar10 = *(short *)ppppbVar3;
            }
            if (sVar10 == -1) goto LAB_1023c2f1;
            uVar6 = 0;
          }
          *(undefined1 *)(param_2 + 1) = uVar6;
          pcVar2 = *(code **)(*local_fc + 0x20);
          (*(code *)PTR_guard_check_icall_1035d810)(local_8c);
          (*pcVar2)();
          local_10c = local_f8 | 0x2000;
          local_f8 = local_10c;
          FUN_100128b2(local_8c);
          FUN_102363f0();
          local_115 = '\x01';
        }
        else {
          local_f0 = (byte *****)*param_2;
          if ((byte ******)local_f0 == (byte ******)0x0) {
LAB_1023c0b3:
            *param_2 = 0;
            uVar6 = 1;
          }
          else {
            if ((byte ****)*local_f0[7] == (byte ****)0x0) {
LAB_1023c08d:
              ppppbVar3 = (byte ****)(*local_f0)[7];
              (*(code *)PTR_guard_check_icall_1035d810)();
              sVar10 = (*(code *)ppppbVar3)();
            }
            else {
              ppppbVar3 = (byte ****)*local_f0[0xb];
              if ((int)ppppbVar3 < 1) goto LAB_1023c08d;
              *local_f0[0xb] = (byte ***)((int)ppppbVar3 + -1);
              ppppbVar3 = (byte ****)*local_f0[7];
              *local_f0[7] = (byte ***)((int)ppppbVar3 + 2);
              sVar10 = *(short *)ppppbVar3;
            }
            if (sVar10 == -1) goto LAB_1023c0b3;
            uVar6 = 0;
          }
          *(undefined1 *)(param_2 + 1) = uVar6;
          pcVar2 = *(code **)(*local_fc + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)(local_8c);
          (*pcVar2)();
          local_10c = local_f8 | 0x800;
          local_f8 = local_10c;
          FUN_100128b2(local_8c);
          FUN_102363f0();
        }
      }
    }
    else if (*local_100 == 0) goto LAB_1023bedd;
    break;
  case 'v':
    local_128 = 0;
    pcVar2 = *(code **)(*local_fc + 0x24);
    (*(code *)PTR_guard_check_icall_1035d810)();
    local_104 = (code *****)(*pcVar2)();
    pcVar2 = *(code **)(*local_fc + 0x14);
    (*(code *)PTR_guard_check_icall_1035d810)(local_74);
    (*pcVar2)();
    local_10c = local_f8 | 0x100;
    local_8._0_1_ = 0xb;
    local_f8 = local_10c;
    if (local_64 != 0) {
      pcVar2 = *(code **)(*local_fc + 0x10);
      (*(code *)PTR_guard_check_icall_1035d810)();
      uVar8 = (*pcVar2)();
      local_110 = (byte *****)(uint)uVar8;
      if (uVar8 != 0) {
        ppppppbVar26 = local_74;
        if (0xf < local_60) {
          ppppppbVar26 = (byte ******)local_74[0];
        }
        if (*(byte *)ppppppbVar26 < 0x7f) {
          uStack_28 = 0;
          uStack_24 = 0;
          uStack_20 = 0;
          local_18 = 0xf;
          local_8 = CONCAT31(local_8._1_3_,0xc);
          local_1c = 1;
          local_2c = (char *****)0x0;
          local_130 = 0;
LAB_1023c532:
          if ((char)param_2[1] == '\0') {
            local_f0 = (byte *****)*param_2;
            if ((byte ******)local_f0 == (byte ******)0x0) {
LAB_1023c585:
              *param_2 = 0;
            }
            else {
              if (((byte ****)*local_f0[7] == (byte ****)0x0) || ((int)*local_f0[0xb] < 1)) {
                ppppbVar3 = (byte ****)(*local_f0)[6];
                (*(code *)PTR_guard_check_icall_1035d810)();
                sVar10 = (*(code *)ppppbVar3)();
              }
              else {
                sVar10 = *(short *)*local_f0[7];
              }
              if (sVar10 == -1) goto LAB_1023c585;
              *(short *)((int)param_2 + 6) = sVar10;
            }
            *(undefined1 *)(param_2 + 1) = 1;
          }
          if ((char)local_100[1] == '\0') {
            FUN_1023b0c0();
          }
          local_f0 = (byte *****)*param_2;
          if ((byte ******)local_f0 == (byte ******)0x0) {
            if (*local_100 == 0) goto LAB_1023c5bb;
          }
          else if (*local_100 != 0) goto LAB_1023c5bb;
          if ((char)param_2[1] == '\0') {
            if ((byte ******)local_f0 == (byte ******)0x0) {
LAB_1023c636:
              *param_2 = 0;
            }
            else {
              if (((byte ****)*local_f0[7] == (byte ****)0x0) || ((int)*local_f0[0xb] < 1)) {
                ppppbVar3 = (byte ****)(*local_f0)[6];
                (*(code *)PTR_guard_check_icall_1035d810)();
                sVar10 = (*(code *)ppppbVar3)();
              }
              else {
                sVar10 = *(short *)*local_f0[7];
              }
              if (sVar10 == -1) goto LAB_1023c636;
              *(short *)((int)param_2 + 6) = sVar10;
            }
            *(undefined1 *)(param_2 + 1) = 1;
          }
          iVar17 = local_13c;
          iVar11 = FUN_102299a0(local_13c,local_13c + 0x16,*(undefined2 *)((int)param_2 + 6));
          uVar23 = iVar11 - iVar17 >> 1;
          if (uVar23 < 10) {
            cVar7 = "0123456789-"[uVar23];
            local_144 = local_108[4];
            if (local_144 < (uint)local_108[5]) {
              local_124 = (int *****)(local_144 + 1);
              if (((int *****)local_144 != local_124) && (0xf < (uint)local_108[5])) {
                local_f0 = (byte *****)*local_108;
                if (DAT_103235d4 != '\0') {
                  pbVar16 = (byte *)((int)local_f0 + local_144 + 1);
                  pbVar28 = (byte *)((int)local_f0 + local_144 + 2);
                  pbVar24 = (byte *)((uint)((int)local_f0 + local_108[5] + 8) & 0xfffffff8);
                  pbVar12 = pbVar24;
                  if (pbVar16 <= pbVar24) {
                    pbVar12 = pbVar16;
                  }
                  if (pbVar24 < pbVar28) {
                    pbVar28 = pbVar24;
                  }
                  guard_check_icall(local_f0,pbVar24,pbVar12,pbVar28);
                  param_2 = local_140;
                }
              }
              local_108[4] = local_124;
              puVar19 = local_108;
              if (0xf < (uint)local_108[5]) {
                puVar19 = (undefined4 *)*local_108;
              }
              ((char *)(local_144 + (int)puVar19))[1] = '\0';
              *(char *)(local_144 + (int)puVar19) = cVar7;
            }
            else {
              FUN_10232b40(1,local_138,cVar7);
            }
            ppppppcVar14 = &local_2c;
            if (0xf < local_18) {
              ppppppcVar14 = (char ******)local_2c;
            }
            if (*(char *)((int)ppppppcVar14 + local_130) != '\x7f') {
              ppppppcVar14 = &local_2c;
              if (0xf < local_18) {
                ppppppcVar14 = (char ******)local_2c;
              }
              *(char *)((int)ppppppcVar14 + local_130) =
                   *(char *)((int)ppppppcVar14 + local_130) + '\x01';
            }
          }
          else {
            ppppppcVar14 = &local_2c;
            if (0xf < local_18) {
              ppppppcVar14 = (char ******)local_2c;
            }
            if (*(char *)((int)ppppppcVar14 + local_130) == '\0') goto LAB_1023c5bb;
            if ((char)param_2[1] == '\0') {
              local_124 = (int *****)*param_2;
              if ((int ******)local_124 == (int ******)0x0) {
LAB_1023c7cf:
                *param_2 = 0;
              }
              else {
                if (((int ****)*local_124[7] == (int ****)0x0) || ((int)*local_124[0xb] < 1)) {
                  ppppiVar4 = (int ****)(*local_124)[6];
                  (*(code *)PTR_guard_check_icall_1035d810)();
                  sVar10 = (*(code *)ppppiVar4)();
                }
                else {
                  sVar10 = *(short *)*local_124[7];
                }
                if (sVar10 == -1) goto LAB_1023c7cf;
                *(short *)((int)param_2 + 6) = sVar10;
              }
              *(undefined1 *)(param_2 + 1) = 1;
            }
            if (*(short *)((int)param_2 + 6) != (short)local_110) goto LAB_1023c5bb;
            local_124 = (int *****)local_1c;
            if (local_1c < local_18) {
              local_144 = local_1c + 1;
              if (((local_1c != local_1c + 1) && (0xf < local_18)) && (DAT_103235d4 != '\0')) {
                pcVar15 = (char *)((int)local_2c + local_1c + 1);
                pcVar27 = (char *)((int)local_2c + local_1c + 2);
                pcVar22 = (char *)((uint)((int)local_2c + local_18 + 8) & 0xfffffff8);
                pcVar13 = pcVar22;
                if (pcVar15 <= pcVar22) {
                  pcVar13 = pcVar15;
                }
                if (pcVar22 < pcVar27) {
                  pcVar27 = pcVar22;
                }
                guard_check_icall(local_2c,pcVar22,pcVar13,pcVar27);
              }
              local_1c = local_144;
              ppppppcVar14 = &local_2c;
              if (0xf < local_18) {
                ppppppcVar14 = (char ******)local_2c;
              }
              ((char *)((int)ppppppcVar14 + (int)local_124))[0] = '\0';
              ((char *)((int)ppppppcVar14 + (int)local_124))[1] = '\0';
            }
            else {
              FUN_10232b40(1,local_138,0);
            }
            local_130 = local_130 + 1;
          }
          local_124 = (int *****)*param_2;
          if ((int ******)local_124 == (int ******)0x0) {
LAB_1023c8db:
            *param_2 = 0;
            *(undefined1 *)(param_2 + 1) = 1;
          }
          else {
            if ((int ****)*local_124[7] == (int ****)0x0) {
LAB_1023c8ad:
              ppppiVar4 = (int ****)(*local_124)[7];
              (*(code *)PTR_guard_check_icall_1035d810)();
              sVar10 = (*(code *)ppppiVar4)();
            }
            else {
              ppppiVar4 = (int ****)*local_124[0xb];
              if ((int)ppppiVar4 < 1) goto LAB_1023c8ad;
              *local_124[0xb] = (int ***)((int)ppppiVar4 + -1);
              ppppiVar4 = (int ****)*local_124[7];
              *local_124[7] = (int ***)((int)ppppiVar4 + 2);
              sVar10 = *(short *)ppppiVar4;
            }
            if (sVar10 == -1) goto LAB_1023c8db;
            *(undefined1 *)(param_2 + 1) = 0;
          }
          goto LAB_1023c532;
        }
      }
    }
LAB_1023cb60:
    if ((char)param_2[1] == '\0') {
      local_110 = (byte *****)*param_2;
      if ((byte ******)local_110 == (byte ******)0x0) {
LAB_1023cbb0:
        *param_2 = 0;
      }
      else {
        if (((byte ****)*local_110[7] == (byte ****)0x0) || ((int)*local_110[0xb] < 1)) {
          ppppbVar3 = (byte ****)(*local_110)[6];
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar10 = (*(code *)ppppbVar3)();
        }
        else {
          sVar10 = *(short *)*local_110[7];
        }
        if (sVar10 == -1) goto LAB_1023cbb0;
        *(short *)((int)param_2 + 6) = sVar10;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)local_100[1] == '\0') {
      FUN_1023b0c0();
    }
    local_110 = (byte *****)*param_2;
    if ((byte ******)local_110 == (byte ******)0x0) {
      if (*local_100 == 0) goto LAB_1023ca69;
    }
    else if (*local_100 != 0) goto LAB_1023ca69;
    if ((char)param_2[1] == '\0') {
      if ((byte ******)local_110 == (byte ******)0x0) {
LAB_1023cc3a:
        *param_2 = 0;
      }
      else {
        if (((byte ****)*local_110[7] == (byte ****)0x0) || ((int)*local_110[0xb] < 1)) {
          ppppbVar3 = (byte ****)(*local_110)[6];
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar10 = (*(code *)ppppbVar3)();
        }
        else {
          sVar10 = *(short *)*local_110[7];
        }
        if (sVar10 == -1) goto LAB_1023cc3a;
        *(short *)((int)param_2 + 6) = sVar10;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    iVar17 = local_13c;
    iVar11 = FUN_102299a0(local_13c,local_13c + 0x16,*(undefined2 *)((int)param_2 + 6));
    uVar23 = iVar11 - iVar17 >> 1;
    if (9 < uVar23) goto LAB_1023ca69;
    local_148 = CONCAT31(local_148._1_3_,"0123456789-"[uVar23]);
    local_110 = (byte *****)local_108[4];
    if (local_110 < (int ******)local_108[5]) {
      local_124 = (int *****)((int)local_110 + 1);
      if (((local_110 != (byte *****)local_124) && ((int ******)0xf < (int ******)local_108[5])) &&
         (local_f0 = (byte *****)*local_108, DAT_103235d4 != '\0')) {
        pbVar28 = (byte *)((int)local_f0 + (int)local_110 + 1);
        pbVar16 = (byte *)((uint)((int)local_f0 + local_108[5] + 8) & 0xfffffff8);
        pbVar12 = pbVar16;
        if (pbVar28 <= pbVar16) {
          pbVar12 = pbVar28;
        }
        pbVar28 = (byte *)((int)local_f0 + 1) + (int)local_124;
        if (pbVar16 < (byte *)((int)local_f0 + 1) + (int)local_124) {
          pbVar28 = pbVar16;
        }
        guard_check_icall(local_f0,pbVar16,pbVar12,pbVar28);
        param_2 = local_140;
      }
      local_108[4] = local_124;
      puVar19 = local_108;
      if (0xf < (uint)local_108[5]) {
        puVar19 = (undefined4 *)*local_108;
      }
      ((undefined1 *)((int)local_110 + (int)puVar19))[1] = 0;
      *(undefined1 *)((int)local_110 + (int)puVar19) = (undefined1)local_148;
    }
    else {
      FUN_10232b40(1,local_138,local_148);
    }
    local_110 = (byte *****)*param_2;
    if ((byte ******)local_110 == (byte ******)0x0) {
LAB_1023cd8d:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    else {
      if ((byte ****)*local_110[7] == (byte ****)0x0) {
LAB_1023cd62:
        ppppbVar3 = (byte ****)(*local_110)[7];
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar10 = (*(code *)ppppbVar3)();
      }
      else {
        ppppbVar3 = (byte ****)*local_110[0xb];
        if ((int)ppppbVar3 < 1) goto LAB_1023cd62;
        *local_110[0xb] = (byte ***)((int)ppppbVar3 + -1);
        ppppbVar3 = (byte ****)*local_110[7];
        *local_110[7] = (byte ***)((int)ppppbVar3 + 2);
        sVar10 = *(short *)ppppbVar3;
      }
      if (sVar10 == -1) goto LAB_1023cd8d;
      *(undefined1 *)(param_2 + 1) = 0;
    }
    goto LAB_1023cb60;
  }
  goto switchD_1023b9e7_caseD_21;
LAB_1023c5bb:
  if (local_130 != 0) {
    ppppppcVar14 = &local_2c;
    if (0xf < local_18) {
      ppppppcVar14 = (char ******)local_2c;
    }
    if (*(char *)((int)ppppppcVar14 + local_130) < '\x01') {
      local_12c = CONCAT31(local_12c._1_3_,1);
    }
    else {
      local_130 = local_130 + 1;
    }
  }
  ppppppbVar26 = local_74;
  if (0xf < local_60) {
    ppppppbVar26 = (byte ******)local_74[0];
  }
  local_f0 = local_74[0];
  if ((char)local_12c != '\0') {
LAB_1023c979:
    local_8._0_1_ = 0xb;
    if (0xf < local_18) {
      if (DAT_103235d4 != '\0') {
        pcVar15 = (char *)((int)local_2c + local_1c + 1);
        pcVar27 = (char *)((int)local_2c + local_18 + 1);
        pcVar22 = (char *)((uint)(pcVar27 + 7) & 0xfffffff8);
        pcVar13 = pcVar22;
        if (pcVar15 <= pcVar22) {
          pcVar13 = pcVar15;
        }
        if (pcVar22 < pcVar27) {
          pcVar27 = pcVar22;
        }
        guard_check_icall(local_2c,pcVar22,pcVar13,pcVar27);
      }
      uVar23 = local_18 + 1;
      ppppppcVar14 = (char ******)local_2c;
      if (0xfff < uVar23) {
        ppppppcVar14 = (char ******)local_2c[-1];
        uVar23 = local_18 + 0x24;
        if ((char *)0x1f < (char *)((int)local_2c + (-4 - (int)ppppppcVar14))) goto LAB_1023d34a;
      }
      FUN_102283a0(ppppppcVar14,uVar23);
      local_f0 = local_74[0];
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c = (char *****)((uint)local_2c & 0xffffff00);
    local_8._0_1_ = 3;
    local_f0 = local_74[0];
    if (0xf < local_60) {
      if (DAT_103235d4 != '\0') {
        pbVar28 = (byte *)((int)local_74[0] + local_60 + 1);
        pbVar16 = (byte *)((int)local_74[0] + local_64 + 1);
        pbVar24 = (byte *)((uint)(pbVar28 + 7) & 0xfffffff8);
        pbVar12 = pbVar24;
        if (pbVar16 <= pbVar24) {
          pbVar12 = pbVar16;
        }
        if (pbVar24 < pbVar28) {
          pbVar28 = pbVar24;
        }
        guard_check_icall(local_74[0],pbVar24,pbVar12,pbVar28);
      }
      uVar23 = local_60 + 1;
      ppppppbVar26 = (byte ******)local_74[0];
      if (0xfff < uVar23) {
        ppppppbVar26 = (byte ******)local_74[0][-1];
        uVar23 = local_60 + 0x24;
        if ((byte *)0x1f < (byte *)((int)local_74[0] + (-4 - (int)ppppppbVar26))) goto LAB_1023d34a;
      }
      FUN_102283a0(ppppppbVar26,uVar23);
    }
    goto switchD_1023b9e7_caseD_21;
  }
  while ((local_130 != 0 && (bVar1 = *(byte *)ppppppbVar26, bVar1 != 0x7f))) {
    local_130 = local_130 + -1;
    if (local_130 != 0) {
      ppppppcVar14 = &local_2c;
      if (0xf < local_18) {
        ppppppcVar14 = (char ******)local_2c;
      }
      param_2 = local_140;
      if (bVar1 == *(byte *)((int)ppppppcVar14 + local_130)) goto LAB_1023c957;
LAB_1023c972:
      local_12c = CONCAT31(local_12c._1_3_,1);
      goto LAB_1023c979;
    }
LAB_1023c957:
    if (local_130 == 0) {
      ppppppcVar14 = &local_2c;
      if (0xf < local_18) {
        ppppppcVar14 = (char ******)local_2c;
      }
      if ((char)bVar1 < *(char *)ppppppcVar14) goto LAB_1023c972;
    }
    if ('\0' < (char)*(byte *)((int)ppppppbVar26 + 1)) {
      ppppppbVar26 = (byte ******)((int)ppppppbVar26 + 1);
    }
  }
  local_8._0_1_ = 0xb;
  if (0xf < local_18) {
    if (DAT_103235d4 != '\0') {
      pcVar15 = (char *)((int)local_2c + local_1c + 1);
      pcVar27 = (char *)((int)local_2c + local_18 + 1);
      pcVar22 = (char *)((uint)(pcVar27 + 7) & 0xfffffff8);
      pcVar13 = pcVar22;
      if (pcVar15 <= pcVar22) {
        pcVar13 = pcVar15;
      }
      if (pcVar22 < pcVar27) {
        pcVar27 = pcVar22;
      }
      guard_check_icall(local_2c,pcVar22,pcVar13,pcVar27);
    }
    uVar23 = local_18 + 1;
    ppppppcVar14 = (char ******)local_2c;
    if (0xfff < uVar23) {
      ppppppcVar14 = (char ******)local_2c[-1];
      uVar23 = local_18 + 0x24;
      if ((char *)0x1f < (char *)((int)local_2c + (-4 - (int)ppppppcVar14))) goto LAB_1023d34a;
    }
    FUN_102283a0(ppppppcVar14,uVar23);
  }
LAB_1023ca69:
  pcVar2 = *(code **)(*local_fc + 0xc);
  (*(code *)PTR_guard_check_icall_1035d810)();
  uVar23 = (*pcVar2)();
  local_f0 = (byte *****)(uVar23 & 0xffff);
  if ((char)param_2[1] == '\0') {
    local_110 = (byte *****)*param_2;
    if ((byte ******)local_110 == (byte ******)0x0) {
LAB_1023cdca:
      *param_2 = 0;
    }
    else {
      if (((byte ****)*local_110[7] == (byte ****)0x0) || ((int)*local_110[0xb] < 1)) {
        ppppbVar3 = (byte ****)(*local_110)[6];
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar10 = (*(code *)ppppbVar3)();
      }
      else {
        sVar10 = *(short *)*local_110[7];
      }
      if (sVar10 == -1) goto LAB_1023cdca;
      *(short *)((int)param_2 + 6) = sVar10;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  sVar10 = (short)local_f0;
  if ((char)local_100[1] == '\0') {
    FUN_1023b0c0();
  }
  local_110 = (byte *****)*param_2;
  ppppppcVar25 = (code ******)local_104;
  if ((byte ******)local_110 == (byte ******)0x0) {
    if (*local_100 != 0) {
LAB_1023ce2a:
      if (sVar10 != 0) {
        if ((char)param_2[1] == '\0') {
          if ((byte ******)local_110 == (byte ******)0x0) {
LAB_1023ce7d:
            *param_2 = 0;
          }
          else {
            if (((byte ****)*local_110[7] == (byte ****)0x0) || ((int)*local_110[0xb] < 1)) {
              ppppbVar3 = (byte ****)(*local_110)[6];
              (*(code *)PTR_guard_check_icall_1035d810)();
              sVar9 = (*(code *)ppppbVar3)();
              sVar10 = (short)local_f0;
            }
            else {
              sVar9 = *(short *)*local_110[7];
            }
            if (sVar9 == -1) goto LAB_1023ce7d;
            *(short *)((int)param_2 + 6) = sVar9;
          }
          *(undefined1 *)(param_2 + 1) = 1;
        }
        ppppppcVar25 = (code ******)local_104;
        if (*(short *)((int)param_2 + 6) == sVar10) {
LAB_1023ce91:
          local_110 = (byte *****)*param_2;
          if (local_110 == (byte *****)0x0) {
LAB_1023ceef:
            *param_2 = 0;
            *(undefined1 *)(param_2 + 1) = 1;
          }
          else {
            if (*local_110[7] == (byte ***)0x0) {
LAB_1023cec0:
              pcVar2 = *(code **)((int)*local_110 + 0x1c);
              (*(code *)PTR_guard_check_icall_1035d810)();
              sVar10 = (*pcVar2)();
            }
            else {
              iVar17 = (int)*local_110[0xb];
              if (iVar17 < 1) goto LAB_1023cec0;
              *local_110[0xb] = (byte ***)(iVar17 + -1);
              psVar5 = (short *)*local_110[7];
              *local_110[7] = (byte ***)(psVar5 + 1);
              sVar10 = *psVar5;
            }
            if (sVar10 == -1) goto LAB_1023ceef;
            *(undefined1 *)(param_2 + 1) = 0;
            FUN_1023b0c0();
          }
          if ((char)local_100[1] == '\0') {
            FUN_1023b0c0();
          }
          local_110 = (byte *****)*param_2;
          ppppppcVar25 = (code ******)local_104;
          if ((byte ******)local_110 == (byte ******)0x0) {
            if (*local_100 == 0) {
LAB_1023cf22:
              if (local_128 < (int)local_104) {
                local_12c = CONCAT31(local_12c._1_3_,1);
              }
              goto LAB_1023ce09;
            }
          }
          else if (*local_100 != 0) goto LAB_1023cf22;
          if ((int)local_104 <= local_128) goto LAB_1023ce09;
          if ((char)param_2[1] == '\0') {
            if ((byte ******)local_110 == (byte ******)0x0) {
LAB_1023cfa9:
              *param_2 = 0;
            }
            else {
              if (((byte ****)*local_110[7] == (byte ****)0x0) || ((int)*local_110[0xb] < 1)) {
                ppppbVar3 = (byte ****)(*local_110)[6];
                (*(code *)PTR_guard_check_icall_1035d810)();
                sVar10 = (*(code *)ppppbVar3)();
              }
              else {
                sVar10 = *(short *)*local_110[7];
              }
              if (sVar10 == -1) goto LAB_1023cfa9;
              *(short *)((int)param_2 + 6) = sVar10;
            }
            *(undefined1 *)(param_2 + 1) = 1;
          }
          ppppppcVar25 = (code ******)local_104;
          iVar17 = FUN_102299a0(local_13c,local_13c + 0x16,*(undefined2 *)((int)param_2 + 6));
          uVar23 = iVar17 - local_13c >> 1;
          if (uVar23 < 10) {
            local_134 = (undefined4 *)CONCAT31(local_134._1_3_,"0123456789-"[uVar23]);
            local_110 = (byte *****)local_108[4];
            if (local_110 < (uint)local_108[5]) {
              iVar17 = (int)local_110 + 1;
              FUN_1022d270(local_110,iVar17);
              local_108[4] = iVar17;
              puVar19 = local_108;
              if (0xf < (uint)local_108[5]) {
                puVar19 = (undefined4 *)*local_108;
              }
              local_128 = local_128 + 1;
              *(undefined1 *)((int)local_110 + (int)puVar19) = local_134._0_1_;
              ((undefined1 *)((int)local_110 + (int)puVar19))[1] = 0;
            }
            else {
              FUN_10232b40(1,local_138,local_134);
              local_128 = local_128 + 1;
            }
            goto LAB_1023ce91;
          }
          local_12c = CONCAT31(local_12c._1_3_,1);
        }
      }
    }
  }
  else if (*local_100 == 0) goto LAB_1023ce2a;
LAB_1023ce09:
  puVar19 = local_108;
  if (local_108[4] == 0) {
    local_12c = CONCAT31(local_12c._1_3_,1);
  }
  else if (local_128 < (int)ppppppcVar25) {
    do {
      local_110 = (byte *****)puVar19[4];
      if (local_110 < (byte ******)puVar19[5]) {
        pbVar12 = (byte *)((int)local_110 + 1);
        FUN_1022d270(local_110,pbVar12);
        puVar19[4] = pbVar12;
        puVar20 = puVar19;
        if (0xf < (uint)puVar19[5]) {
          puVar20 = (undefined4 *)*puVar19;
        }
        ((byte *)((int)puVar20 + (int)local_110))[0] = 0x30;
        ((byte *)((int)puVar20 + (int)local_110))[1] = 0;
        ppppppcVar25 = (code ******)local_104;
      }
      else {
        FUN_10232b40(1,local_138,0x30);
      }
      local_128 = local_128 + 1;
      param_2 = local_140;
    } while (local_128 < (int)ppppppcVar25);
  }
  local_8._0_1_ = 3;
  if (0xf < local_60) {
    local_110 = local_74[0];
    if (DAT_103235d4 != '\0') {
      pbVar28 = (byte *)((int)local_74[0] + local_60 + 1);
      pbVar16 = (byte *)((int)local_74[0] + local_64 + 1);
      pbVar24 = (byte *)((uint)(pbVar28 + 7) & 0xfffffff8);
      pbVar12 = pbVar24;
      if (pbVar16 <= pbVar24) {
        pbVar12 = pbVar16;
      }
      if (pbVar24 < pbVar28) {
        pbVar28 = pbVar24;
      }
      guard_check_icall(local_74[0],pbVar24,pbVar12,pbVar28);
    }
    uVar23 = local_60 + 1;
    ppppppbVar26 = (byte ******)local_74[0];
    if (0xfff < uVar23) {
      ppppppbVar26 = (byte ******)local_74[0][-1];
      uVar23 = local_60 + 0x24;
      if ((byte *)0x1f < (byte *)((int)local_74[0] + (-4 - (int)ppppppbVar26))) {
LAB_1023d34a:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
LAB_1023d351:
        if (local_4c < 2) goto LAB_1023d479;
        ppppppiVar29 = &local_5c;
        if (7 < local_48) {
          ppppppiVar29 = (int ******)local_5c;
        }
        goto LAB_1023d366;
      }
    }
    FUN_102283a0(ppppppbVar26,uVar23);
  }
switchD_1023b9e7_caseD_21:
  local_11c = local_11c + 1;
  if ((char)local_12c != '\0') goto code_r0x1023d241;
  goto LAB_1023b9c3;
LAB_1023bd0d:
  ppppppcVar18 = local_44;
  if (7 < local_30) {
    ppppppcVar18 = (code ******)local_44[0];
  }
  local_8._0_1_ = 3;
  local_12c = local_12c & 0xff;
  if (ppppppcVar25 != (code ******)((int)ppppppcVar18 + local_34 * 2)) {
    local_12c = 1;
  }
  FUN_102363f0();
  goto switchD_1023b9e7_caseD_21;
LAB_1023d1f9:
  if (local_14c[local_11c] == ' ') {
    uVar6 = (undefined1)local_12c;
    if (local_f1 == '\0') {
      uVar6 = 1;
    }
    local_12c = CONCAT31(local_12c._1_3_,uVar6);
  }
  goto switchD_1023b9e7_caseD_21;
code_r0x1023d241:
  FUN_1022dcf0(0);
  goto LAB_1023d493;
LAB_1023d366:
  ppppppiVar29 = (int ******)((int)ppppppiVar29 + 2);
  local_124 = (int *****)ppppppiVar29;
  ppppppiVar21 = &local_5c;
  if (7 < local_48) {
    ppppppiVar21 = (int ******)local_5c;
  }
  if (ppppppiVar29 != (int ******)((int)ppppppiVar21 + local_4c * 2)) {
    if ((char)param_2[1] == '\0') {
      FUN_1023b0c0();
    }
    if ((char)local_100[1] == '\0') {
      FUN_1023b0c0();
    }
    if (*param_2 == 0) {
      if (*local_100 == 0) goto LAB_1023d3b4;
    }
    else if (*local_100 != 0) goto LAB_1023d3b4;
    if ((char)param_2[1] == '\0') {
      FUN_1023b0c0();
    }
    if (*(short *)((int)param_2 + 6) != *(short *)ppppppiVar29) goto LAB_1023d3b4;
    local_110 = (byte *****)*param_2;
    if ((byte ******)local_110 == (byte ******)0x0) {
LAB_1023d462:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    else {
      if ((byte ****)*local_110[7] == (byte ****)0x0) {
LAB_1023d429:
        ppppbVar3 = (byte ****)(*local_110)[7];
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar10 = (*(code *)ppppbVar3)();
      }
      else {
        ppppbVar3 = (byte ****)*local_110[0xb];
        if ((int)ppppbVar3 < 1) goto LAB_1023d429;
        *local_110[0xb] = (byte ***)((int)ppppbVar3 + -1);
        ppppbVar3 = (byte ****)*local_110[7];
        *local_110[7] = (byte ***)((int)ppppbVar3 + 2);
        sVar10 = *(short *)ppppbVar3;
        local_124 = (int *****)ppppppiVar29;
      }
      ppppppiVar29 = (int ******)local_124;
      if (sVar10 == -1) goto LAB_1023d462;
      *(undefined1 *)(param_2 + 1) = 0;
    }
    goto LAB_1023d366;
  }
LAB_1023d3b4:
  ppppppiVar21 = &local_5c;
  if (7 < local_48) {
    ppppppiVar21 = (int ******)local_5c;
  }
  if (ppppppiVar29 == (int ******)((int)ppppppiVar21 + local_4c * 2)) {
LAB_1023d479:
    if (local_115 != '\0') {
      FUN_1007ce2a(0,1,0x2d);
    }
  }
  else {
    FUN_1022dcf0(0);
  }
LAB_1023d493:
  FUN_102363f0();
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

