/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028eb20 */

undefined4 FUN_18028eb20(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_18028f560();
  lVar2 = FUN_18028cfc0();
  *(undefined4 *)(lVar2 + 0x78) = 0xfffffffe;
  return uVar1;
}

