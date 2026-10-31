/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b8994 */

void FUN_100b8994(char param_1)

{
  int local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_14 = &LAB_100c1ca0;
  local_18 = ExceptionList;
  local_10 = 0xffffffff;
  ExceptionList = &local_18;
  FUN_100b816e();
  if (*(int *)(local_20 + 8) != 0) {
    (*DAT_1039c964)(*(int *)(local_20 + 8));
    *(undefined4 *)(local_20 + 8) = 0;
    *(undefined4 *)(local_20 + 0xc) = 0;
    *(undefined4 *)(local_20 + 0x10) = 0;
  }
  if (param_1 == '\0') {
    ExceptionList = local_18;
  }
  else {
    FUN_102283a0(local_20,0x20);
    ExceptionList = local_18;
  }
  return;
}

