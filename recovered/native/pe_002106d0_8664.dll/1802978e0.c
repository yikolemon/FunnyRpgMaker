/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802978e0 */

undefined8 * FUN_1802978e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  *param_1 = 0;
  __acrt_lock(8);
  puVar1 = (undefined8 *)FUN_180297954(local_res8);
  puVar1 = (undefined8 *)*puVar1;
  *param_1 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  }
  __acrt_unlock(8);
  return param_1;
}

