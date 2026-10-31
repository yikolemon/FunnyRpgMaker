/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007dddf */

ulonglong FUN_14007dddf(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStackY_d8 [32];
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98 [11];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_d8;
  local_3c = 0;
  if (param_2 != (undefined8 *)0x0 && param_1 != (longlong *)0x0) {
    uVar4 = 0x61;
    if (*(int *)(param_2 + 2) != 8) goto LAB_14007df39;
    puVar1 = (uint *)*param_2;
    piVar2 = (int *)param_2[1];
    if (puVar1 != (uint *)0x0 && piVar2 != (int *)0x0) {
      lVar3 = *param_1;
      if (lVar3 == 0) {
        uVar4 = 0x20;
      }
      else {
        uVar4 = 6;
        if (0xffffffe0 < *(int *)(param_2 + 10) - 0x21U) {
          lVar5 = FUN_14001f231(lVar3,puVar1[1] << 4,0,*puVar1,0,(int *)&local_3c);
          uVar4 = (ulonglong)local_3c;
          local_a8 = lVar5;
          if (local_3c == 0) {
            local_a0 = CONCAT44((int)*(undefined8 *)puVar1,
                                (int)((ulonglong)*(undefined8 *)puVar1 >> 0x20));
            puVar7 = local_98;
            for (lVar6 = 0xb; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar7 = *param_2;
              param_2 = param_2 + 1;
              puVar7 = puVar7 + 1;
            }
            uVar4 = FUN_14007e1f8(piVar2,&local_a8);
            local_3c = (uint)uVar4;
            if (local_3c == 0) {
              uVar4 = FUN_14007e42f(&local_a8);
              local_3c = (uint)uVar4;
              if (local_3c == 0) {
                uVar4 = FUN_14007e50b(&local_a8);
                local_3c = (uint)uVar4;
                if (local_3c == 0) {
                  uVar4 = FUN_14007e535(&local_a8,puVar1);
                  local_3c = (uint)uVar4;
                }
              }
            }
          }
          if (lVar5 != 0) {
            FUN_14001c53d(lVar3,lVar5);
            uVar4 = (ulonglong)local_3c;
          }
        }
      }
      goto LAB_14007df39;
    }
  }
  uVar4 = 6;
LAB_14007df39:
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStackY_d8)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStackY_d8);
}

