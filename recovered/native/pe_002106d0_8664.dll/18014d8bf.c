/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014d8bf */

void FUN_18014d8bf(undefined1 param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  if (*(char *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10e) == '\0') {
    *(byte *)(DAT_180419160 + 0x1fa8) = *(byte *)(DAT_180419160 + 0x1fa8) | 2;
    *(undefined1 *)(lVar1 + 0x1fcc) = param_1;
    *(char *)(lVar1 + 0x1fcd) = (char)param_2 + (param_2 == 0);
  }
  return;
}

