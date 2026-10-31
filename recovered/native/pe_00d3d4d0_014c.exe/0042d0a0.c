/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042d0a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0042d0a0(int param_1)

{
  double dVar1;
  float10 fVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  dVar1 = DAT_004d7da0;
  if (*(char *)(param_1 + 0x24) == '\x01') {
    local_30 = _DAT_004dca00;
    uStack_2c = _UNK_004dca04;
    uStack_28 = _UNK_004dca08;
    uStack_24 = _UNK_004dca0c;
    local_20 = (undefined4)DAT_004d7e40;
    uStack_1c = DAT_004d7e40._4_4_;
    uStack_18 = 0;
    uStack_14 = 0;
    fVar2 = FUN_0042cf32((double *)&local_30,*(double *)(param_1 + 0x28));
    dVar1 = (double)fVar2;
  }
  if (DAT_0050e8c0 != (local_c ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_c ^ (uint)&stack0xfffffffc);
  }
  return (float10)dVar1;
}

