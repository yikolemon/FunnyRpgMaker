/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008c7c2 */

uint * FUN_1008c7c2(void)

{
  undefined1 auStack_40 [4];
  uint *local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_24 = &stack0xfffffffc;
  local_20 = auStack_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c36f0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1008c44a(&local_38);
  *local_3c = local_38;
  local_3c[1] = uStack_34;
  local_3c[2] = uStack_30;
  local_3c[3] = uStack_2c;
  local_38 = local_38 & 0xffffff00;
  uStack_2c = 0;
  uStack_30 = 0;
  local_14 = 0xffffffff;
  FUN_1007f222();
  ExceptionList = local_1c;
  return local_3c;
}

