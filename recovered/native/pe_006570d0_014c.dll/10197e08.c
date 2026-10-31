/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10197e08 */

undefined4 __fastcall FUN_10197e08(undefined4 param_1)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_150 [296];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_150;
  local_18 = 0xffffffff;
  local_1c = &LAB_10198510;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  FUN_101cb9c8(auStack_150);
  local_18 = 0;
  uVar1 = FUN_101d6816(param_1);
  local_18 = 0xffffffff;
  FUN_1019798e();
  *unaff_FS_OFFSET = local_20;
  return uVar1;
}

