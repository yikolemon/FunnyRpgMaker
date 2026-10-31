/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140137da1 */

undefined4 FUN_140137da1(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = 0x3a6;
  uVar3 = 0;
  do {
    uVar2 = uVar3 + uVar1 >> 1;
    if ((uint)(&DAT_140e99670)[uVar2 * 2] < param_1) {
      uVar3 = uVar2 + 1;
    }
    else {
      if ((uint)(&DAT_140e99670)[uVar2 * 2] <= param_1) {
        return *(undefined4 *)(&UNK_140e99674 + uVar2 * 8);
      }
      uVar1 = uVar2 - 1;
    }
  } while (uVar3 <= uVar1);
  return 0;
}

