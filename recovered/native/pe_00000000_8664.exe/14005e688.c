/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005e688 */

void FUN_14005e688(longlong param_1,short param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = (ushort)(param_2 - 0x66U) >> 1;
  uVar2 = uVar1 | (ushort)((param_2 - 0x66U & 1) != 0) << 0xf;
  if (((byte)(0x1d1 >> ((byte)uVar1 & 0x1f)) & uVar2 < 9) == 1) {
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(&DAT_1401d2df8 + (ulonglong)uVar2 * 4);
  }
  return;
}

