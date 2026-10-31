/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041130c */

ushort * __cdecl FUN_0041130c(ushort *param_1,ushort *param_2,undefined4 *param_3)

{
  ushort uVar1;
  uint local_18 [2];
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)local_18;
  uVar1 = *param_1;
  if ((uVar1 == 0x7d) || (uVar1 == 0x3a)) {
    FUN_004113be((int *)*param_3);
LAB_00411390:
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
      FUN_0041156c((void *)*param_3,local_18[0]);
      goto LAB_00411390;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0040ba4e(0x504ac6);
}

