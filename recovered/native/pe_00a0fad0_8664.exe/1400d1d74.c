/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d1d74 */

ulonglong FUN_1400d1d74(ulonglong param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return uVar1 >> 3 & 0x1fffffff;
}

