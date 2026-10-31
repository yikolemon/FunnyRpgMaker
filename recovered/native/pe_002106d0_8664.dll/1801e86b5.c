/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e86b5 */

undefined4 FUN_1801e86b5(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = 0x3a6;
  uVar3 = 0;
  do {
    uVar2 = uVar3 + uVar1 >> 1;
    if ((uint)(&DAT_180335310)[uVar2 * 2] < param_1) {
      uVar3 = uVar2 + 1;
    }
    else {
      if ((uint)(&DAT_180335310)[uVar2 * 2] <= param_1) {
        return *(undefined4 *)(&UNK_180335314 + uVar2 * 8);
      }
      uVar1 = uVar2 - 1;
    }
  } while (uVar3 <= uVar1);
  return 0;
}

