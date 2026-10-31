/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1024a2d0 */

void FUN_1024a2d0(int *param_1,int *param_2,uint param_3,ushort *param_4,char param_5)

{
  code *pcVar1;
  int *piVar2;
  short *psVar3;
  ushort uVar4;
  undefined2 uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  undefined4 *puVar10;
  undefined4 *****pppppuVar11;
  undefined1 uVar12;
  int iVar13;
  ushort uVar14;
  bool bVar15;
  uint local_5c;
  undefined1 local_54 [4];
  ushort *local_50;
  uint local_4c;
  uint local_48;
  int *local_44;
  undefined4 local_40;
  ushort *local_3c;
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
  puStack_c = &DAT_102892f5;
  local_10 = ExceptionList;
  uVar7 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar13 = 0;
  local_3c = param_4;
  local_48 = param_3;
  uVar14 = *param_4;
  while (uVar14 != 0) {
    puVar9 = param_4 + iVar13;
    iVar13 = iVar13 + 1;
    uVar8 = local_48 + 1;
    if (*puVar9 != *param_4) {
      uVar8 = local_48;
    }
    local_48 = uVar8;
    uVar14 = param_4[iVar13];
  }
  local_14 = uVar7;
  FUN_1022dbf0(local_48,0);
  local_8 = 1;
  puVar9 = (ushort *)FUN_1022bce0(1,uVar7);
  local_8._0_1_ = 2;
  local_50 = puVar9;
  local_44 = (int *)FUN_10240a50(local_54);
  local_8 = (uint)local_8._1_3_ << 8;
  if (puVar9 != (ushort *)0x0) {
    pcVar1 = *(code **)(*(int *)puVar9 + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar10 = (undefined4 *)(*pcVar1)();
    param_4 = local_3c;
    if (puVar10 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar10;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar1)();
      param_4 = local_3c;
    }
  }
  iVar13 = 0;
  local_5c = 1;
  local_38 = 0;
  local_2d = '\0';
  local_4c = 0xfffffffe;
  local_34 = 1;
  if (local_48 != 0) {
LAB_1024a3d0:
    do {
      if (param_4[iVar13] != 0) {
        do {
          if (param_4[iVar13] == *param_4) break;
          iVar13 = iVar13 + 1;
        } while (param_4[iVar13] != 0);
      }
      pppppuVar11 = local_2c;
      if (0xf < local_18) {
        pppppuVar11 = (undefined4 *****)local_2c[0];
      }
      if (*(char *)((int)pppppuVar11 + local_38) == '\0') {
        iVar13 = iVar13 + local_34;
        local_50 = local_3c + iVar13;
        if ((*local_50 == *local_3c) || (*local_50 == 0)) {
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
            local_40 = (int *)*param_1;
            if (local_40 == (int *)0x0) {
LAB_1024a48a:
              *param_1 = 0;
            }
            else {
              if ((*(short **)local_40[7] == (short *)0x0) || (*(int *)local_40[0xb] < 1)) {
                pcVar1 = *(code **)(*local_40 + 0x18);
                (*(code *)PTR_guard_check_icall_1035d810)();
                sVar6 = (*pcVar1)();
              }
              else {
                sVar6 = **(short **)local_40[7];
              }
              if (sVar6 == -1) goto LAB_1024a48a;
              *(short *)((int)param_1 + 6) = sVar6;
            }
            *(undefined1 *)(param_1 + 1) = 1;
          }
          if ((char)param_2[1] == '\0') {
            FUN_1023b0c0();
          }
          local_40 = (int *)*param_1;
          if (local_40 == (int *)0x0) {
            if (*param_2 != 0) {
LAB_1024a4de:
              uVar14 = *local_50;
              puVar9 = (ushort *)(uint)uVar14;
              if (param_5 == '\x01') {
                local_50 = puVar9;
                if ((char)param_1[1] == '\0') {
                  if (local_40 != (int *)0x0) {
                    if ((*(ushort **)local_40[7] == (ushort *)0x0) || (*(int *)local_40[0xb] < 1)) {
                      pcVar1 = *(code **)(*local_40 + 0x18);
                      (*(code *)PTR_guard_check_icall_1035d810)();
                      uVar4 = (*pcVar1)();
                      uVar14 = (ushort)local_50;
                    }
                    else {
                      uVar4 = **(ushort **)local_40[7];
                    }
                    if (uVar4 != 0xffff) {
                      *(ushort *)((int)param_1 + 6) = uVar4;
                      *(undefined1 *)(param_1 + 1) = 1;
                      bVar15 = uVar14 == uVar4;
                      goto LAB_1024a5e6;
                    }
                  }
                  *param_1 = 0;
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                bVar15 = uVar14 == *(ushort *)((int)param_1 + 6);
              }
              else {
                pcVar1 = *(code **)(*local_44 + 0x20);
                (*(code *)PTR_guard_check_icall_1035d810)(puVar9);
                uVar5 = (*pcVar1)();
                local_40 = (int *)CONCAT22(uVar5,(undefined2)local_40);
                if ((char)param_1[1] == '\0') {
                  local_50 = (ushort *)*param_1;
                  if (local_50 == (ushort *)0x0) {
LAB_1024a5bc:
                    *param_1 = 0;
                  }
                  else {
                    if (((short *)**(undefined4 **)(local_50 + 0xe) == (short *)0x0) ||
                       (**(int **)(local_50 + 0x16) < 1)) {
                      pcVar1 = *(code **)(*(int *)local_50 + 0x18);
                      (*(code *)PTR_guard_check_icall_1035d810)();
                      sVar6 = (*pcVar1)();
                    }
                    else {
                      sVar6 = *(short *)**(undefined4 **)(local_50 + 0xe);
                    }
                    if (sVar6 == -1) goto LAB_1024a5bc;
                    *(short *)((int)param_1 + 6) = sVar6;
                  }
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                pcVar1 = *(code **)(*local_44 + 0x20);
                (*(code *)PTR_guard_check_icall_1035d810)(*(undefined2 *)((int)param_1 + 6));
                sVar6 = (*pcVar1)();
                bVar15 = local_40._2_2_ == sVar6;
              }
LAB_1024a5e6:
              if (bVar15) {
                local_2d = '\x01';
                goto LAB_1024a626;
              }
            }
          }
          else if (*param_2 == 0) goto LAB_1024a4de;
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
LAB_1024a626:
      local_38 = local_38 + 1;
      param_4 = local_3c;
    } while (local_38 < local_48);
    if (local_2d != '\0') {
      if ((char)param_1[1] == '\0') {
        FUN_1023b0c0();
      }
      if ((char)param_2[1] == '\0') {
        FUN_1023b0c0();
      }
      piVar2 = (int *)*param_1;
      if (piVar2 == (int *)0x0) {
        if (*param_2 == 0) goto LAB_1024a6e1;
        local_34 = local_5c + 1;
LAB_1024a66b:
        *param_1 = 0;
        uVar12 = 1;
      }
      else {
        if (*param_2 != 0) goto LAB_1024a6e1;
        local_34 = local_34 + 1;
        if (*(int *)piVar2[7] == 0) {
LAB_1024a6bf:
          pcVar1 = *(code **)(*piVar2 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar6 = (*pcVar1)();
        }
        else {
          iVar13 = *(int *)piVar2[0xb];
          if (iVar13 < 1) goto LAB_1024a6bf;
          *(int *)piVar2[0xb] = iVar13 + -1;
          psVar3 = *(short **)piVar2[7];
          *(short **)piVar2[7] = psVar3 + 1;
          sVar6 = *psVar3;
        }
        if (sVar6 == -1) goto LAB_1024a66b;
        uVar12 = 0;
      }
      local_5c = local_34;
      *(undefined1 *)(param_1 + 1) = uVar12;
      iVar13 = 0;
      local_4c = 0xffffffff;
      local_2d = '\0';
      local_38 = 0;
      param_4 = local_3c;
      goto LAB_1024a3d0;
    }
  }
LAB_1024a6e1:
  FUN_10001fee();
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

