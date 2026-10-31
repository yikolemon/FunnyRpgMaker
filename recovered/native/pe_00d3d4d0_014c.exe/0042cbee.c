/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042cbee */

void FUN_0042cbee(int param_1)

{
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_1c;
  
  local_1c = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  local_40 = *(undefined4 *)(param_1 + 0xa0);
  uStack_3c = *(undefined4 *)(param_1 + 0xa4);
  uStack_38 = *(undefined4 *)(param_1 + 0xa8);
  uStack_34 = *(undefined4 *)(param_1 + 0xac);
  local_30 = *(undefined4 *)(param_1 + 0xb0);
  uStack_2c = *(undefined4 *)(param_1 + 0xb4);
  uStack_28 = *(undefined4 *)(param_1 + 0xb8);
  uStack_24 = *(undefined4 *)(param_1 + 0xbc);
  FUN_0041ba30((int)&local_40);
  if (DAT_0050e8c0 == (local_1c ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_1c ^ (uint)&stack0xfffffffc);
}

