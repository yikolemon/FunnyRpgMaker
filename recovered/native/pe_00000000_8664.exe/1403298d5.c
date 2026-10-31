/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403298d5 */

char * FUN_1403298d5(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return "tralNode";
  }
  uVar2 = param_1;
  if (((param_1 & 0xf000) != 0) && ((param_1 - 1 & param_1) == 0)) {
    uVar1 = 0;
    if (param_1 != 0) {
      for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    uVar2 = uVar1 + 0x28b;
    if ((uVar1 & 0x1c) != 0xc) {
      uVar2 = param_1;
    }
  }
  if (0x9a < uVar2 - 0x200) {
    return "slider u16 full";
  }
  return *(char **)(&DAT_1404edd20 + (ulonglong)uVar2 * 8);
}

