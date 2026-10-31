/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180110c31 */

undefined8 FUN_180110c31(void)

{
  ulonglong uVar1;
  
  uVar1 = CONCAT71((int7)((ulonglong)DAT_180419160 >> 8),*(undefined1 *)(DAT_180419160 + 0x1fe8)) &
          0xffffffffffffff08;
  return CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 3);
}

