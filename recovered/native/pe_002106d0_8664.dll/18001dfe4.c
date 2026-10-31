/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001dfe4 */

undefined4 FUN_18001dfe4(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_18001e010();
  if ((char)uVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x76) = *(undefined1 *)(param_1 + 0x75);
    FUN_18001d674(param_1);
  }
  return uVar1;
}

