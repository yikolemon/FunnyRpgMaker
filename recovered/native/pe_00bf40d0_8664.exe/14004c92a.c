/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004c92a */

void FUN_14004c92a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  undefined1 auStackY_2d8 [32];
  uint local_294;
  int local_290;
  int local_28c;
  undefined1 local_288 [8];
  longlong local_280 [59];
  longlong local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_2d8;
  lVar1 = *(longlong *)(param_1 + 0x98);
  (*(code *)param_2[0xf])(param_2,local_a8,4,&local_290);
  if (local_290 < 0) {
    iVar6 = 0xa2;
  }
  else {
    iVar6 = 3;
    if (0xfffffffb < local_290 - 5U) {
      lVar2 = *param_2;
      lVar3 = param_2[2];
      local_28c = FUN_14004ce96(param_1,0,local_290);
      iVar6 = local_28c;
      if (local_28c == 0) {
        iVar6 = 0;
        if (0 < local_290) {
          lVar4 = *(longlong *)(param_1 + 0x2e0);
          lVar8 = 0;
          do {
            *param_2 = local_a8[lVar8 * 3];
            param_2[2] = local_a8[lVar8 * 3 + 1];
            (*(code *)param_2[0xf])(param_2,local_288,0x14,&local_294);
            iVar6 = 3;
            if ((local_294 - 0x15 < 0xffffffec) ||
               (puVar9 = (undefined1 *)(lVar8 * 0x18 + lVar4 + 0xa8), *(longlong *)(puVar9 + 8) != 0
               )) goto LAB_14004cb22;
            lVar7 = FUN_14001f231(lVar1,4,0,local_294,0,&local_28c);
            *(longlong *)(puVar9 + 8) = lVar7;
            iVar6 = local_28c;
            if (local_28c != 0) goto LAB_14004cb22;
            lVar7 = FUN_14001f231(lVar1,4,0,local_294,0,&local_28c);
            *(longlong *)(puVar9 + 0x10) = lVar7;
            iVar6 = local_28c;
            if (local_28c != 0) goto LAB_14004cb22;
            *puVar9 = (char)local_294;
            if (0 < (int)local_294) {
              plVar10 = local_280;
              lVar7 = 0;
              do {
                *param_2 = plVar10[-1] + 1;
                param_2[2] = *plVar10 + -1;
                uVar5 = (*(code *)param_2[9])(param_2);
                *(undefined4 *)(*(longlong *)(puVar9 + 8) + lVar7 * 4) = uVar5;
                uVar5 = (*(code *)param_2[10])(param_2,0);
                *(undefined4 *)(*(longlong *)(puVar9 + 0x10) + lVar7 * 4) = uVar5;
                lVar7 = lVar7 + 1;
                plVar10 = plVar10 + 3;
              } while (lVar7 < (int)local_294);
            }
            lVar8 = lVar8 + 1;
            iVar6 = local_28c;
          } while (lVar8 < local_290);
        }
        *param_2 = lVar2;
        param_2[2] = lVar3;
      }
    }
  }
LAB_14004cb22:
  *(int *)(param_2 + 3) = iVar6;
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_2d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_2d8);
  }
  return;
}

