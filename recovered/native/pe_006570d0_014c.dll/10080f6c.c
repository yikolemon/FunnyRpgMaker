/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10080f6c */

undefined4 * FUN_10080f6c(void)

{
  undefined4 *puVar1;
  undefined1 local_20 [8];
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_20;
  local_c = 0xffffffff;
  local_10 = &LAB_100c3120;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  puVar1 = (undefined4 *)FUN_10228350(0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  ExceptionList = local_14;
  return puVar1;
}

