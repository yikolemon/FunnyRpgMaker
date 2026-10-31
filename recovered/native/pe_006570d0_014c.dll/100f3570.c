/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f3570 */

undefined4 FUN_100f3570(uint param_1)

{
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100f5690;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_100f23d8();
  local_8 = 0xffffffff;
  FUN_10001fee();
  if ((param_1 & 1) != 0) {
    FUN_102283a0(local_18,0x34);
  }
  ExceptionList = local_10;
  return local_18;
}

