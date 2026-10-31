/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180094ca6 */

undefined4 FUN_180094ca6(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_180094cd4();
  if ((char)uVar1 != '\0') {
    *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x76);
    FUN_180094520(param_1);
  }
  return uVar1;
}

