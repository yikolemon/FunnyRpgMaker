/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001bdf8 */

void FUN_18001bdf8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 local_98 [24];
  undefined1 local_80 [96];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_18001c8da(local_98,param_1 + 1,param_2,param_3,param_4);
  lVar1 = FUN_18001c9ba(local_98);
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x2c) = *(int *)(lVar1 + 0x2c) + 1;
    UNLOCK();
  }
  FUN_180020b16(param_1);
  *param_1 = lVar1;
  FUN_18001cd6c(local_80);
  return;
}

