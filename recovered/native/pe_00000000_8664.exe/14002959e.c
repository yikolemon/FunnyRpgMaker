/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002959e */

void FUN_14002959e(ulonglong *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined3 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined3 *puVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined3 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  uVar5 = *param_1;
  uVar3 = param_1[1];
  uVar2 = uVar5;
  local_38 = param_2;
  if (uVar3 < 4) {
LAB_140029601:
    lVar6 = (longlong)(uVar3 + uVar5) - uVar2;
    if (lVar6 != 0) {
      lVar7 = 0;
      local_30[1] = 0;
      local_30[0]._0_4_ = 0;
      do {
        puVar1 = (undefined1 *)(uVar2 + lVar7);
        *(undefined1 *)((longlong)local_30 + lVar7) = *puVar1;
        lVar7 = lVar7 + 1;
      } while (puVar1 + 1 != (undefined1 *)(uVar3 + uVar5));
      puVar8 = local_30;
      do {
        puVar4 = (undefined3 *)FUN_140029696(&local_38,puVar8,uVar2);
        if (puVar4 == (undefined3 *)0x0) break;
        uVar2 = (longlong)puVar4 + (uVar2 - (longlong)puVar8);
        puVar8 = puVar4;
      } while (puVar4 < (undefined3 *)((longlong)local_30 + lVar6));
    }
  }
  else {
    do {
      if ((uVar5 + uVar3) - 3 <= uVar2) {
        uVar5 = *param_1;
        uVar3 = param_1[1];
        goto LAB_140029601;
      }
      uVar2 = FUN_140029696(&local_38,uVar2,uVar2);
    } while (uVar2 != 0);
  }
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
}

