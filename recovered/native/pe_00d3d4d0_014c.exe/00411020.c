/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00411020 */

ushort * __cdecl FUN_00411020(ushort *param_1,ushort *param_2,undefined4 *param_3)

{
  ushort uVar1;
  uint local_18 [2];
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)local_18;
  uVar1 = *param_1;
  if ((uVar1 == 0x7d) || (uVar1 == 0x3a)) {
    FUN_004110d2((undefined4 *)*param_3);
LAB_004110a4:
    if (DAT_0050e8c0 == (local_10 ^ (uint)local_18)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_10 ^ (uint)local_18);
  }
  if ((ushort)(uVar1 - 0x30) < 10) {
    local_18[0] = 0;
    if (uVar1 == 0x30) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (ushort *)FUN_00410736(param_1,param_2,local_18);
    }
    if ((param_1 != param_2) && ((*param_1 == 0x3a || (*param_1 == 0x7d)))) {
      FUN_00411254((void *)*param_3,local_18[0]);
      goto LAB_004110a4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0040ba4e(0x504ac6);
}

