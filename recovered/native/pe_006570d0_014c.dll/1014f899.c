/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014f899 */

undefined4 __fastcall FUN_1014f899(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0xb8);
    FUN_10103c09(uVar1);
    return uVar1;
  }
  uVar1 = FUN_101021d4(param_1,0);
  return uVar1;
}

