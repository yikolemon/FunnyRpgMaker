/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a8db0 */

undefined8 * FUN_1404a8db0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  *param_1 = 0;
  FID_conflict___acrt_lock(8);
  puVar1 = (undefined8 *)FUN_1404a8e24(local_res8);
  puVar1 = (undefined8 *)*puVar1;
  *param_1 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  }
  FID_conflict___acrt_lock(8);
  return param_1;
}

