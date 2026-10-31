/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180115e65 */

void FUN_180115e65(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x22c;
  if ((*(byte *)(param_1 + 0x495) & 1) == 0) {
    lVar1 = param_2;
  }
  FUN_180107dae(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(DAT_180419160 + 0x1fa0),
                *(undefined4 *)(param_1 + 0x220 + (ulonglong)(*(byte *)(param_1 + 0x495) & 1) * 8),
                lVar1);
  return;
}

