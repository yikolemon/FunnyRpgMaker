/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ff041 */

void FUN_1801ff041(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  int *local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  uint local_2b4;
  int local_2b0;
  uint local_2ac;
  undefined1 local_2a8 [8];
  undefined8 local_2a0 [11];
  longlong local_248 [16];
  undefined8 local_1c8 [48];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_2f8;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  local_2b0 = 0;
  local_248[0] = 0;
  (*(code *)param_2[0xf])(param_2,local_1c8,0x10,&local_2ac);
  if ((int)local_2ac < 0) {
    local_2b0 = 0xa2;
  }
  else {
    if (0xffffffef < local_2ac - 0x11) {
      local_2c0 = *param_2;
      local_2c8 = param_2[2];
      lVar4 = 0;
      lVar6 = 0;
      uVar10 = 0;
      do {
        *param_2 = local_1c8[lVar6 * 3];
        param_2[2] = local_1c8[lVar6 * 3 + 1];
        (*(code *)param_2[0xf])(param_2,local_2a8,4,&local_2b4);
        uVar2 = local_2b4;
        uVar5 = (ulonglong)local_2b4;
        if (lVar6 == 0) {
          if (local_2b4 - 5 < 0xfffffffc) goto LAB_1801ff2d2;
          local_2b0 = FUN_1801ff85c(param_1,local_2ac,uVar5);
          if (local_2b0 != 0) goto LAB_1801ff0c5;
          local_2d0 = &local_2b0;
          local_2d8 = 0;
          lVar4 = FUN_1801cc8d6(uVar1,4,0,local_2ac * uVar2);
          local_248[0] = lVar4;
          if (local_2b0 != 0) goto LAB_1801ff0c5;
          uVar10 = uVar2;
          if (1 < (longlong)(int)local_2ac) {
            lVar8 = lVar4 + uVar5 * 4;
            lVar7 = 1;
            do {
              local_248[lVar7] = lVar8;
              lVar7 = lVar7 + 1;
              lVar8 = lVar8 + uVar5 * 4;
            } while ((int)local_2ac != lVar7);
          }
        }
        else if (local_2b4 != uVar10) {
LAB_1801ff2d2:
          local_2b0 = 3;
          goto LAB_1801ff0c5;
        }
        if (0 < (int)local_2b4) {
          puVar9 = local_2a0;
          lVar8 = 0;
          do {
            *param_2 = puVar9[-1];
            param_2[2] = *puVar9;
            uVar3 = (*(code *)param_2[10])(param_2,0);
            *(undefined4 *)(local_248[lVar6] + lVar8 * 4) = uVar3;
            lVar8 = lVar8 + 1;
            puVar9 = puVar9 + 3;
          } while (lVar8 < (int)local_2b4);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)local_2ac);
      *param_2 = local_2c0;
      param_2[2] = local_2c8;
      lVar6 = *(longlong *)(param_1 + 0x2e0);
      if (*(longlong *)(lVar6 + 0x28) != 0) {
        FUN_1801c9b65();
        *(undefined8 *)(lVar6 + 0x28) = 0;
      }
      if (0 < (int)local_2ac) {
        uVar5 = 0;
        do {
          *(longlong *)(lVar6 + 0x28 + uVar5 * 8) = local_248[uVar5];
          local_248[uVar5] = 0;
          uVar5 = uVar5 + 1;
          lVar4 = local_248[0];
        } while (local_2ac != uVar5);
      }
      goto LAB_1801ff0c5;
    }
    local_2b0 = 3;
  }
  lVar4 = 0;
LAB_1801ff0c5:
  FUN_1801c9b65(uVar1,lVar4);
  *(int *)(param_2 + 3) = local_2b0;
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_2f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_2f8);
  }
  return;
}

