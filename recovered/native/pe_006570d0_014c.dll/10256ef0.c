/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10256ef0 */

void FUN_10256ef0(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4,undefined4 param_5
                 ,undefined4 param_6,byte param_7,byte param_8)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *****pppppuVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint extraout_ECX;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  undefined1 local_70 [20];
  undefined1 local_5c [4];
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  byte *local_40;
  byte *local_3c;
  undefined1 local_37;
  byte local_36;
  undefined1 local_35;
  undefined4 ****local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  byte *local_24;
  uint local_20;
  undefined2 local_1c;
  byte local_1a;
  ushort local_19;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1028a49d;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = param_1;
  local_54 = param_4;
  local_50 = param_6;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  local_1c = 0x2521;
  local_19 = 0;
  local_24 = (byte *)0x0;
  local_20 = 0xf;
  local_34 = (undefined4 *****)0x0;
  local_8 = 0;
  if (param_8 == 0) {
    local_1a = param_7;
  }
  else {
    local_1a = param_8;
    local_19 = (ushort)param_7;
  }
  piVar2 = (int *)FUN_10268ffd(local_14);
  uVar11 = 0x10;
  local_58 = *piVar2;
  local_44 = piVar2;
  while( true ) {
    local_40 = local_24;
    if (local_20 - (int)local_24 < uVar11) {
      FUN_10232e70(uVar11,local_58,uVar11,0);
    }
    else {
      local_3c = local_24 + uVar11;
      if (((local_24 != local_3c) && (0xf < local_20)) && (DAT_103235d4 != '\0')) {
        pbVar7 = (byte *)((int)local_34 + local_20 + 8 & 0xfffffff8);
        pbVar9 = pbVar7;
        if (local_24 + 1 + (int)local_34 <= pbVar7) {
          pbVar9 = local_24 + 1 + (int)local_34;
        }
        pbVar8 = local_3c + (int)local_34 + 1;
        if (pbVar7 < local_3c + (int)local_34 + 1) {
          pbVar8 = pbVar7;
        }
        guard_check_icall(local_34,pbVar7,pbVar9,pbVar8);
      }
      pppppuVar3 = &local_34;
      if (0xf < local_20) {
        pppppuVar3 = (undefined4 *****)local_34;
      }
      pbVar9 = (byte *)((int)pppppuVar3 + (int)local_40);
      local_24 = local_3c;
      _memset(pbVar9,0,uVar11);
      pbVar9[uVar11] = 0;
      piVar2 = local_44;
    }
    pppppuVar3 = &local_34;
    if (0xf < local_20) {
      pppppuVar3 = (undefined4 *****)local_34;
    }
    iVar4 = FUN_1025bf64(pppppuVar3,local_24,&local_1c,local_50,*(undefined4 *)(local_4c + 8));
    if (iVar4 != 0) {
      *piVar2 = local_58;
      pppppuVar3 = (undefined4 *****)local_34;
      if (local_20 < 0x10) {
        pppppuVar3 = &local_34;
      }
      local_40 = (byte *)(iVar4 + (int)pppppuVar3);
      local_3c = (byte *)((int)pppppuVar3 + 1);
      local_35 = (undefined1)param_2;
      local_44 = (int *)CONCAT22(param_2._1_2_,(undefined2)local_44);
      local_37 = param_2._3_1_;
      if (local_3c != local_40) goto LAB_10257133;
      goto LAB_10257194;
    }
    if (*piVar2 == 0x16) break;
    uVar11 = uVar11 * 2;
  }
  uVar11 = *(uint *)(local_54 + 0xc) & 0x13 | 4;
  *(uint *)(local_54 + 0xc) = uVar11;
  uVar11 = *(uint *)(local_54 + 0x10) & uVar11;
  if (uVar11 != 0) goto LAB_1025723a;
  local_48[1] = param_3;
  *local_48 = param_2;
  if (local_20 < 0x10) goto LAB_10257213;
  if (DAT_103235d4 != '\0') {
    pbVar7 = (byte *)(local_20 + 1 + (int)local_34);
    pbVar8 = (byte *)((uint)(pbVar7 + 7) & 0xfffffff8);
    pbVar9 = pbVar8;
    if (local_24 + 1 + (int)local_34 <= pbVar8) {
      pbVar9 = local_24 + 1 + (int)local_34;
    }
    if (pbVar8 < pbVar7) {
      pbVar7 = pbVar8;
    }
    guard_check_icall(local_34,pbVar8,pbVar9,pbVar7);
  }
  uVar11 = local_20 + 1;
  pppppuVar3 = (undefined4 *****)local_34;
  if (0xfff < uVar11) {
    pppppuVar3 = (undefined4 *****)local_34[-1];
    uVar5 = (int)local_34 + (-4 - (int)pppppuVar3);
    goto joined_r0x10257205;
  }
  goto LAB_1025720b;
