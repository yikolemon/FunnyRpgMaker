/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001206a */

undefined8 * FUN_14001206a(undefined8 *param_1)

{
  ushort *puVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  puVar1 = (ushort *)param_1[2];
  *param_1 = puVar1;
  if (puVar1 != (ushort *)param_1[1]) {
    FUN_14000fb9a(local_28,puVar1,(ushort *)param_1[1],(uint *)(param_1 + 3));
    param_1[2] = local_28[0];
  }
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

