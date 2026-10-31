/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fb8ac */

ulonglong FUN_1800fb8ac(ulonglong param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return uVar1 >> 3 & 0x1fffffff;
}

