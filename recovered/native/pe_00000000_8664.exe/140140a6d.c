/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140140a6d */

undefined8 FUN_140140a6d(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x408) == 0) && (uVar1 = FUN_14013fe1d(param_1,0), (int)uVar1 != 0))
  {
    return uVar1;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x424);
  return 0;
}

