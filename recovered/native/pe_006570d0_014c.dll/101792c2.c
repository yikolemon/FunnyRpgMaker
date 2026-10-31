/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101792c2 */

void __fastcall FUN_101792c2(undefined4 param_1,undefined1 *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_1017336c();
  *param_2 = (char)(((uVar1 >> 10 & 0x1f) * 0xff) / 0x1f);
  param_2[1] = (char)(((uVar1 >> 5 & 0x1f) * 0xff) / 0x1f);
  param_2[2] = (char)(((uVar1 & 0x1f) * 0xff) / 0x1f);
  return;
}

