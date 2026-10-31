/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d840a */

undefined8 FUN_1400d840a(longlong param_1)

{
  BOOL BVar1;
  undefined4 extraout_var;
  
  BVar1 = IsIconic((HWND)**(undefined8 **)(param_1 + 0x50));
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),BVar1 != 0);
}

