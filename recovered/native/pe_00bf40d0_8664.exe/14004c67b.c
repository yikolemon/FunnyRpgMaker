/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004c67b */

void FUN_14004c67b(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined1 auStackY_2f8 [32];
  uint local_2b4;
  int local_2b0;
  uint local_2ac;
  undefined1 local_2a8 [8];
  undefined8 local_2a0 [11];
  longlong local_248 [16];
  undefined8 local_1c8 [48];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_2f8;
  lVar1 = *(longlong *)(param_1 + 0x98);
  local_2b0 = 0;
  local_248[0] = 0;
  (*(code *)param_2[0xf])(param_2,local_1c8,0x10,&local_2ac);
  if ((int)local_2ac < 0) {
    local_2b0 = 0xa2;
  }
  else {
    if (0xffffffef < local_2ac - 0x11) {
      uVar2 = *param_2;
      uVar3 = param_2[2];
      lVar6 = 0;
      lVar8 = 0;
      uVar12 = 0;
      do {
        *param_2 = local_1c8[lVar8 * 3];
        param_2[2] = local_1c8[lVar8 * 3 + 1];
        (*(code *)param_2[0xf])(param_2,local_2a8,4,&local_2b4);
        uVar4 = local_2b4;
        uVar7 = (ulonglong)local_2b4;
        if (lVar8 == 0) {
          if (local_2b4 - 5 < 0xfffffffc) goto LAB_14004c90c;
          local_2b0 = FUN_14004ce96(param_1,local_2ac,local_2b4);
          if (local_2b0 != 0) goto LAB_14004c6ff;
          lVar6 = FUN_14001f231(lVar1,4,0,local_2ac * uVar4,0,&local_2b0);
          local_248[0] = lVar6;
          if (local_2b0 != 0) goto LAB_14004c6ff;
          uVar12 = uVar4;
          if (1 < (longlong)(int)local_2ac) {
            lVar10 = lVar6 + uVar7 * 4;
            lVar9 = 1;
            do {
              local_248[lVar9] = lVar10;
              lVar9 = lVar9 + 1;
              lVar10 = lVar10 + uVar7 * 4;
            } while ((int)local_2ac != lVar9);
          }
        }
        else if (local_2b4 != uVar12) {
LAB_14004c90c:
          local_2b0 = 3;
          goto LAB_14004c6ff;
        }
        if (0 < (int)local_2b4) {
          puVar11 = local_2a0;
          lVar10 = 0;
          do {
            *param_2 = puVar11[-1];
            param_2[2] = *puVar11;
            uVar5 = (*(code *)param_2[10])(param_2,0);
            *(undefined4 *)(local_248[lVar8] + lVar10 * 4) = uVar5;
            lVar10 = lVar10 + 1;
            puVar11 = puVar11 + 3;
          } while (lVar10 < (int)local_2b4);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)local_2ac);
      *param_2 = uVar2;
      param_2[2] = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x2e0);
      if (*(longlong *)(lVar8 + 0x28) != 0) {
        FUN_14001c53d(lVar1,*(longlong *)(lVar8 + 0x28));
        *(undefined8 *)(lVar8 + 0x28) = 0;
      }
      if (0 < (int)local_2ac) {
        uVar7 = 0;
        do {
          *(longlong *)(lVar8 + 0x28 + uVar7 * 8) = local_248[uVar7];
          local_248[uVar7] = 0;
          uVar7 = uVar7 + 1;
          lVar6 = local_248[0];
        } while (local_2ac != uVar7);
      }
      goto LAB_14004c6ff;
    }
    local_2b0 = 3;
  }
  lVar6 = 0;
LAB_14004c6ff:
  FUN_14001c53d(lVar1,lVar6);
  *(int *)(param_2 + 3) = local_2b0;
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_2f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_2f8);
  }
  return;
}

