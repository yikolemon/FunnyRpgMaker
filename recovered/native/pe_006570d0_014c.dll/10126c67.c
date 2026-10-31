/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10126c67 */

void __fastcall FUN_10126c67(undefined4 param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined4 in_XMM0_Da;
  
  puVar1 = (undefined1 *)FUN_100f9590(DAT_1039d74c,param_1);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 0xc) = in_XMM0_Da;
  return;
}

