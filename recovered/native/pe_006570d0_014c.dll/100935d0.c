/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100935d0 */

void __thiscall FUN_100935d0(int param_1,short param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = (ushort)(param_2 - 0x66U) >> 1;
  uVar2 = uVar1 | (ushort)((param_2 - 0x66U & 1) != 0) << 0xf;
  if (((byte)(0x1d1 >> ((byte)uVar1 & 0x1f)) & uVar2 < 9) == 1) {
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(&DAT_10294444 + (uint)uVar2 * 4);
  }
  return;
}

