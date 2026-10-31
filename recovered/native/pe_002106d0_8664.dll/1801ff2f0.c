/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ff2f0 */

void FUN_1801ff2f0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  int *local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  int local_294;
  int local_290;
  int local_28c;
  undefined1 local_288 [8];
  longlong local_280 [59];
  longlong local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_2d8;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  (*(code *)param_2[0xf])(param_2,local_a8,4,&local_290);
  if (local_290 < 0) {
    iVar5 = 0xa2;
  }
  else {
    iVar5 = 3;
    if (0xfffffffb < local_290 - 5U) {
      lVar7 = *param_2;
      lVar10 = param_2[2];
      local_28c = FUN_1801ff85c(param_1,0);
      iVar5 = local_28c;
      if (local_28c == 0) {
        iVar5 = 0;
        if (0 < local_290) {
          lVar2 = *(longlong *)(param_1 + 0x2e0);
          lVar6 = 0;
          local_2a8 = lVar10;
          local_2a0 = lVar7;
          do {
            *param_2 = local_a8[lVar6 * 3];
            param_2[2] = local_a8[lVar6 * 3 + 1];
            (*(code *)param_2[0xf])(param_2,local_288,0x14,&local_294);
            iVar5 = 3;
            if ((local_294 - 0x15U < 0xffffffec) ||
               (puVar8 = (undefined1 *)(lVar6 * 0x18 + lVar2 + 0xa8), *(longlong *)(puVar8 + 8) != 0
               )) goto LAB_1801ff4e8;
            local_2b8 = 0;
            local_2b0 = &local_28c;
            uVar4 = FUN_1801cc8d6(uVar1,4,0);
            *(undefined8 *)(puVar8 + 8) = uVar4;
            iVar5 = local_28c;
            if (local_28c != 0) goto LAB_1801ff4e8;
            local_2b8 = 0;
            local_2b0 = &local_28c;
            uVar4 = FUN_1801cc8d6(uVar1,4,0,local_294);
            *(undefined8 *)(puVar8 + 0x10) = uVar4;
            iVar5 = local_28c;
            if (local_28c != 0) goto LAB_1801ff4e8;
            *puVar8 = (char)local_294;
            if (0 < local_294) {
              plVar9 = local_280;
              lVar7 = 0;
              do {
                *param_2 = plVar9[-1] + 1;
                param_2[2] = *plVar9 + -1;
                uVar3 = (*(code *)param_2[9])(param_2);
                *(undefined4 *)(*(longlong *)(puVar8 + 8) + lVar7 * 4) = uVar3;
                uVar3 = (*(code *)param_2[10])(param_2,0);
                *(undefined4 *)(*(longlong *)(puVar8 + 0x10) + lVar7 * 4) = uVar3;
                lVar7 = lVar7 + 1;
                plVar9 = plVar9 + 3;
              } while (lVar7 < local_294);
            }
            lVar6 = lVar6 + 1;
            lVar7 = local_2a0;
            lVar10 = local_2a8;
            iVar5 = local_28c;
          } while (lVar6 < local_290);
        }
        *param_2 = lVar7;
        param_2[2] = lVar10;
      }
    }
  }
LAB_1801ff4e8:
  *(int *)(param_2 + 3) = iVar5;
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_2d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_2d8);
  }
  return;
}

