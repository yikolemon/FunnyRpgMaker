/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd983 */

ulonglong FUN_1407bd983(void)

{
  byte bVar1;
  uint7 uVar3;
  ulonglong uVar2;
  int iVar4;
  ulonglong unaff_RBX;
  
  uVar2 = unaff_RBX >> 0x20;
  uVar3 = (uint7)(uint3)(unaff_RBX >> 0x28);
  if (*(short *)(uVar2 + 0x5e) == -1) {
    bVar1 = *(byte *)(uVar2 + 0x72);
LAB_1407bd9cf:
    uVar2 = CONCAT71(uVar3,bVar1) & 0xffffffffffffff03;
  }
  else {
    bVar1 = 1;
    iVar4 = 0;
    do {
      if (((*(byte *)(uVar2 + 0x72) >> ((byte)iVar4 & 0x1f) ^ *(byte *)(uVar2 + 0x71)) & 3) == 0) {
        uVar3 = 0;
        bVar1 = *(byte *)(uVar2 + 0x72) >> (bVar1 % (*(byte *)(uVar2 + 0x71) >> 2 & 3)) * '\x02';
        goto LAB_1407bd9cf;
      }
      bVar1 = bVar1 + 1;
      iVar4 = iVar4 + 2;
    } while (iVar4 != 6);
    uVar2 = 0;
  }
  return uVar2;
}

