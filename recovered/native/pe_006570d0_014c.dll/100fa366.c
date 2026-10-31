/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fa366 */

byte * FUN_100fa366(byte *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  byte *pbVar1;
  size_t sVar2;
  byte bVar3;
  ushort uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  
  if (param_4 == (byte *)0x0) {
    sVar2 = _strlen((char *)param_3);
    param_4 = param_3 + sVar2;
  }
  bVar5 = *param_3;
  uVar4 = CONCAT11(bVar5,bVar5 + 0x9f) & 0x5fff;
  bVar7 = (byte)(uVar4 >> 8);
  if (0x19 < (byte)uVar4) {
    bVar7 = bVar5;
  }
  do {
    if (param_2 == (byte *)0x0) {
      bVar5 = *param_1;
      if (bVar5 == 0) {
        return (byte *)0x0;
      }
    }
    else {
      if (param_2 <= param_1) {
        return (byte *)0x0;
      }
      bVar5 = *param_1;
    }
    bVar6 = bVar5 & 0x5f;
    if (0x19 < (byte)(bVar5 + 0x9f)) {
      bVar6 = bVar5;
    }
    if (bVar6 == bVar7) {
      iVar8 = 1;
      do {
        pbVar1 = param_3 + iVar8;
        if (param_4 <= pbVar1) break;
        bVar5 = param_1[iVar8];
        uVar4 = CONCAT11(bVar5,bVar5 + 0x9f) & 0x5fff;
        bVar6 = (byte)(uVar4 >> 8);
        if (0x19 < (byte)uVar4) {
          bVar6 = bVar5;
        }
        bVar5 = *pbVar1;
        uVar4 = CONCAT11(bVar5,bVar5 + 0x9f) & 0x5fff;
        bVar3 = (byte)(uVar4 >> 8);
        if (0x19 < (byte)uVar4) {
          bVar3 = bVar5;
        }
        iVar8 = iVar8 + 1;
      } while (bVar6 == bVar3);
      if (pbVar1 == param_4) {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

