/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140092507 */

void FUN_140092507(uint param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar5;
  byte bVar6;
  longlong lVar4;
  
  lVar2 = DAT_140f2a910;
  uVar3 = param_1;
  if (((param_1 & 0xf000) != 0) && (param_1 - 1 < (param_1 ^ param_1 - 1))) {
    uVar1 = 0;
    if (param_1 != 0) {
      for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    uVar3 = uVar1 + 0x28b;
    if ((uVar1 & 0x1c) != 0xc) {
      uVar3 = param_1;
    }
  }
  lVar4 = (longlong)(int)uVar3;
  *(undefined4 *)(DAT_140f2a910 + -0x108 + lVar4 * 0xc) = param_2;
  *(undefined4 *)(lVar2 + -0x10c + lVar4 * 0xc) = param_2;
  bVar5 = (byte)(param_3 >> 0x15) & 1;
  *(byte *)(lVar2 + -0x103 + lVar4 * 0xc) = bVar5;
  bVar6 = 1;
  if ((param_3 >> 0x14 & 1) == 0) {
    bVar6 = bVar5;
  }
  *(byte *)(lVar2 + -0x104 + lVar4 * 0xc) = bVar6;
  return;
}

