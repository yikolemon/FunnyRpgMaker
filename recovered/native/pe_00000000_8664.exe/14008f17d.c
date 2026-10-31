/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008f17d */

void FUN_14008f17d(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x22c;
  if ((*(byte *)(param_1 + 0x495) & 1) == 0) {
    lVar1 = param_2;
  }
  FUN_1400810c6(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(DAT_140f2a910 + 0x1fa0),
                *(undefined4 *)(param_1 + 0x220 + (ulonglong)(*(byte *)(param_1 + 0x495) & 1) * 8),
                lVar1);
  return;
}

