/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180254880 */

void FUN_180254880(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  short param_5,byte param_6)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined8 uVar4;
  short *psVar5;
  code *pcVar6;
  short sVar7;
  undefined8 uVar8;
  longlong lVar9;
  short ****ppppsVar10;
  short *****pppppsVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  undefined1 *puVar14;
  undefined1 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  longlong lVar20;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  short local_e8;
  uint local_e0;
  short local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  short ****local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  ulonglong local_58;
  
  puVar14 = auStack_108;
  local_58 = DAT_180402640 ^ (ulonglong)auStack_108;
  local_c8 = param_5;
  lVar20 = 0;
  local_c0 = param_4;
  local_b8 = param_2;
  if ((*(uint *)(param_4 + 0x18) & 0x4000) == 0) {
    local_a8 = *param_3;
    uStack_a0 = *(undefined4 *)(param_3 + 1);
    uStack_9c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_e0 = (uint)param_6;
    local_e8 = param_5;
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(*(undefined4 *)param_3,param_2,&local_a8);
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(param_4 + 0x40) + 8);
    local_a8 = param_1;
    uStack_70 = uVar4;
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar4);
    uVar8 = FUN_1802565b0(&local_78);
    lVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar4);
    if (lVar9 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar9,1);
    }
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 7;
    local_98 = (short ****)0x0;
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar8,&local_78);
    puVar14 = auStack_108;
    if (7 < local_80) {
      if (DAT_18034e408 != '\0') {
        uVar16 = (longlong)local_98 + (local_80 + 1) * 2;
        uVar1 = (longlong)local_98 + (local_88 + 1) * 2;
        uVar12 = uVar16 + 7 & 0xfffffffffffffff8;
        uVar17 = uVar12;
        if (uVar1 <= uVar12) {
          uVar17 = uVar1;
        }
        if (uVar12 < uVar16) {
          uVar16 = uVar12;
        }
        _guard_check_icall(local_98,uVar12,uVar17,uVar16);
      }
      ppppsVar10 = local_98;
      puVar14 = auStack_108;
      if ((0xfff < local_80 * 2 + 2) &&
         (ppppsVar10 = (short ****)local_98[-1], puVar14 = auStack_108,
         0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)ppppsVar10)))) {
        pcVar6 = (code *)swi(0x29);
        ppppsVar10 = (short ****)(*pcVar6)(5);
        puVar14 = auStack_100;
      }
      *(undefined8 *)(puVar14 + -8) = 0x180254a17;
      thunk_FUN_1802464a0(ppppsVar10);
    }
    local_88 = 0;
    local_80 = 7;
    local_98 = (short ****)((ulonglong)local_98 & 0xffffffffffff0000);
    *(undefined8 *)(puVar14 + -8) = 0x180254a35;
    FUN_180247e00(&local_98,&local_78);
    *(undefined8 *)(puVar14 + -8) = 0x180254a3e;
    FUN_180248010(&local_78);
    uVar16 = *(ulonglong *)(param_4 + 0x28);
    if ((0 < (longlong)uVar16) && (local_88 < uVar16)) {
      lVar20 = uVar16 - local_88;
    }
    if ((*(uint *)(param_4 + 0x18) & 0x1c0) != 0x40) {
      uVar15 = *(undefined1 *)param_3;
      lVar9 = param_3[1];
      for (; lVar20 != 0; lVar20 = lVar20 + -1) {
        if (lVar9 == 0) {
LAB_180254acf:
          uVar15 = 1;
        }
        else {
          if (**(longlong **)(lVar9 + 0x40) == 0) {
LAB_180254ab5:
            *(undefined8 *)(puVar14 + -8) = 0x180254ac9;
            sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar9,param_5);
          }
          else {
            iVar3 = **(int **)(lVar9 + 0x58);
            if (iVar3 < 1) goto LAB_180254ab5;
            **(int **)(lVar9 + 0x58) = iVar3 + -1;
            psVar5 = (short *)**(longlong **)(lVar9 + 0x40);
            **(longlong **)(lVar9 + 0x40) = (longlong)(psVar5 + 1);
            *psVar5 = param_5;
            sVar7 = param_5;
          }
          if (sVar7 == -1) goto LAB_180254acf;
        }
      }
      *(undefined1 *)param_3 = uVar15;
      lVar20 = 0;
    }
    pppppsVar11 = &local_98;
    if (7 < local_80) {
      pppppsVar11 = (short *****)local_98;
    }
    uVar15 = *(undefined1 *)param_3;
    lVar9 = param_3[1];
    for (uVar16 = local_88; uVar16 != 0; uVar16 = uVar16 - 1) {
      if (lVar9 == 0) {
LAB_180254b58:
        uVar15 = 1;
      }
      else {
        sVar7 = *(short *)pppppsVar11;
        if (**(longlong **)(lVar9 + 0x40) == 0) {
LAB_180254b3a:
          *(undefined8 *)(puVar14 + -8) = 0x180254b4e;
          sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar9,sVar7);
        }
        else {
          iVar3 = **(int **)(lVar9 + 0x58);
          if (iVar3 < 1) goto LAB_180254b3a;
          **(int **)(lVar9 + 0x58) = iVar3 + -1;
          psVar5 = (short *)**(longlong **)(lVar9 + 0x40);
          **(longlong **)(lVar9 + 0x40) = (longlong)(psVar5 + 1);
          *psVar5 = sVar7;
        }
        if (sVar7 == -1) goto LAB_180254b58;
      }
      pppppsVar11 = (short *****)((longlong)pppppsVar11 + 2);
      param_5 = local_c8;
    }
    *(undefined1 *)param_3 = uVar15;
    *(undefined8 *)(local_c0 + 0x28) = 0;
    local_78 = *(undefined4 *)param_3;
    uStack_74 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_70 = param_3[1];
    *(longlong *)(puVar14 + 0x20) = lVar20;
    *(undefined8 *)(puVar14 + -8) = 0x180254ba0;
    FUN_180255f70(local_a8,local_b8,&local_78,param_5);
    if (7 < local_80) {
      if (DAT_18034e408 != '\0') {
        puVar19 = (undefined2 *)((longlong)local_98 + (local_80 + 1) * 2);
        puVar2 = (undefined2 *)((longlong)local_98 + (local_88 + 1) * 2);
        puVar13 = (undefined2 *)((longlong)puVar19 + 7U & 0xfffffffffffffff8);
        puVar18 = puVar13;
        if (puVar2 <= puVar13) {
          puVar18 = puVar2;
        }
        if (puVar13 < puVar19) {
          puVar19 = puVar13;
        }
        *(undefined8 *)(puVar14 + -8) = 0x180254be8;
        _guard_check_icall(local_98,puVar13,puVar18,puVar19);
      }
      pppppsVar11 = (short *****)local_98;
      if ((0xfff < local_80 * 2 + 2) &&
         (pppppsVar11 = (short *****)local_98[-1],
         0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pppppsVar11)))) {
        pcVar6 = (code *)swi(0x29);
        pppppsVar11 = (short *****)(*pcVar6)(5);
        puVar14 = puVar14 + 8;
      }
      *(undefined8 *)(puVar14 + -8) = 0x180254c27;
      thunk_FUN_1802464a0(pppppsVar11);
    }
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar14 + -8) = &UNK_180254c36;
  FUN_1802396d0(local_58 ^ (ulonglong)puVar14);
}

