/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026eb40 */

undefined4 FUN_18026eb40(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18028d180();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x30);
  }
  return 0;
}

