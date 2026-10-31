/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f2ee0 */

undefined4 __fastcall FUN_100f2ee0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc) - 1U < 4) {
    uVar1 = *(undefined4 *)(&DAT_102b7248 + *(int *)(param_1 + 0xc) * 4);
  }
  return uVar1;
}

