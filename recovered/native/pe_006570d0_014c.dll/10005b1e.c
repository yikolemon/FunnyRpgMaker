/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10005b1e */

void __thiscall FUN_10005b1e(int *param_1,undefined2 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  if (param_3 < 8) {
    param_1[4] = param_3;
    param_1[5] = 7;
    if (param_3 != 0) {
      uVar1 = 0;
      do {
        *(undefined2 *)((int)param_1 + uVar1 * 2) = param_2;
        uVar1 = uVar1 + 1;
      } while (param_3 != uVar1);
    }
    *(undefined2 *)((int)param_1 + param_3 * 2) = 0;
  }
  else {
    local_18 = 10;
    if (10 < (param_3 | 7)) {
      local_18 = param_3 | 7;
    }
    if (0x7ffffffd < local_18) {
      local_18 = 0x7ffffffe;
    }
    iVar2 = FUN_10001406(param_1,&local_18);
    *param_1 = iVar2;
    param_1[4] = param_3;
    param_1[5] = local_18;
    uVar1 = 0;
    do {
      *(undefined2 *)(iVar2 + uVar1 * 2) = param_2;
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
    *(undefined2 *)(iVar2 + param_3 * 2) = 0;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

