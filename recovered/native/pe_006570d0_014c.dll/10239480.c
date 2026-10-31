/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10239480 */

void FUN_10239480(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4,undefined4 param_5
                 ,undefined4 param_6,char param_7,char param_8)

{
  code *pcVar1;
  uint ****ppppuVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ushort *puVar9;
  uint *****pppppuVar10;
  ushort *puVar11;
  char *pcVar12;
  uint uVar13;
  undefined1 local_84 [20];
  int local_70;
  undefined4 local_6c;
  int local_68;
  undefined1 local_64 [4];
  uint ***local_60;
  ushort *local_5c;
  undefined4 *local_58;
  uint ****local_54;
  uint ****local_50;
  ushort *local_4c;
  uint ****local_48;
  undefined4 local_44;
  uint ****local_40;
  undefined1 local_3a;
  undefined1 local_39;
  uint ****local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint ****local_28;
  ushort *local_24;
  undefined4 local_20;
  ushort local_1c;
  uint local_1a;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1028a07d;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_58 = param_1;
  local_6c = param_6;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_70 = param_4;
  local_20 = 0x250021;
  local_1a = 0;
  local_28 = (uint ****)0x0;
  local_24 = (ushort *)0x7;
  local_38 = (uint ****)0x0;
  local_1c = (ushort)param_7;
  local_8 = 0;
  if (param_8 != '\0') {
    local_1a = (uint)local_1c;
    local_1c = (short)param_8;
  }
  local_54 = (uint ****)FUN_10268ffd(local_14);
  uVar13 = 0x10;
  local_60 = *local_54;
  while( true ) {
    local_50 = local_28;
    local_5c = local_24;
    local_44 = uVar13;
    if ((uint)((int)local_24 - (int)local_28) < uVar13) {
      if (0x7ffffffeU - (int)local_28 < uVar13) goto LAB_10239995;
      local_40 = (uint ****)((int)local_28 + uVar13);
      local_4c = (ushort *)((uint)local_40 | 7);
      if (local_4c < (ushort *)0x7fffffff) {
        if ((ushort *)(0x7ffffffe - ((uint)local_24 >> 1)) < local_24) {
          local_4c = (ushort *)0x7ffffffe;
        }
        else {
          puVar11 = (ushort *)((int)local_24 + ((uint)local_24 >> 1));
          if (local_4c < puVar11) {
            local_4c = puVar11;
          }
        }
      }
      else {
        local_4c = (ushort *)0x7ffffffe;
      }
      local_48 = (uint ****)FUN_10001406(&local_38,&local_4c);
      if (((ushort *)0x7 < local_24) && (DAT_103235d4 != '\0')) {
        puVar11 = (ushort *)((int)local_38 + ((int)local_24 + 1U) * 2);
        puVar5 = (ushort *)((int)local_38 + (int)local_28 * 2 + 2);
        puVar9 = (ushort *)((int)puVar11 + 7U & 0xfffffff8);
        puVar4 = puVar9;
        if (puVar5 <= puVar9) {
          puVar4 = puVar5;
        }
        if (puVar9 < puVar11) {
          puVar11 = puVar9;
        }
        guard_check_icall(local_38,puVar9,puVar4,puVar11);
      }
      ppppuVar2 = local_48;
      local_28 = local_40;
      local_24 = local_4c;
      iVar8 = (int)local_50 * 2;
      local_4c = (ushort *)((int)local_48 + iVar8);
      if (local_5c < (ushort *)0x8) {
        FUN_1025b2d0(local_48,&local_38,iVar8);
        if (uVar13 != 0) {
          puVar11 = local_4c;
          for (uVar13 = uVar13 >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
            puVar11[0] = 0;
            puVar11[1] = 0;
            puVar11 = puVar11 + 2;
          }
          for (iVar8 = 0; uVar13 = local_44, iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
        }
        *(ushort *)((int)ppppuVar2 + (int)local_40 * 2) = 0;
      }
      else {
        local_50 = local_38;
        FUN_1025b2d0(local_48,local_38,iVar8);
        if (uVar13 != 0) {
          puVar11 = local_4c;
          for (uVar13 = uVar13 >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
            puVar11[0] = 0;
            puVar11[1] = 0;
            puVar11 = puVar11 + 2;
          }
          for (iVar8 = 0; uVar13 = local_44, iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
        }
        *(ushort *)((int)ppppuVar2 + (int)local_40 * 2) = 0;
        uVar6 = (int)local_5c * 2 + 2;
        pppppuVar10 = (uint *****)local_50;
        if (0xfff < uVar6) {
          pppppuVar10 = (uint *****)local_50[-1];
          uVar6 = (int)local_5c * 2 + 0x25;
          if (0x1f < (uint)((int)local_50 + (-4 - (int)pppppuVar10))) goto LAB_1023998e;
        }
        FUN_102283a0(pppppuVar10,uVar6);
      }
      local_38 = ppppuVar2;
      if (((ushort *)0x7 < local_24) && (DAT_103235d4 != '\0')) {
        puVar11 = (ushort *)((int)ppppuVar2 + ((int)local_24 + 1U) * 2);
        puVar5 = (ushort *)((int)ppppuVar2 + (int)local_28 * 2 + 2);
        puVar9 = (ushort *)((int)puVar11 + 7U & 0xfffffff8);
        puVar4 = puVar9;
        if (puVar11 <= puVar9) {
          puVar4 = puVar11;
        }
        if (puVar9 < puVar5) {
          puVar5 = puVar9;
        }
        guard_check_icall(local_48,puVar9,puVar4,puVar5);
      }
    }
    else {
      local_48 = (uint ****)((int)local_28 + uVar13);
      if (((local_28 != local_48) && ((ushort *)0x7 < local_24)) && (DAT_103235d4 != '\0')) {
        puVar9 = (ushort *)((int)local_24 * 2 + 9 + (int)local_38 & 0xfffffff8);
        puVar11 = (ushort *)((int)local_38 + ((int)local_28 + 1U) * 2);
        puVar4 = (ushort *)((int)local_38 + ((int)local_48 + 1U) * 2);
        puVar5 = puVar9;
        if (puVar11 <= puVar9) {
          puVar5 = puVar11;
        }
        if (puVar9 < puVar4) {
          puVar4 = puVar9;
        }
        guard_check_icall(local_38,puVar9,puVar5,puVar4);
      }
      pppppuVar10 = &local_38;
      if ((ushort *)0x7 < local_24) {
        pppppuVar10 = (uint *****)local_38;
      }
      local_28 = local_48;
      if (uVar13 != 0) {
        puVar11 = (ushort *)((int)pppppuVar10 + (int)local_50 * 2);
        for (uVar13 = uVar13 >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
          puVar11[0] = 0;
          puVar11[1] = 0;
          puVar11 = puVar11 + 2;
        }
        for (iVar8 = 0; uVar13 = local_44, iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
      }
      *(ushort *)((int)pppppuVar10 + (int)local_48 * 2) = 0;
      local_48 = (uint ****)pppppuVar10;
    }
    pppppuVar10 = &local_38;
    if ((ushort *)0x7 < local_24) {
      pppppuVar10 = (uint *****)local_38;
    }
    iVar8 = FUN_1025d0bb(pppppuVar10,local_28,&local_20,local_6c,*(undefined4 *)(local_68 + 8));
    if (iVar8 != 0) {
      *local_54 = local_60;
      local_54 = local_38;
      if (local_24 < (ushort *)0x8) {
        local_54 = (uint ****)&local_38;
      }
      pppppuVar10 = (uint *****)(iVar8 * 2 + (int)local_54);
      local_54 = (uint ****)((int)local_54 + 2);
      local_39 = (undefined1)param_2;
      local_44 = CONCAT22(param_2._1_2_,(undefined2)local_44);
      local_3a = param_2._3_1_;
      local_40 = (uint ****)pppppuVar10;
      if ((uint *****)local_54 != pppppuVar10) goto LAB_10239880;
      goto LAB_102398e9;
    }
    if ((uint ****)*local_54 == (uint ****)0x16) break;
    uVar13 = uVar13 * 2;
  }
  uVar13 = *(uint *)(local_70 + 0xc) & 0x13 | 4;
  *(uint *)(local_70 + 0xc) = uVar13;
  uVar13 = *(uint *)(local_70 + 0x10) & uVar13;
  if (uVar13 != 0) {
    if ((uVar13 & 4) == 0) {
      pcVar12 = "ios_base::failbit set";
      if ((uVar13 & 2) == 0) {
        pcVar12 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar12 = "ios_base::badbit set";
    }
    uVar7 = FUN_10233110(local_64,1);
    FUN_10073af4(pcVar12,uVar7);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_84,&DAT_10367cf8);
  }
  local_58[1] = param_3;
  *local_58 = param_2;
  if (local_24 < (ushort *)0x8) goto LAB_1023996e;
  if (DAT_103235d4 != '\0') {
    puVar11 = (ushort *)((int)local_38 + ((int)local_24 + 1U) * 2);
    puVar9 = (ushort *)((int)puVar11 + 7U & 0xfffffff8);
    puVar4 = (ushort *)((int)local_38 + ((int)local_28 + 1U) * 2);
    puVar5 = puVar9;
    if (puVar4 <= puVar9) {
      puVar5 = puVar4;
    }
    if (puVar9 < puVar11) {
      puVar11 = puVar9;
    }
    guard_check_icall(local_38,puVar9,puVar5,puVar11);
  }
  iVar8 = (int)local_24 * 2;
  uVar13 = iVar8 + 2;
  pppppuVar10 = (uint *****)local_38;
  if (0xfff < uVar13) {
    pppppuVar10 = (uint *****)local_38[-1];
    uVar6 = (int)local_38 + (-4 - (int)pppppuVar10);
joined_r0x10239960:
    uVar13 = iVar8 + 0x25;
    if (0x1f < uVar6) {
LAB_1023998e:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
LAB_10239995:
                    /* WARNING: Subroutine does not return */
      FUN_100013fb();
    }
  }
  goto LAB_10239966;
LAB_10239880:
  do {
    uVar3 = *(ushort *)local_54;
    local_60 = (uint ***)(uint)uVar3;
    if (param_3 == (int *)0x0) {
LAB_102398d5:
      local_39 = 1;
    }
    else {
      if (*(int *)param_3[8] == 0) {
LAB_102398b0:
        pcVar1 = *(code **)(*param_3 + 0xc);
        (*(code *)PTR_guard_check_icall_1035d810)(local_60);
        uVar3 = (*pcVar1)();
      }
      else {
        iVar8 = *(int *)param_3[0xc];
        if (iVar8 < 1) goto LAB_102398b0;
        *(int *)param_3[0xc] = iVar8 + -1;
        puVar11 = *(ushort **)param_3[8];
        *(ushort **)param_3[8] = puVar11 + 1;
        *puVar11 = uVar3;
      }
      pppppuVar10 = (uint *****)local_40;
      if (uVar3 == 0xffff) goto LAB_102398d5;
    }
    local_54 = (uint ****)((int)local_54 + 2);
  } while ((uint *****)local_54 != pppppuVar10);
LAB_102398e9:
  *(undefined1 *)local_58 = local_39;
  *(undefined2 *)((int)local_58 + 1) = local_44._2_2_;
  *(undefined1 *)((int)local_58 + 3) = local_3a;
  local_58[1] = param_3;
  if (local_24 < (ushort *)0x8) goto LAB_1023996e;
  if (DAT_103235d4 != '\0') {
    puVar11 = (ushort *)((int)local_38 + ((int)local_24 + 1U) * 2);
    puVar5 = (ushort *)((int)local_38 + (int)local_28 * 2 + 2);
    puVar9 = (ushort *)((int)puVar11 + 7U & 0xfffffff8);
    puVar4 = puVar9;
    if (puVar5 <= puVar9) {
      puVar4 = puVar5;
    }
    if (puVar9 < puVar11) {
      puVar11 = puVar9;
    }
    guard_check_icall(local_38,puVar9,puVar4,puVar11);
  }
  iVar8 = (int)local_24 * 2;
  uVar13 = iVar8 + 2;
  pppppuVar10 = (uint *****)local_38;
  if (0xfff < uVar13) {
    pppppuVar10 = (uint *****)local_38[-1];
    uVar6 = (int)local_38 + (-4 - (int)pppppuVar10);
    goto joined_r0x10239960;
  }
LAB_10239966:
  FUN_102283a0(pppppuVar10,uVar13);
LAB_1023996e:
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

