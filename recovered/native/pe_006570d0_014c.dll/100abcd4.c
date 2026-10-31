/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100abcd4 */

void __thiscall
FUN_100abcd4(undefined4 *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4550;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_2 != 0) {
    if (0x5555555 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_10016590();
    }
    local_20 = (undefined1 *)&local_28;
    FUN_100abe42(param_2);
    local_14 = 0;
    local_28 = param_1;
    local_24 = param_1;
    uVar1 = FUN_100abd8b(*param_3,*param_4,*param_1,param_1);
    local_28[1] = uVar1;
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}

