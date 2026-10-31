/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180094bec */

void FUN_180094bec(longlong param_1,short param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = (ushort)(param_2 - 0x66U) >> 1;
  uVar2 = uVar1 | (ushort)((param_2 - 0x66U & 1) != 0) << 0xf;
  if (((byte)(0x1d1 >> ((byte)uVar1 & 0x1f)) & uVar2 < 9) == 1) {
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(&DAT_1802b7bc8 + (ulonglong)uVar2 * 4);
  }
  return;
}

