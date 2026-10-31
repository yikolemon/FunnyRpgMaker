/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a2340 */

undefined8 FUN_1801a2340(longlong param_1)

{
  BOOL BVar1;
  undefined4 extraout_var;
  
  BVar1 = IsIconic((HWND)**(undefined8 **)(param_1 + 0x50));
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),BVar1 != 0);
}