LAB_10257133:
  do {
    local_36 = *local_3c;
    if (param_3 == (int *)0x0) {
LAB_10257181:
      local_35 = 1;
    }
    else {
      if (*(int *)param_3[8] == 0) {
LAB_10257164:
        pcVar1 = *(code **)(*param_3 + 0xc);
        (*(code *)PTR_guard_check_icall_1035d810)(local_36);
        uVar11 = (*pcVar1)();
      }
      else {
        iVar4 = *(int *)param_3[0xc];
        if (iVar4 < 1) goto LAB_10257164;
        *(int *)param_3[0xc] = iVar4 + -1;
        pbVar9 = *(byte **)param_3[8];
        *(byte **)param_3[8] = pbVar9 + 1;
        *pbVar9 = local_36;
        uVar11 = (uint)local_36;
      }
      if (uVar11 == 0xffffffff) goto LAB_10257181;
    }
    local_3c = local_3c + 1;
  } while (local_3c != local_40);
LAB_10257194:
  *(undefined1 *)local_48 = local_35;
  *(undefined2 *)((int)local_48 + 1) = local_44._2_2_;
  *(undefined1 *)((int)local_48 + 3) = local_37;
  local_48[1] = param_3;
  if (local_20 < 0x10) goto LAB_10257213;
  if (DAT_103235d4 != '\0') {
    pbVar7 = (byte *)(local_20 + 1 + (int)local_34);
    pbVar8 = (byte *)((uint)(pbVar7 + 7) & 0xfffffff8);
    pbVar9 = pbVar8;
    if ((byte *)((int)local_34 + (int)(local_24 + 1)) <= pbVar8) {
      pbVar9 = (byte *)((int)local_34 + (int)(local_24 + 1));
    }
    if (pbVar8 < pbVar7) {
      pbVar7 = pbVar8;
    }
    guard_check_icall(local_34,pbVar8,pbVar9,pbVar7);
  }
  uVar11 = local_20 + 1;
  pppppuVar3 = (undefined4 *****)local_34;
  if (0xfff < uVar11) {
    pppppuVar3 = (undefined4 *****)local_34[-1];
    uVar5 = (int)local_34 + (-4 - (int)pppppuVar3);
joined_r0x10257205:
    uVar11 = local_20 + 0x24;
    if (0x1f < uVar5) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      uVar11 = extraout_ECX;
LAB_1025723a:
      if ((uVar11 & 4) == 0) {
        pcVar10 = "ios_base::failbit set";
        if ((uVar11 & 2) == 0) {
          pcVar10 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar10 = "ios_base::badbit set";
      }
      uVar6 = FUN_10233110(local_5c,1);
      FUN_10073af4(pcVar10,uVar6);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_70,&DAT_10367cf8);
    }
  }
LAB_1025720b:
  FUN_102283a0(pppppuVar3,uVar11);
LAB_10257213:
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

