/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e3322 */

int FUN_100e3322(int param_1,undefined1 param_2,int param_3)

{
  uint *puVar1;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100eaa30;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100e5134(param_2,3000);
  local_14 = 0;
  if (param_3 != 0) {
    local_24 = &stack0x00000010;
    puVar1 = (uint *)FUN_1004303e();
    FUN_1025ea38(*puVar1 | 2,puVar1[1],param_1 + 0x1005,0x1000,param_3,0,&stack0x00000010);
  }
  ExceptionList = local_1c;
  return param_1;
}

