/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f21e2 */

undefined4 * FUN_100f21e2(void)

{
  undefined4 local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100f5530;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_28 = FUN_10228350(0x7c);
  local_14 = 1;
  FUN_100f27cc(0);
  *local_24 = local_28;
  *(undefined1 *)(local_24 + 1) = 0;
  *(undefined1 *)(local_24 + 2) = 0;
  ExceptionList = local_1c;
  return local_24;
}

