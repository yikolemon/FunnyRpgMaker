/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022d2c8 */

void FUN_14022d2c8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 local_98 [24];
  undefined1 local_80 [96];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_14022ddaa(local_98,param_1 + 1,param_2,param_3,param_4);
  lVar1 = FUN_14022de8a(local_98);
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x2c) = *(int *)(lVar1 + 0x2c) + 1;
    UNLOCK();
  }
  FUN_140231fe6(param_1);
  *param_1 = lVar1;
  FUN_14022e23c(local_80);
  return;
}

