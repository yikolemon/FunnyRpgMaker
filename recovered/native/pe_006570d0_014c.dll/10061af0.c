/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10061af0 */

void __thiscall FUN_10061af0(int *param_1,uint param_2,int *param_3,int *param_4)

{
  int *unaff_FS_OFFSET;
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2010;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_2 != 0) {
    if (0x3fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_10016590();
    }
    local_20 = (undefined1 *)&local_34;
    FUN_10061bba(param_2);
    local_14 = 0;
    local_30 = *param_1;
    local_2c = *param_4;
    local_28 = *param_3;
    local_34 = param_1;
    local_24 = param_1;
    thunk_FUN_100185ef(local_28,local_2c,local_30);
    local_34[1] = local_30 + (local_2c - local_28);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}

