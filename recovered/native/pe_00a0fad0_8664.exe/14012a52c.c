/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012a52c */

undefined8 * FUN_14012a52c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  *param_1 = 0;
  __acrt_lock(8);
  puVar1 = (undefined8 *)FUN_14012a5a0(local_res8);
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

