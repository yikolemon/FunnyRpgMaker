/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102721f0 */

undefined4 FUN_102721f0(void)

{
  BOOL BVar1;
  
  DAT_1039b3e0 = FlsAlloc((PFLS_CALLBACK_FUNCTION)&LAB_10272430);
  if (DAT_1039b3e0 != 0xffffffff) {
    BVar1 = FlsSetValue(DAT_1039b3e0,&DAT_103a5010);
    if (BVar1 != 0) {
      return 1;
    }
    if (DAT_1039b3e0 != 0xffffffff) {
      FlsFree(DAT_1039b3e0);
      DAT_1039b3e0 = 0xffffffff;
    }
  }
  return 0;
}

