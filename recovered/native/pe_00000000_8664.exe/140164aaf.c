/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140164aaf */

byte * FUN_140164aaf(longlong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte *pbVar5;
  
  FUN_140164b31();
  if ((int)param_1[3] < 1) {
    pbVar3 = (byte *)*param_1 + -1;
    uVar4 = 3;
    pbVar5 = (byte *)*param_1;
    do {
      while( true ) {
        if ((byte *)param_1[2] <= pbVar5) goto LAB_140164b27;
        pbVar1 = pbVar5 + 1;
        *param_1 = (longlong)pbVar1;
        bVar2 = *pbVar5;
        pbVar5 = pbVar1;
        if (bVar2 < 0x1a) break;
        if (bVar2 == 0x1a) goto LAB_140164b27;
        if (bVar2 == 0x20) {
          return pbVar3;
        }
        if (bVar2 == 0x3b) {
          uVar4 = 1;
          goto LAB_140164b27;
        }
      }
      if (bVar2 == 9) {
        return pbVar3;
      }
    } while ((bVar2 != 10) && (bVar2 != 0xd));
    uVar4 = 2;
LAB_140164b27:
    *(undefined4 *)(param_1 + 3) = uVar4;
  }
  else {
    pbVar3 = (byte *)0x0;
  }
  return pbVar3;
}

