/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140095028 */

void FUN_140095028(longlong param_1,short param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = (ushort)(param_2 - 0x66U) >> 1;
  uVar2 = uVar1 | (ushort)((param_2 - 0x66U & 1) != 0) << 0xf;
  if (((byte)(0x1d1 >> ((byte)uVar1 & 0x1f)) & uVar2 < 9) == 1) {
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(&DAT_140163150 + (ulonglong)uVar2 * 4);
  }
  return;
}

