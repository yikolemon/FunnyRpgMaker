/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10249890 */

void FUN_10249890(int *param_1,int *param_2,uint param_3,char *param_4,char param_5)

{
  char *pcVar1;
  code *pcVar2;
  short *psVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *****pppppuVar11;
  undefined1 uVar12;
  int iVar13;
  bool bVar14;
  uint local_60;
  undefined1 local_58 [4];
  int *local_54;
  int *local_50;
  uint local_4c;
  uint local_48;
  int *local_44;
  char *local_40;
  char local_39;
  uint local_38;
  uint local_34;
  char local_2d;
  undefined4 ****local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_102892b5;
  local_10 = ExceptionList;
  uVar7 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar13 = 0;
  local_40 = param_4;
  local_48 = param_3;
  cVar4 = *param_4;
  while (cVar4 != '\0') {
    pcVar1 = param_4 + iVar13;
    iVar13 = iVar13 + 1;
    uVar8 = local_48 + 1;
    if (*pcVar1 != *param_4) {
      uVar8 = local_48;
    }
    local_48 = uVar8;
    cVar4 = param_4[iVar13];
  }
  local_14 = uVar7;
  FUN_1022dbf0(local_48,0);
  local_8 = 1;
  piVar9 = (int *)FUN_1022bce0(1,uVar7);
  local_8._0_1_ = 2;
  local_54 = piVar9;
  local_44 = (int *)FUN_1001c23e(local_58);
  local_8 = (uint)local_8._1_3_ << 8;
  if (piVar9 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar9 + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar10 = (undefined4 *)(*pcVar2)();
    param_4 = local_40;
    if (puVar10 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar10;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar2)();
      param_4 = local_40;
    }
  }
  iVar13 = 0;
  local_60 = 1;
  local_38 = 0;
  local_2d = '\0';
  local_4c = 0xfffffffe;
  local_34 = 1;
  if (local_48 != 0) {
LAB_10249980:
    do {
      if (param_4[iVar13] != '\0') {
        do {
          if (param_4[iVar13] == *param_4) break;
          iVar13 = iVar13 + 1;
        } while (param_4[iVar13] != '\0');
      }
      pppppuVar11 = local_2c;
      if (0xf < local_18) {
        pppppuVar11 = (undefined4 *****)local_2c[0];
      }
      if (*(char *)((int)pppppuVar11 + local_38) == '\0') {
        iVar13 = iVar13 + local_34;
        local_54 = (int *)(local_40 + iVar13);
        if (((char)*local_54 == *local_40) || ((char)*local_54 == '\0')) {
          pppppuVar11 = local_2c;
          if (0xf < local_18) {
            pppppuVar11 = (undefined4 *****)local_2c[0];
          }
          uVar12 = 0x7f;
          if (local_34 < 0x7f) {
            uVar12 = (char)local_34;
          }
          local_4c = local_38;
        }
        else {
          if ((char)param_1[1] == '\0') {
            local_50 = (int *)*param_1;
            if (local_50 == (int *)0x0) {
LAB_10249a2d:
              *param_1 = 0;
            }
            else {
              if ((*(short **)local_50[7] == (short *)0x0) || (*(int *)local_50[0xb] < 1)) {
                pcVar2 = *(code **)(*local_50 + 0x18);
                (*(code *)PTR_guard_check_icall_1035d810)();
                sVar6 = (*pcVar2)();
              }
              else {
                sVar6 = **(short **)local_50[7];
              }
              if (sVar6 == -1) goto LAB_10249a2d;
              *(short *)((int)param_1 + 6) = sVar6;
            }
            *(undefined1 *)(param_1 + 1) = 1;
          }
          if ((char)param_2[1] == '\0') {
            FUN_1023b0c0();
          }
          local_50 = (int *)*param_1;
          if (local_50 == (int *)0x0) {
            if (*param_2 != 0) {
LAB_10249a81:
              if (param_5 == '\x01') {
                local_54 = (int *)(int)(char)*local_54;
                if ((char)param_1[1] == '\0') {
                  if (local_50 != (int *)0x0) {
                    if ((*(ushort **)local_50[7] == (ushort *)0x0) || (*(int *)local_50[0xb] < 1)) {
                      pcVar2 = *(code **)(*local_50 + 0x18);
                      (*(code *)PTR_guard_check_icall_1035d810)();
                      uVar5 = (*pcVar2)();
                    }
                    else {
                      uVar5 = **(ushort **)local_50[7];
                    }
                    if (uVar5 != 0xffff) {
                      *(ushort *)((int)param_1 + 6) = uVar5;
                      *(undefined1 *)(param_1 + 1) = 1;
                      bVar14 = local_54 == (int *)(uint)uVar5;
                      goto LAB_10249b8e;
                    }
                  }
                  *param_1 = 0;
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                bVar14 = local_54 == (int *)(uint)*(ushort *)((int)param_1 + 6);
              }
              else {
                pcVar2 = *(code **)(*local_44 + 0x10);
                (*(code *)PTR_guard_check_icall_1035d810)((char)*local_54);
                local_39 = (*pcVar2)();
                if ((char)param_1[1] == '\0') {
                  local_54 = (int *)*param_1;
                  if (local_54 == (int *)0x0) {
LAB_10249b62:
                    *param_1 = 0;
                  }
                  else {
                    if ((*(short **)local_54[7] == (short *)0x0) || (*(int *)local_54[0xb] < 1)) {
                      pcVar2 = *(code **)(*local_54 + 0x18);
                      (*(code *)PTR_guard_check_icall_1035d810)();
                      sVar6 = (*pcVar2)();
                    }
                    else {
                      sVar6 = **(short **)local_54[7];
                    }
                    if (sVar6 == -1) goto LAB_10249b62;
                    *(short *)((int)param_1 + 6) = sVar6;
                  }
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                pcVar2 = *(code **)(*local_44 + 0x10);
                (*(code *)PTR_guard_check_icall_1035d810)((char)*(undefined2 *)((int)param_1 + 6));
                cVar4 = (*pcVar2)();
                bVar14 = local_39 == cVar4;
              }
LAB_10249b8e:
              if (bVar14) {
                local_2d = '\x01';
                goto LAB_10249bce;
              }
            }
          }
          else if (*param_2 == 0) goto LAB_10249a81;
          pppppuVar11 = local_2c;
          if (0xf < local_18) {
            pppppuVar11 = (undefined4 *****)local_2c[0];
          }
          uVar12 = 0x7f;
          if (local_34 < 0x7f) {
            uVar12 = (char)local_34;
          }
        }
        *(undefined1 *)((int)pppppuVar11 + local_38) = uVar12;
      }
      else {
        pppppuVar11 = local_2c;
        if (0xf < local_18) {
          pppppuVar11 = (undefined4 *****)local_2c[0];
        }
        iVar13 = iVar13 + *(char *)((int)pppppuVar11 + local_38);
      }
LAB_10249bce:
      local_38 = local_38 + 1;
      param_4 = local_40;
    } while (local_38 < local_48);
    if (local_2d != '\0') {
      if ((char)param_1[1] == '\0') {
        FUN_1023b0c0();
      }
      if ((char)param_2[1] == '\0') {
        FUN_1023b0c0();
      }
      piVar9 = (int *)*param_1;
      if (piVar9 == (int *)0x0) {
        if (*param_2 == 0) goto LAB_10249c89;
        local_34 = local_60 + 1;
LAB_10249c13:
        *param_1 = 0;
        uVar12 = 1;
      }
      else {
        if (*param_2 != 0) goto LAB_10249c89;
        local_34 = local_34 + 1;
        if (*(int *)piVar9[7] == 0) {
LAB_10249c67:
          pcVar2 = *(code **)(*piVar9 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar6 = (*pcVar2)();
        }
        else {
          iVar13 = *(int *)piVar9[0xb];
          if (iVar13 < 1) goto LAB_10249c67;
          *(int *)piVar9[0xb] = iVar13 + -1;
          psVar3 = *(short **)piVar9[7];
          *(short **)piVar9[7] = psVar3 + 1;
          sVar6 = *psVar3;
        }
        if (sVar6 == -1) goto LAB_10249c13;
        uVar12 = 0;
      }
      local_60 = local_34;
      *(undefined1 *)(param_1 + 1) = uVar12;
      iVar13 = 0;
      local_4c = 0xffffffff;
      local_2d = '\0';
      local_38 = 0;
      param_4 = local_40;
      goto LAB_10249980;
    }
  }
LAB_10249c89:
  FUN_10001fee();
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

