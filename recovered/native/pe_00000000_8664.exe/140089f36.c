/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140089f36 */

undefined8 FUN_140089f36(void)

{
  ulonglong uVar1;
  
  uVar1 = CONCAT71((int7)((ulonglong)DAT_140f2a910 >> 8),*(undefined1 *)(DAT_140f2a910 + 0x1fe8)) &
          0xffffffffffffff10;
  return CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 4);
}

