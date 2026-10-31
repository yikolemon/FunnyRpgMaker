/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c8650 */

uint FUN_1408c8650(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 unaff_RBX;
  bool bVar5;
  uint unaff_retaddr;
  uint unaff_retaddr_00;
  
  puVar4 = (uint *)(ulonglong)unaff_retaddr;
  if (unaff_retaddr_00 != 0) {
    uVar3 = (int)((ulonglong)unaff_RBX >> 0x20) - unaff_retaddr;
    if ((unaff_retaddr & 3) == 0) goto LAB_1408c8687;
    while( true ) {
      bVar1 = *(byte *)((ulonglong)uVar3 + (longlong)puVar4);
      if (bVar1 != (byte)*puVar4) {
        return -(uint)(bVar1 < (byte)*puVar4) | 1;
      }
      if ((bVar1 == 0) ||
         (bVar5 = unaff_retaddr_00 == 0, unaff_retaddr_00 = unaff_retaddr_00 - 1,
         bVar5 || unaff_retaddr_00 == 0)) break;
      if (((ulonglong)puVar4 & 3) == 0) {
LAB_1408c8687:
        while (((uVar3 + (int)puVar4 & 0xfff) < 0xffd &&
               (uVar2 = *(uint *)((ulonglong)uVar3 + (longlong)puVar4), uVar2 == *puVar4))) {
          bVar5 = unaff_retaddr_00 < 4;
          unaff_retaddr_00 = unaff_retaddr_00 - 4;
          if (bVar5 || unaff_retaddr_00 == 0) {
            return 0;
          }
          puVar4 = (uint *)(ulonglong)((int)puVar4 + 4);
          if ((~uVar2 & uVar2 + 0xfefefeff & 0x80808080) != 0) {
            return 0;
          }
        }
      }
    }
  }
  return 0;
}

