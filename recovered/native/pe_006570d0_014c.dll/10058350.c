/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10058350 */

void FUN_10058350(void)

{
  undefined4 *puVar1;
  undefined1 local_1c [4];
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_1005ad70;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  puVar1 = (undefined4 *)FUN_10228350(0xc);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  ExceptionList = local_14;
  return;
}

