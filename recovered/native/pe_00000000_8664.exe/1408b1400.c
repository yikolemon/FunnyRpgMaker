/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b1400 */

uint * FUN_1408b1400(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  uint unaff_retaddr;
  byte unaff_retaddr_00;
  uint local_resc;
  
  if (local_resc == 0) {
    return (uint *)0x0;
  }
  uVar7 = (uint)unaff_retaddr_00;
  while (puVar4 = (uint *)(ulonglong)unaff_retaddr, (unaff_retaddr & 3) != 0) {
    unaff_retaddr = unaff_retaddr + 1;
    if ((byte)*puVar4 == unaff_retaddr_00) goto LAB_1408b1496;
    local_resc = local_resc - 1;
    if (local_resc == 0) {
      return (uint *)0x0;
    }
  }
  uVar2 = local_resc - 4;
  if (3 < local_resc) {
    uVar7 = (uint)unaff_retaddr_00 * 0x1010101;
    puVar5 = puVar4;
    do {
      iVar3 = (int)puVar5;
      unaff_retaddr = iVar3 + 4;
      puVar4 = (uint *)(ulonglong)unaff_retaddr;
      if (((*puVar5 ^ uVar7 ^ 0xffffffff ^ (*puVar5 ^ uVar7) + 0x7efefeff) & 0x81010100) != 0) {
        uVar1 = puVar4[-1];
        cVar6 = (char)uVar7;
        if ((char)uVar1 == cVar6) {
          return puVar5;
        }
        if ((char)(uVar1 >> 8) == cVar6) {
          return (uint *)(ulonglong)(iVar3 + 1);
        }
        if ((char)(uVar1 >> 0x10) == cVar6) {
          return (uint *)(ulonglong)(iVar3 + 2);
        }
        if ((char)(uVar1 >> 0x18) == cVar6) goto LAB_1408b1496;
      }
      bVar8 = 3 < uVar2;
      uVar2 = uVar2 - 4;
      puVar5 = puVar4;
    } while (bVar8);
  }
  iVar3 = uVar2 + 4;
  while( true ) {
    if (iVar3 == 0) {
      return (uint *)0x0;
    }
    uVar2 = *puVar4;
    unaff_retaddr = (int)puVar4 + 1;
    puVar4 = (uint *)(ulonglong)unaff_retaddr;
    if ((char)uVar2 == (char)uVar7) break;
    iVar3 = iVar3 + -1;
  }
LAB_1408b1496:
  return (uint *)(ulonglong)(unaff_retaddr - 1);
}

