/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014d8f1 */

void FUN_18014d8f1(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  if (*(char *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10e) == '\0') {
    *(byte *)(DAT_180419160 + 0x1fa8) = *(byte *)(DAT_180419160 + 0x1fa8) | 0x10;
    *(undefined4 *)(lVar1 + 0x1fd8) = param_1;
  }
  return;
}

