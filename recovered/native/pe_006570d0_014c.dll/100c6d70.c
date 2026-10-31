/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c6d70 */

void __thiscall FUN_100c6d70(int *param_1,int param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  int *local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c7e70;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  if (param_2 != 0) {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10016590();
    }
    local_1c = (undefined1 *)&local_20;
    FUN_100c6e0c(param_2);
    local_10 = 0;
    iVar1 = *param_1 + param_2 * 2;
    local_20 = param_1;
    FUN_1001659a(*param_1,iVar1);
    param_1[1] = iVar1;
  }
  *unaff_FS_OFFSET = local_18;
  return;
}

