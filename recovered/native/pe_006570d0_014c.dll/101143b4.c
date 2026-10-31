/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101143b4 */

void FUN_101143b4(uint param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = DAT_1039d74c;
  if (((param_1 & 0xf000) != 0) && (param_1 - 1 < (param_1 ^ param_1 - 1))) {
    uVar1 = 0;
    if (param_1 != 0) {
      for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    if ((uVar1 & 0x1c) == 0xc) {
      param_1 = uVar1 + 0x28b;
    }
  }
  *(undefined4 *)(DAT_1039d74c + -0x260 + param_1 * 0xc) = param_2;
  *(undefined4 *)(iVar2 + -0x264 + param_1 * 0xc) = param_2;
  bVar3 = (byte)(param_3 >> 0x15) & 1;
  *(byte *)(iVar2 + -0x25b + param_1 * 0xc) = bVar3;
  if ((param_3 >> 0x14 & 1) != 0) {
    bVar3 = 1;
  }
  *(byte *)(iVar2 + -0x25c + param_1 * 0xc) = bVar3;
  return;
}

