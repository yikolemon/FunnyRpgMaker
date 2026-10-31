/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f8943 */

int __fastcall FUN_100f8943(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x10000 - (param_1 & 0xffff);
  if ((param_1 & 0xffff) == 0) {
    iVar1 = 0;
  }
  return iVar1 + param_1;
}

