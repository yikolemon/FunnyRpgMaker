/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000f713 */

ushort * FUN_14000f713(ushort *param_1,ushort *param_2,undefined8 *param_3)

{
  ushort *puVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  if ((ushort)(*param_1 - 0x31) < 9) {
    local_28 = (undefined8 *)((ulonglong)local_28 & 0xffffffff00000000);
    param_1 = FUN_14000f3e5(param_1,param_2,(uint *)&local_28);
    *(undefined4 *)*param_3 = local_28._0_4_;
  }
  else if (*param_1 == 0x7b) {
    puVar1 = param_1 + 1;
    if (puVar1 != param_2) {
      local_28 = param_3;
      puVar1 = FUN_14000fcba(puVar1,param_2,(longlong *)&local_28);
    }
    if ((puVar1 == param_2) || (*puVar1 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
      FUN_14000b455(0x14011bf67);
    }
    param_1 = puVar1 + 1;
  }
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_48);
}

