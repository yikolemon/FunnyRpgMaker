/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026bc50 */

void FUN_18026bc50(longlong param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,byte param_7,byte param_8)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 *******pppppppuVar15;
  ulonglong uVar16;
  char *pcVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  byte *pbVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 uVar24;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  ulonglong local_d8;
  undefined1 local_c8;
  int local_c4;
  undefined4 *local_c0;
  longlong local_b8;
  undefined8 local_b0 [2];
  undefined1 local_a0 [40];
  undefined8 ******local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  undefined2 local_58;
  byte local_56;
  ushort local_55;
  ulonglong local_50;
  
  puVar19 = auStack_f8;
  puVar18 = auStack_f8;
  local_50 = DAT_180402640 ^ (ulonglong)auStack_f8;
  local_b0[0] = param_6;
  local_58 = 0x2521;
  local_55 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  local_78 = (undefined8 *******)0x0;
  if (param_8 == 0) {
    local_56 = param_7;
  }
  else {
    local_56 = param_8;
    local_55 = (ushort)param_7;
  }
  local_c0 = param_3;
  local_b8 = param_1;
  piVar11 = (int *)FUN_18027e66c();
  local_c4 = *piVar11;
  uVar20 = 0x10;
  while( true ) {
    lVar13 = local_68;
    if (local_60 - local_68 < uVar20) {
      local_d8 = local_d8 & 0xffffffffffffff00;
      FUN_180244710(&local_78,uVar20,local_c8,uVar20);
    }
    else {
      lVar1 = local_68 + uVar20;
      if (((local_68 != lVar1) && (0xf < local_60)) && (DAT_18034e408 != '\0')) {
        uVar12 = (longlong)local_78 + local_68 + 1;
        uVar22 = (longlong)local_78 + lVar1 + 1;
        uVar16 = local_60 + 8 + (longlong)local_78 & 0xfffffffffffffff8;
        uVar23 = uVar16;
        if (uVar12 <= uVar16) {
          uVar23 = uVar12;
        }
        if (uVar16 < uVar22) {
          uVar22 = uVar16;
        }
        _guard_check_icall(local_78,uVar16,uVar23,uVar22);
      }
      pppppppuVar15 = &local_78;
      if (0xf < local_60) {
        pppppppuVar15 = (undefined8 *******)local_78;
      }
      local_68 = lVar1;
      FUN_1802a89a0(lVar13 + (longlong)pppppppuVar15,0,uVar20);
      *(undefined1 *)(lVar13 + (longlong)pppppppuVar15 + uVar20) = 0;
    }
    local_d8 = *(ulonglong *)(local_b8 + 0x10);
    pppppppuVar15 = &local_78;
    if (0xf < local_60) {
      pppppppuVar15 = (undefined8 *******)local_78;
    }
    lVar13 = FUN_18026f1e8(pppppppuVar15,local_68,&local_58,local_b0[0]);
    puVar9 = local_c0;
    if (lVar13 != 0) {
      *piVar11 = local_c4;
      uVar24 = *(undefined1 *)local_c0;
      lVar1 = *(longlong *)(local_c0 + 2);
      pppppppuVar15 = (undefined8 *******)local_78;
      if (local_60 < 0x10) {
        pppppppuVar15 = &local_78;
      }
      pbVar21 = (byte *)((longlong)pppppppuVar15 + 1);
      goto joined_r0x00018026beb4;
    }
    if (*piVar11 == 0x16) break;
    uVar20 = uVar20 * 2;
  }
  *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) & 0x13;
  *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 4;
  uVar10 = *(uint *)(param_4 + 0x10) & *(uint *)(param_4 + 0x14);
  if (uVar10 != 0) {
    if ((uVar10 & 4) == 0) {
      pcVar17 = "ios_base::failbit set";
      if ((uVar10 & 2) == 0) {
        pcVar17 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar17 = "ios_base::badbit set";
    }
    uVar14 = FUN_180244930(local_b0,1);
    FUN_1800742d8(local_a0,pcVar17,uVar14);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_a0,&DAT_1803a63f8);
  }
  uVar6 = local_c0[1];
  uVar7 = local_c0[2];
  uVar8 = local_c0[3];
  *param_2 = *local_c0;
  param_2[1] = uVar6;
  param_2[2] = uVar7;
  param_2[3] = uVar8;
  puVar19 = auStack_f8;
  if (local_60 < 0x10) goto LAB_18026bfb6;
  if (DAT_18034e408 != '\0') {
    uVar23 = local_60 + 1 + (longlong)local_78;
    uVar12 = local_68 + 1 + (longlong)local_78;
    uVar22 = uVar23 + 7 & 0xfffffffffffffff8;
    uVar20 = uVar22;
    if (uVar12 <= uVar22) {
      uVar20 = uVar12;
    }
    if (uVar22 < uVar23) {
      uVar23 = uVar22;
    }
    _guard_check_icall(local_78,uVar22,uVar20,uVar23);
  }
  pppppppuVar15 = (undefined8 *******)local_78;
  puVar18 = auStack_f8;
  if (0xfff < local_60 + 1) {
    pppppppuVar15 = (undefined8 *******)local_78[-1];
    uVar20 = (longlong)local_78 + (-8 - (longlong)pppppppuVar15);
joined_r0x00018026bf9c:
    puVar18 = auStack_f8;
    if (0x1f < uVar20) {
      pppppppuVar15 = (undefined8 *******)0x5;
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar18 = auStack_f0;
    }
  }
