/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101032d8 */

undefined4 FUN_101032d8(void)

{
  undefined4 uVar1;
  
  if (*(code **)(DAT_1039d74c + 0xc00) != (code *)0x0) {
    uVar1 = (**(code **)(DAT_1039d74c + 0xc00))(DAT_1039d74c);
    return uVar1;
  }
  return 0;
}

