/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10052672 */

void __fastcall FUN_10052672(undefined4 *param_1)

{
  undefined4 **ppuVar1;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_1005aa40;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = param_1;
  ppuVar1 = &local_18;
  if (param_1[1] != 0) {
    FUN_100170bc(*param_1,param_1[1] + 0x10);
    ppuVar1 = (undefined4 **)local_14;
  }
  local_14 = (undefined1 *)ppuVar1;
  local_8 = 0xffffffff;
  if (local_18[1] == 0) {
    ExceptionList = local_10;
  }
  else {
    FUN_102283a0(local_18[1],0x38);
    ExceptionList = local_10;
  }
  return;
}

