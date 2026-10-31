/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400fecf0 */

void FUN_1400fecf0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined1 param_4,
                  longlong param_5,undefined1 param_6,char *param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *******pppppppuVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [24];
  longlong local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [32];
  undefined8 ******local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  undefined1 local_58 [10];
  char local_4e;
  undefined1 local_4d [5];
  ulonglong local_48;
  
  puVar9 = auStack_118;
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_118;
  uVar1 = *(undefined8 *)(*(longlong *)(param_5 + 0x40) + 8);
  local_c8 = param_4;
  uStack_b0 = uVar1;
  local_a8 = param_3;
  local_a0 = param_1;
  (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar1);
  uVar4 = FUN_14000b3ff(&local_b8);
  lVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar1);
  if (lVar5 != 0) {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar5,1);
  }
  (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar4,"0123456789-",&DAT_140165a64,local_58);
  uVar13 = 0;
  uVar12 = 0;
  uVar10 = *(ulonglong *)(param_7 + 0x10);
  uVar8 = uVar12;
  if (uVar10 != 0) {
    pcVar7 = param_7;
    if (0xf < *(ulonglong *)(param_7 + 0x18)) {
      pcVar7 = *(char **)param_7;
    }
    if (*pcVar7 == local_4e) {
      uVar13 = 1;
      uVar12 = 1;
      uVar8 = uVar12;
    }
  }
  for (; uVar12 < uVar10; uVar12 = uVar12 + 1) {
    pcVar7 = param_7;
    if (0xf < *(ulonglong *)(param_7 + 0x18)) {
      pcVar7 = *(char **)param_7;
    }
    lVar5 = thunk_FUN_1400daaa0(local_58,local_4d,pcVar7[uVar12]);
    if (9 < (ulonglong)(lVar5 - (longlong)local_58)) break;
  }
  if (0xf < *(ulonglong *)(param_7 + 0x18)) {
    param_7 = *(char **)param_7;
  }
  local_78 = (undefined8 *******)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  FUN_1400061f6(&local_78,param_7 + uVar8,uVar12 - uVar8);
  uVar3 = local_58[0];
  if (local_68 == 0) {
    if (local_60 == 0) {
      FUN_1400d95a0(&local_78,1,local_c8,local_58[0]);
    }
    else {
      if ((0xf < local_60) && (DAT_140166098 != '\0')) {
        uVar12 = local_60 + 8 + (longlong)local_78 & 0xfffffffffffffff8;
        uVar10 = uVar12;
        if ((longlong)local_78 + 1U <= uVar12) {
          uVar10 = (longlong)local_78 + 1U;
        }
        uVar8 = (longlong)local_78 + 2U;
        if (uVar12 < (longlong)local_78 + 2U) {
          uVar8 = uVar12;
        }
        _guard_check_icall(local_78,uVar12,uVar10,uVar8);
      }
      local_68 = 1;
      pppppppuVar6 = &local_78;
      if (0xf < local_60) {
        pppppppuVar6 = (undefined8 *******)local_78;
      }
      *(undefined1 *)pppppppuVar6 = uVar3;
      *(undefined1 *)((longlong)pppppppuVar6 + 1) = 0;
    }
  }
  local_e0 = FUN_140006874(local_98,&local_78);
  local_b8 = *local_a8;
  uStack_b4 = local_a8[1];
  uStack_b0 = *(undefined8 *)(local_a8 + 2);
  local_d8 = local_58[0];
  local_f0 = param_6;
  local_f8 = param_5;
  local_e8 = uVar13;
  FUN_1400fefd0(local_a0,param_2,&local_b8,local_c8);
  if (0xf < local_60) {
    if (DAT_140166098 != '\0') {
      uVar12 = local_60 + 1 + (longlong)local_78;
      uVar11 = local_68 + 1 + (longlong)local_78;
      uVar8 = uVar12 + 7 & 0xfffffffffffffff8;
      uVar10 = uVar8;
      if (uVar11 <= uVar8) {
        uVar10 = uVar11;
      }
      if (uVar8 < uVar12) {
        uVar12 = uVar8;
      }
      _guard_check_icall(local_78,uVar8,uVar10,uVar12);
    }
    pppppppuVar6 = (undefined8 *******)local_78;
    puVar9 = auStack_118;
    if ((0xfff < local_60 + 1) &&
       (pppppppuVar6 = (undefined8 *******)local_78[-1], puVar9 = auStack_118,
       0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pppppppuVar6)))) {
      pcVar2 = (code *)swi(0x29);
      pppppppuVar6 = (undefined8 *******)(*pcVar2)(5);
      puVar9 = auStack_110;
    }
    *(undefined8 *)(puVar9 + -8) = 0x1400fefa4;
    thunk_FUN_1400ddcd0(pppppppuVar6);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -8) = &UNK_1400fefb3;
  FUN_1400d3720(local_48 ^ (ulonglong)puVar9);
}

