/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008d95c */

void FUN_1008d95c(void)

{
  int iVar1;
  int local_24 [2];
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)local_24;
  local_14 = &LAB_100c3790;
  local_18 = ExceptionList;
  local_10 = 0xffffffff;
  ExceptionList = &local_18;
  FUN_10001134();
  FUN_10001134();
  iVar1 = -0x9dc;
  do {
    local_10 = 0;
    local_24[0] = iVar1;
    FUN_10001134();
    local_10 = 0xffffffff;
    iVar1 = local_24[0] + 0x18;
  } while (iVar1 != -0x7c);
  FUN_10004eae();
  FUN_1008dd0e();
  FUN_1008dd68();
  FUN_10004eae();
  FUN_1006dc58();
  FUN_10001134();
  FUN_10001134();
  FUN_10042460();
  FUN_10001134();
  FUN_10004eae();
  ExceptionList = local_18;
  return;
}

