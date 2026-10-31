/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400950e2 */

undefined4 FUN_1400950e2(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140095110();
  if ((char)uVar1 != '\0') {
    *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x76);
    FUN_14009474c(param_1);
  }
  return uVar1;
}

