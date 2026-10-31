/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d271f */

ulonglong FUN_1400d271f(ulonglong param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  do {
    uVar1 = uVar1 + 1;
    if (0x3f < uVar1) break;
  } while (param_1 >> ((byte)uVar1 & 0x3f) != 0);
  return uVar1 & 0xffffffff;
}

