/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007d974 */

void __thiscall FUN_1007d974(int *param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2e70;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_2 != 0) {
    FUN_10016566(param_2);
    local_14 = 0;
    iVar1 = *param_1;
    local_24 = param_1;
    FUN_1000895c(iVar1,*param_3,param_2);
    param_1[1] = iVar1 + param_2;
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}

