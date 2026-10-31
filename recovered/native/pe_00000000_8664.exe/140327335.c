/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140327335 */

void FUN_140327335(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x22c;
  if ((*(byte *)(param_1 + 0x495) & 1) == 0) {
    lVar1 = param_2;
  }
  FUN_14031927e(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(DAT_14062a630 + 0x1fa0),
                *(undefined4 *)(param_1 + 0x220 + (ulonglong)(*(byte *)(param_1 + 0x495) & 1) * 8),
                lVar1);
  return;
}

