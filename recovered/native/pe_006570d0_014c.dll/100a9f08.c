/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a9f08 */

undefined4 * __thiscall
FUN_100a9f08(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100c4410;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = param_2;
  param_1[1] = 0;
  local_14 = 0;
  local_24 = param_1;
  iVar1 = FUN_10228350(0x24);
  local_24[1] = iVar1;
  FUN_100aa0ed(iVar1 + 8,param_3,param_4,param_5);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

