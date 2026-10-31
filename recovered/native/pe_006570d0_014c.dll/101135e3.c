/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101135e3 */

undefined4 __fastcall FUN_101135e3(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x1000;
  if ((param_1 != 0x20f) && (param_1 != 0x213)) {
    uVar1 = 0;
    if ((param_1 & 0xfffffffb) - 0x210 < 3) {
      uVar1 = *(undefined4 *)(&DAT_102b7fc0 + (param_1 & 0xfffffffb) * 4);
    }
  }
  return uVar1;
}

