/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180244a20 */

undefined4 thunk_FUN_18026eb40(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18028d180();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x30);
  }
  return 0;
}

