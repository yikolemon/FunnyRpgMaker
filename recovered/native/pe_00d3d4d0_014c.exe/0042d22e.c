/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042d22e */

void FUN_0042d22e(int param_1)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  if (*(char *)(param_1 + 0x24) == '\x01') {
    local_2c = 0x40280000;
    local_18 = DAT_004d8070;
    local_20 = DAT_004d80e0;
    local_28 = DAT_004dca20;
  }
  else {
    local_2c = 0x40578000;
    local_18 = DAT_004dc9b0;
    local_20 = DAT_004dca28;
    local_28 = DAT_004dca30;
  }
  local_30 = 0;
  FUN_0042cf32((double *)&local_30,*(double *)(param_1 + 0x28));
  if (DAT_0050e8c0 == (local_c ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)&stack0xfffffffc);
}

