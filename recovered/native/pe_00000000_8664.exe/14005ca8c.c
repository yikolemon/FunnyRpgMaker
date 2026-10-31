/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005ca8c */

void FUN_14005ca8c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 local_a0 [24];
  undefined1 local_88 [104];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_14005d17c(local_a0,param_1 + 1,param_2,param_3,param_4);
  lVar1 = FUN_14005d25c(local_a0);
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x2c) = *(int *)(lVar1 + 0x2c) + 1;
    UNLOCK();
  }
  FUN_140060aba(param_1);
  *param_1 = lVar1;
  FUN_14000bbee(local_88);
  return;
}

