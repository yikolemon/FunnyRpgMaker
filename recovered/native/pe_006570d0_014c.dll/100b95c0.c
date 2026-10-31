/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b95c0 */

void FUN_100b95c0(void)

{
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100c1cf0;
  local_14 = ExceptionList;
  local_c = 0xffffffff;
  ExceptionList = &local_14;
  FUN_100b9a98();
  if (*(int *)(local_1c + 8) != 0) {
    (*DAT_1039c964)(*(int *)(local_1c + 8));
    *(undefined4 *)(local_1c + 8) = 0;
    *(undefined4 *)(local_1c + 0xc) = 0;
    *(undefined4 *)(local_1c + 0x10) = 0;
  }
  ExceptionList = local_14;
  return;
}

