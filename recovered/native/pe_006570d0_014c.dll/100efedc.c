/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100efedc */

int __fastcall FUN_100efedc(int param_1)

{
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_100f5310;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_1c = param_1;
  FUN_100f07af(param_1);
  *(undefined8 *)(local_1c + 0x28) = 0;
  *(undefined4 *)(local_1c + 0x18) = 0;
  *(undefined4 *)(local_1c + 0x1c) = 0;
  *(undefined4 *)(local_1c + 0x20) = 0;
  *(undefined4 *)(local_1c + 0x24) = 0;
  *(undefined4 *)(local_1c + 8) = 0;
  *(undefined4 *)(local_1c + 0xc) = 0;
  *(undefined4 *)(local_1c + 0x10) = 0;
  *(undefined4 *)(local_1c + 0x14) = 0;
  ExceptionList = local_14;
  return local_1c;
}

