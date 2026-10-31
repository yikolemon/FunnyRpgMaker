/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10165ab3 */

uint FUN_10165ab3(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined3 uVar3;
  int iVar4;
  
  uVar3 = (undefined3)((uint)param_1 >> 8);
  if (*(short *)(param_1 + 0x5e) == -1) {
    bVar1 = *(byte *)(param_1 + 0x72);
LAB_10165aff:
    uVar2 = CONCAT31(uVar3,bVar1) & 0xffffff03;
  }
  else {
    bVar1 = 1;
    iVar4 = 0;
    do {
      if (((*(byte *)(param_1 + 0x72) >> ((byte)iVar4 & 0x1f) ^ *(byte *)(param_1 + 0x71)) & 3) == 0
         ) {
        uVar3 = 0;
        bVar1 = *(byte *)(param_1 + 0x72) >> (bVar1 % (*(byte *)(param_1 + 0x71) >> 2 & 3)) * '\x02'
        ;
        goto LAB_10165aff;
      }
      bVar1 = bVar1 + 1;
      iVar4 = iVar4 + 2;
    } while (iVar4 != 6);
    uVar2 = 0;
  }
  return uVar2;
}

