/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012cbe2 */

void FUN_18012cbe2(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_1800fdb8a(DAT_180419160,param_1);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 0xc) = param_3;
  return;
}

