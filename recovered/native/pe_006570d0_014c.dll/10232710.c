/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10232710 */

void FUN_10232710(int *param_1,int *param_2,uint param_3,char *param_4,char param_5)

{
  char *pcVar1;
  code *pcVar2;
  int *piVar3;
  byte *pbVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *****pppppuVar10;
  undefined1 uVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_64 [4];
  int *local_60;
  uint local_5c;
  int *local_58;
  int *local_54;
  uint local_50;
  uint local_4c;
  int *local_48;
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
  puStack_c = &DAT_102888e5;
  local_10 = ExceptionList;
  uVar6 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar12 = 0;
  local_40 = param_4;
  local_58 = param_2;
  local_4c = param_3;
  cVar5 = *param_4;
  while (cVar5 != '\0') {
    pcVar1 = param_4 + iVar12;
    iVar12 = iVar12 + 1;
    uVar7 = local_4c + 1;
    if (*pcVar1 != *param_4) {
      uVar7 = local_4c;
    }
    local_4c = uVar7;
    cVar5 = param_4[iVar12];
  }
  local_14 = uVar6;
  FUN_1022dbf0(local_4c,0);
  local_8 = 1;
  piVar8 = (int *)FUN_1022bce0(1,uVar6);
  local_8._0_1_ = 2;
  local_60 = piVar8;
  local_48 = (int *)FUN_1001c23e(local_64);
  local_8 = (uint)local_8._1_3_ << 8;
  if (piVar8 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar8 + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar9 = (undefined4 *)(*pcVar2)();
    param_4 = local_40;
    if (puVar9 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar9;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar2)();
      param_4 = local_40;
    }
  }
  iVar12 = 0;
  local_5c = 1;
  local_38 = 0;
  local_2d = '\0';
  local_50 = 0xfffffffe;
  local_34 = 1;
  if (local_4c != 0) {
LAB_10232800:
    do {
      if (param_4[iVar12] != '\0') {
        do {
          if (param_4[iVar12] == *param_4) break;
          iVar12 = iVar12 + 1;
        } while (param_4[iVar12] != '\0');
      }
      pppppuVar10 = local_2c;
      if (0xf < local_18) {
        pppppuVar10 = (undefined4 *****)local_2c[0];
      }
      if (*(char *)((int)pppppuVar10 + local_38) == '\0') {
        iVar12 = iVar12 + local_34;
        local_44 = (int *)(local_40 + iVar12);
        if (((char)*local_44 == *local_40) || ((char)*local_44 == '\0')) {
          pppppuVar10 = local_2c;
          if (0xf < local_18) {
            pppppuVar10 = (undefined4 *****)local_2c[0];
          }
          uVar11 = 0x7f;
          if (local_34 < 0x7f) {
            uVar11 = (char)local_34;
          }
          local_50 = local_38;
        }
        else {
          if ((char)param_1[1] == '\0') {
            local_54 = (int *)*param_1;
            if (local_54 == (int *)0x0) {
LAB_102328a4:
              *param_1 = 0;
            }
            else {
              if ((*(byte **)local_54[7] == (byte *)0x0) || (*(int *)local_54[0xb] < 1)) {
                pcVar2 = *(code **)(*local_54 + 0x18);
                (*(code *)PTR_guard_check_icall_1035d810)();
                uVar6 = (*pcVar2)();
              }
              else {
                uVar6 = (uint)**(byte **)local_54[7];
              }
              if (uVar6 == 0xffffffff) goto LAB_102328a4;
              *(char *)((int)param_1 + 5) = (char)uVar6;
            }
            *(undefined1 *)(param_1 + 1) = 1;
          }
          piVar8 = local_58;
          if ((char)local_58[1] == '\0') {
            FUN_100e1fa2();
          }
          local_54 = (int *)*param_1;
          if (local_54 == (int *)0x0) {
            if (*piVar8 != 0) {
LAB_102328f8:
              local_44 = (int *)CONCAT31((int3)((uint)local_44 >> 8),(char)*local_44);
              if (param_5 == '\x01') {
                if ((char)param_1[1] == '\0') {
                  if (local_54 != (int *)0x0) {
                    if ((*(byte **)local_54[7] == (byte *)0x0) || (*(int *)local_54[0xb] < 1)) {
                      pcVar2 = *(code **)(*local_54 + 0x18);
                      (*(code *)PTR_guard_check_icall_1035d810)();
                      uVar6 = (*pcVar2)();
                    }
                    else {
                      uVar6 = (uint)**(byte **)local_54[7];
                    }
                    if (uVar6 != 0xffffffff) {
                      *(char *)((int)param_1 + 5) = (char)uVar6;
                      bVar13 = (char)local_44 == (char)uVar6;
                      *(undefined1 *)(param_1 + 1) = 1;
                      goto LAB_102329ee;
                    }
                  }
                  *param_1 = 0;
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                bVar13 = (char)local_44 == *(char *)((int)param_1 + 5);
              }
              else {
                pcVar2 = *(code **)(*local_48 + 0x10);
                (*(code *)PTR_guard_check_icall_1035d810)(local_44);
                local_39 = (*pcVar2)();
                if ((char)param_1[1] == '\0') {
                  local_44 = (int *)*param_1;
                  if (local_44 == (int *)0x0) {
LAB_102329c1:
                    *param_1 = 0;
                  }
                  else {
                    if ((*(byte **)local_44[7] == (byte *)0x0) || (*(int *)local_44[0xb] < 1)) {
                      pcVar2 = *(code **)(*local_44 + 0x18);
                      (*(code *)PTR_guard_check_icall_1035d810)();
                      uVar6 = (*pcVar2)();
                    }
                    else {
                      uVar6 = (uint)**(byte **)local_44[7];
                    }
                    if (uVar6 == 0xffffffff) goto LAB_102329c1;
                    *(char *)((int)param_1 + 5) = (char)uVar6;
                  }
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                local_60 = (int *)CONCAT31(local_60._1_3_,*(undefined1 *)((int)param_1 + 5));
                pcVar2 = *(code **)(*local_48 + 0x10);
                (*(code *)PTR_guard_check_icall_1035d810)(local_60);
                cVar5 = (*pcVar2)();
                bVar13 = local_39 == cVar5;
              }
LAB_102329ee:
              if (bVar13) {
                local_2d = '\x01';
                goto LAB_10232a2e;
              }
            }
          }
          else if (*piVar8 == 0) goto LAB_102328f8;
          pppppuVar10 = local_2c;
          if (0xf < local_18) {
            pppppuVar10 = (undefined4 *****)local_2c[0];
          }
          uVar11 = 0x7f;
          if (local_34 < 0x7f) {
            uVar11 = (char)local_34;
          }
        }
        *(undefined1 *)((int)pppppuVar10 + local_38) = uVar11;
      }
      else {
        pppppuVar10 = local_2c;
        if (0xf < local_18) {
          pppppuVar10 = (undefined4 *****)local_2c[0];
        }
        iVar12 = iVar12 + *(char *)((int)pppppuVar10 + local_38);
      }
LAB_10232a2e:
      local_38 = local_38 + 1;
      param_4 = local_40;
    } while (local_38 < local_4c);
    if (local_2d != '\0') {
      if ((char)param_1[1] == '\0') {
        FUN_100e1fa2();
      }
      piVar8 = local_58;
      if ((char)local_58[1] == '\0') {
        FUN_100e1fa2();
      }
      piVar3 = (int *)*param_1;
      if (piVar3 == (int *)0x0) {
        if (*piVar8 == 0) goto LAB_10232ae1;
        local_34 = local_5c + 1;
LAB_10232a73:
        *param_1 = 0;
        uVar11 = 1;
      }
      else {
        if (*piVar8 != 0) goto LAB_10232ae1;
        local_34 = local_34 + 1;
        if (*(int *)piVar3[7] == 0) {
LAB_10232ac7:
          pcVar2 = *(code **)(*piVar3 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar6 = (*pcVar2)();
        }
        else {
          iVar12 = *(int *)piVar3[0xb];
          if (iVar12 < 1) goto LAB_10232ac7;
          *(int *)piVar3[0xb] = iVar12 + -1;
          pbVar4 = *(byte **)piVar3[7];
          *(byte **)piVar3[7] = pbVar4 + 1;
          uVar6 = (uint)*pbVar4;
        }
        if (uVar6 == 0xffffffff) goto LAB_10232a73;
        uVar11 = 0;
      }
      local_5c = local_34;
      *(undefined1 *)(param_1 + 1) = uVar11;
      iVar12 = 0;
      local_50 = 0xffffffff;
      local_2d = '\0';
      local_38 = 0;
      param_4 = local_40;
      goto LAB_10232800;
    }
  }
LAB_10232ae1:
  FUN_10004e60();
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

