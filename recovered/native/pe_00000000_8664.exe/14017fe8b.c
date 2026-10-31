/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017fe8b */

ulonglong FUN_14017fe8b(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  uint *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98 [11];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_d8;
  local_3c = 0;
  if (param_2 != (undefined8 *)0x0 && param_1 != (longlong *)0x0) {
    uVar4 = 0x61;
    if (*(int *)(param_2 + 2) != 8) goto LAB_14017ffe5;
    puVar1 = (undefined8 *)*param_2;
    lVar2 = param_2[1];
    if (puVar1 != (undefined8 *)0x0 && lVar2 != 0) {
      lVar3 = *param_1;
      if (lVar3 == 0) {
        uVar4 = 0x20;
      }
      else {
        uVar4 = 6;
        if (0xffffffe0 < *(int *)(param_2 + 10) - 0x21U) {
          local_b0 = &local_3c;
          local_b8 = 0;
          lVar5 = FUN_14012b8aa(lVar3,*(int *)((longlong)puVar1 + 4) << 4,0,*(undefined4 *)puVar1);
          uVar4 = (ulonglong)local_3c;
          local_a8 = lVar5;
          if (local_3c == 0) {
            local_a0 = CONCAT44((int)*puVar1,(int)((ulonglong)*puVar1 >> 0x20));
            puVar7 = local_98;
            for (lVar6 = 0xb; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar7 = *param_2;
              param_2 = param_2 + 1;
              puVar7 = puVar7 + 1;
            }
            uVar4 = FUN_1401802a4(lVar2,&local_a8);
            local_3c = (uint)uVar4;
            if (local_3c == 0) {
              uVar4 = FUN_1401804db(&local_a8);
              local_3c = (uint)uVar4;
              if (local_3c == 0) {
                uVar4 = FUN_1401805b7(&local_a8);
                local_3c = (uint)uVar4;
                if (local_3c == 0) {
                  uVar4 = FUN_1401805e1(&local_a8,puVar1);
                  local_3c = (uint)uVar4;
                }
              }
            }
          }
          if (lVar5 != 0) {
            FUN_140128b39(lVar3,lVar5);
            uVar4 = (ulonglong)local_3c;
          }
        }
      }
      goto LAB_14017ffe5;
    }
  }
  uVar4 = 6;
LAB_14017ffe5:
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_d8)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_d8);
}

