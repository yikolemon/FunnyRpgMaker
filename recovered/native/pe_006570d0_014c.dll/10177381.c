/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10177381 */

undefined4 __fastcall FUN_10177381(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_1 * param_2 + 0x80U >> 8) + param_1 * param_2 + 0x80;
  return CONCAT31((int3)((uint)iVar1 >> 8),(char)((uint)iVar1 >> 8));
}

