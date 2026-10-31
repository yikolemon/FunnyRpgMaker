/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f5218 */

undefined8 * FUN_1800f5218(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  local_28 = param_1;
  FUN_1800f554e();
  local_30 = param_1[2];
  if (local_30 != 0) {
    piVar1 = (int *)FUN_1800188ac(local_30);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1800f55ca(local_28,param_2,&local_30);
  FUN_1800f56b4(&local_30);
  return local_28;
}

