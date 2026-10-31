/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e506e */

int FUN_100e506e(int param_1,int param_2)

{
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100eaab0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1025b2d0(param_1,param_2,0x2018);
  local_24 = param_1 + 0x2018;
  FUN_1001860e(param_2 + 0x2018);
  local_14 = 0;
  FUN_1025b2d0(param_1 + 0x2040,param_2 + 0x2040,0x1000);
  ExceptionList = local_1c;
  return param_1;
}