LAB_18026bfb1:
  *(undefined8 *)(puVar18 + -8) = 0x18026bfb6;
  thunk_FUN_1802464a0(pppppppuVar15);
  puVar19 = puVar18;
LAB_18026bfb6:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar19 + -8) = &UNK_18026bfc5;
  FUN_1802396d0(local_50 ^ (ulonglong)puVar19);
joined_r0x00018026beb4:
  if (pbVar21 == (byte *)((longlong)pppppppuVar15 + lVar13)) goto LAB_18026bf18;
  if (lVar1 == 0) {
LAB_18026bf05:
    uVar24 = 1;
  }
  else {
    bVar2 = *pbVar21;
    if (**(longlong **)(lVar1 + 0x40) == 0) {
LAB_18026beed:
      uVar10 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar1,bVar2);
    }
    else {
      iVar3 = **(int **)(lVar1 + 0x58);
      if (iVar3 < 1) goto LAB_18026beed;
      **(int **)(lVar1 + 0x58) = iVar3 + -1;
      pbVar4 = (byte *)**(longlong **)(lVar1 + 0x40);
      **(longlong **)(lVar1 + 0x40) = (longlong)(pbVar4 + 1);
      *pbVar4 = bVar2;
      uVar10 = (uint)bVar2;
    }
    if (uVar10 == 0xffffffff) goto LAB_18026bf05;
  }
  pbVar21 = pbVar21 + 1;
  goto joined_r0x00018026beb4;
LAB_18026bf18:
  *(undefined1 *)param_2 = uVar24;
  *(undefined4 *)((longlong)param_2 + 1) = *(undefined4 *)((longlong)puVar9 + 1);
  *(undefined2 *)((longlong)param_2 + 5) = *(undefined2 *)((longlong)puVar9 + 5);
  *(undefined1 *)((longlong)param_2 + 7) = *(undefined1 *)((longlong)puVar9 + 7);
  *(longlong *)(param_2 + 2) = lVar1;
  if (local_60 < 0x10) goto LAB_18026bfb6;
  if (DAT_18034e408 != '\0') {
    uVar23 = local_60 + 1 + (longlong)local_78;
    uVar12 = local_68 + 1 + (longlong)local_78;
    uVar22 = uVar23 + 7 & 0xfffffffffffffff8;
    uVar20 = uVar22;
    if (uVar12 <= uVar22) {
      uVar20 = uVar12;
    }
    if (uVar22 < uVar23) {
      uVar23 = uVar22;
    }
    _guard_check_icall(local_78,uVar22,uVar20,uVar23);
  }
  pppppppuVar15 = (undefined8 *******)local_78;
  if (0xfff < local_60 + 1) {
    pppppppuVar15 = (undefined8 *******)local_78[-1];
    uVar20 = (longlong)local_78 + (-8 - (longlong)pppppppuVar15);
    goto joined_r0x00018026bf9c;
  }
  goto LAB_18026bfb1;
}

