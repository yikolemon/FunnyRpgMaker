/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042cb46 */

void FUN_0042cb46(int param_1)

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
  local_40 = *(undefined4 *)(param_1 + 0x70);
  uStack_3c = *(undefined4 *)(param_1 + 0x74);
  uStack_38 = *(undefined4 *)(param_1 + 0x78);
  uStack_34 = *(undefined4 *)(param_1 + 0x7c);
  local_30 = *(undefined4 *)(param_1 + 0x80);
  uStack_2c = *(undefined4 *)(param_1 + 0x84);
  uStack_28 = *(undefined4 *)(param_1 + 0x88);
  uStack_24 = *(undefined4 *)(param_1 + 0x8c);
  FUN_0041ba30((int)&local_40);
  if (DAT_0050e8c0 == (local_1c ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_1c ^ (uint)&stack0xfffffffc);
}

