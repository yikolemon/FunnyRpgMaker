/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102069bc */

byte * __fastcall FUN_102069bc(int *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  
  FUN_10206a24();
  pbVar3 = (byte *)0x0;
  if (param_1[3] < 1) {
    pbVar3 = (byte *)*param_1 + -1;
    iVar4 = 3;
    pbVar5 = (byte *)*param_1;
    do {
      while( true ) {
        if ((byte *)param_1[2] <= pbVar5) goto LAB_10206a1c;
        pbVar1 = pbVar5 + 1;
        *param_1 = (int)pbVar1;
        bVar2 = *pbVar5;
        pbVar5 = pbVar1;
        if (bVar2 < 0x1a) break;
        if (bVar2 == 0x1a) goto LAB_10206a1c;
        if (bVar2 == 0x20) {
          return pbVar3;
        }
        if (bVar2 == 0x3b) {
          iVar4 = 1;
          goto LAB_10206a1c;
        }
      }
      if (bVar2 == 9) {
        return pbVar3;
      }
    } while ((bVar2 != 10) && (bVar2 != 0xd));
    iVar4 = 2;
LAB_10206a1c:
    param_1[3] = iVar4;
  }
  return pbVar3;
}

