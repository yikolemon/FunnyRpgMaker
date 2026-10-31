/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180112655 */

undefined8 FUN_180112655(longlong param_1)

{
  undefined8 uVar1;
  
  if ((((*(char *)(DAT_180419160 + 0x83) == '\0') && (*(char *)(param_1 + 0x3c) != '\x01')) ||
      ((*(uint *)(param_1 + 0x14) & 0x1080001) != 0)) ||
     (uVar1 = CONCAT71((int7)((ulonglong)DAT_180419160 >> 8),1),
     *(char *)(param_1 + 0x112) == '\x01')) {
    uVar1 = 0;
  }
  return uVar1;
}

