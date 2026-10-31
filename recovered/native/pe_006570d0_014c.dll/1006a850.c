/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006a850 */

undefined4 * __thiscall FUN_1006a850(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100c2410;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  local_14 = 0;
  local_24 = param_1;
  iVar1 = FUN_1006bb9e(param_1,param_2,0);
  if (iVar1 == 0) {
    *unaff_FS_OFFSET = local_1c;
    return local_24;
  }
  FUN_1006cded("directory_iterator::directory_iterator",iVar1,param_2);
  puVar2 = (undefined4 *)FUN_100431d4();
  return puVar2;
}

