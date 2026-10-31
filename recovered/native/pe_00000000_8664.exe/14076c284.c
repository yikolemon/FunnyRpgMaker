/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076c284 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076c284(void)

{
  uint uVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 unaff_RBX;
  uint uVar4;
  uint in_R9D;
  uint unaff_retaddr;
  undefined4 uVar6;
  ulonglong uVar5;
  
  uVar6 = (undefined4)((ulonglong)unaff_RBX >> 0x20);
  uVar4 = (uint)unaff_RBX;
  pcVar2 = (char *)(ulonglong)_DAT_f000c6f71039d74c;
  *pcVar2 = *pcVar2 + (char)_DAT_f000c6f71039d74c;
  if ((*pcVar2 != '\0') && (uVar4 - 1 < (uVar4 ^ uVar4 - 1))) {
    uVar1 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    if ((uVar1 & 0x1c) == 0xc) {
      uVar4 = uVar1 + 0x28b;
    }
  }
  uVar5 = (ulonglong)(uVar4 * 3);
  *(undefined4 *)(pcVar2 + uVar5 * 4 + -0x260) = uVar6;
  *(undefined4 *)(pcVar2 + uVar5 * 4 + -0x264) = uVar6;
  bVar3 = (byte)(unaff_retaddr >> 0x15) & 1;
  pcVar2[uVar5 * 4 + -0x25b] = bVar3;
  if ((in_R9D >> 0x14 & 1) != 0) {
    bVar3 = 0;
  }
  pcVar2[uVar5 * 4 + -0x25c] = bVar3;
  return;
}

