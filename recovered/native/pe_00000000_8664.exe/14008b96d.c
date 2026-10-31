/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008b96d */

undefined8 FUN_14008b96d(longlong param_1)

{
  undefined8 uVar1;
  
  if ((((*(char *)(DAT_140f2a910 + 0x83) == '\0') && (*(char *)(param_1 + 0x3c) != '\x01')) ||
      ((*(uint *)(param_1 + 0x14) & 0x1080001) != 0)) ||
     (uVar1 = CONCAT71((int7)((ulonglong)DAT_140f2a910 >> 8),1),
     *(char *)(param_1 + 0x112) == '\x01')) {
    uVar1 = 0;
  }
  return uVar1;
}

