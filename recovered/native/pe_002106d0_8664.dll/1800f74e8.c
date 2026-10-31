/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f74e8 */

undefined * FUN_1800f74e8(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x18) - 1;
  if (uVar1 < 4) {
    return (&PTR_s_broken_promise_1802dc4c8)[uVar1];
  }
  return (undefined *)0x0;
}

