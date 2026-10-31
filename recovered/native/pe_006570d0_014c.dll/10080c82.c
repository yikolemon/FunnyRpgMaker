/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10080c82 */

void __thiscall FUN_10080c82(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  bool bVar4;
  uint local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c30f0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_1[4] = 0;
  param_1[5] = 7;
  if (param_4 < 0x7fffffff) {
    if (param_4 < 8) {
      bVar4 = false;
      local_20 = (undefined1 *)&local_24;
    }
    else {
      local_24 = 10;
      if (10 < (param_4 | 7)) {
        local_24 = param_4 | 7;
      }
      if (0x7ffffffd < local_24) {
        local_24 = 0x7ffffffe;
      }
      local_20 = (undefined1 *)&local_24;
      uVar1 = FUN_10001406(param_1,&local_24);
      *param_1 = uVar1;
      param_1[5] = local_24;
      bVar4 = 7 < local_24;
    }
    puVar2 = param_1;
    if (bVar4) {
      puVar2 = (undefined4 *)*param_1;
    }
    if (param_4 != 0) {
      uVar3 = 0;
      do {
        *(short *)((int)puVar2 + uVar3 * 2) = (short)*(char *)(param_2 + uVar3);
        uVar3 = uVar3 + 1;
      } while (param_4 != uVar3);
    }
    param_1[4] = param_4;
    *(undefined2 *)((int)puVar2 + param_4 * 2) = 0;
    local_24 = 0;
    local_14 = 0xffffffff;
    FUN_10080d84();
    *unaff_FS_OFFSET = local_1c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100013fb();
}

