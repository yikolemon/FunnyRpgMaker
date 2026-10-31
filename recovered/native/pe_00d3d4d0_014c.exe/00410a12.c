/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00410a12 */

ushort * __cdecl FUN_00410a12(ushort *param_1,ushort *param_2,undefined4 *param_3)

{
  ushort *puVar1;
  undefined4 *local_18;
  uint local_14;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&local_18;
  if ((ushort)(*param_1 - 0x31) < 9) {
    local_14 = 0;
    param_1 = (ushort *)FUN_00410736(param_1,param_2,&local_14);
    *(uint *)*param_3 = local_14;
  }
  else if (*param_1 == 0x7b) {
    puVar1 = param_1 + 1;
    if (puVar1 != param_2) {
      local_18 = param_3;
      puVar1 = FUN_00411020(puVar1,param_2,&local_18);
    }
    if ((puVar1 == param_2) || (*puVar1 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
      FUN_0040ba4e(0x504ac6);
    }
    param_1 = puVar1 + 1;
  }
  if (DAT_0050e8c0 == (local_10 ^ (uint)&local_18)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_10 ^ (uint)&local_18);
}

