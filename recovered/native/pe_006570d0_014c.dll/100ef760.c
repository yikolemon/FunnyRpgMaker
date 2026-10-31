/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ef760 */

undefined4 FUN_100ef760(void)

{
  undefined4 local_24;
  undefined1 local_1d;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_24;
  local_10 = 0xffffffff;
  local_14 = &LAB_100f52a0;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  FUN_100efd4c(0,&local_1d);
  ExceptionList = local_18;
  return local_24;
}

