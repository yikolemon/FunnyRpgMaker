/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042cd46 */

void FUN_0042cd46(int param_1)

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
  local_40 = *(undefined4 *)(param_1 + 0x100);
  uStack_3c = *(undefined4 *)(param_1 + 0x104);
  uStack_38 = *(undefined4 *)(param_1 + 0x108);
  uStack_34 = *(undefined4 *)(param_1 + 0x10c);
  local_30 = *(undefined4 *)(param_1 + 0x110);
  uStack_2c = *(undefined4 *)(param_1 + 0x114);
  uStack_28 = *(undefined4 *)(param_1 + 0x118);
  uStack_24 = *(undefined4 *)(param_1 + 0x11c);
  FUN_0041ba30((int)&local_40);
  if (DAT_0050e8c0 == (local_1c ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_1c ^ (uint)&stack0xfffffffc);
}

