/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140076e46 */

longlong FUN_140076e46(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if (((param_2 & 0xf000) != 0) && (param_2 - 1 < (param_2 ^ param_2 - 1))) {
    uVar1 = 0;
    if (param_2 != 0) {
      for (; (param_2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    uVar2 = uVar1 + 0x28b;
    if ((uVar1 & 0x1c) != 0xc) {
      uVar2 = param_2;
    }
  }
  return (longlong)(int)uVar2 * 0x10 + param_1 + -0x1ec0;
}

