/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005e742 */

undefined4 FUN_14005e742(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14005e770();
  if ((char)uVar1 != '\0') {
    *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x76);
    FUN_14005ddac(param_1);
  }
  return uVar1;
}

