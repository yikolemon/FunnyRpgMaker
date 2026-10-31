/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180033ee8 */

void FUN_180033ee8(undefined4 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 auStack_b8 [40];
  undefined4 *local_90;
  longlong local_88;
  longlong local_80;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_b8;
  local_90 = param_1;
  FUN_18003404a(param_2,0x22);
  puVar11 = (undefined1 *)*param_3 + param_3[1];
  puVar9 = (undefined1 *)*param_3;
  do {
    local_68 = (undefined1 *)0x0;
    local_60 = 0;
    uStack_50 = (longlong)puVar11 - (longlong)puVar9;
    local_70 = puVar11;
    local_58 = puVar9;
    FUN_180033a1a(&local_58,&local_70);
    puVar5 = local_70;
    plVar2 = (longlong *)*param_2;
    lVar10 = param_2[1];
    for (; puVar6 = local_68, puVar9 != puVar5; puVar9 = puVar9 + 1) {
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        uVar1 = *puVar9;
        lVar7 = plVar2[1];
        uVar8 = lVar7 + 1;
        if ((ulonglong)plVar2[2] < uVar8) {
          (*(code *)plVar2[3])(plVar2);
          lVar7 = plVar2[1];
          uVar8 = lVar7 + 1;
        }
        plVar2[1] = uVar8;
        *(undefined1 *)(*plVar2 + lVar7) = uVar1;
        lVar10 = lVar10 + -1;
      }
    }
    *param_2 = (longlong)plVar2;
    param_2[1] = lVar10;
    if (local_68 == (undefined1 *)0x0) break;
    local_88 = *param_2;
    local_80 = param_2[1];
    FUN_180034095(&local_58,&local_88,&local_70);
    *(undefined4 *)param_2 = (undefined4)local_58;
    *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
    puVar9 = puVar6;
  } while (puVar6 != puVar11);
  FUN_18003404a(param_2,0x22);
  uVar3 = *(undefined4 *)((longlong)param_2 + 4);
  lVar10 = param_2[1];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *local_90 = (int)*param_2;
  local_90[1] = uVar3;
  local_90[2] = (int)lVar10;
  local_90[3] = uVar4;
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_b8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_b8);
}

