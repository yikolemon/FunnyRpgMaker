/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fe966 */

byte * FUN_1800fe966(byte *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  size_t sVar4;
  byte bVar5;
  longlong lVar6;
  byte bVar7;
  
  if (param_4 == (byte *)0x0) {
    sVar4 = strlen((char *)param_3);
    param_4 = param_3 + sVar4;
  }
  bVar2 = *param_3;
  bVar3 = bVar2 & 0x5f;
  if (0x19 < (byte)(bVar2 + 0x9f)) {
    bVar3 = bVar2;
  }
  do {
    if (param_2 == (byte *)0x0) {
      bVar2 = *param_1;
      if (bVar2 == 0) {
        return (byte *)0x0;
      }
    }
    else {
      if (param_2 <= param_1) {
        return (byte *)0x0;
      }
      bVar2 = *param_1;
    }
    bVar5 = bVar2 & 0x5f;
    if (0x19 < (byte)(bVar2 + 0x9f)) {
      bVar5 = bVar2;
    }
    if (bVar5 == bVar3) {
      lVar6 = 1;
      do {
        pbVar1 = param_3 + lVar6;
        if (param_4 <= pbVar1) break;
        bVar2 = param_1[lVar6];
        bVar5 = bVar2 & 0x5f;
        if (0x19 < (byte)(bVar2 + 0x9f)) {
          bVar5 = bVar2;
        }
        bVar2 = *pbVar1;
        bVar7 = bVar2 & 0x5f;
        if (0x19 < (byte)(bVar2 + 0x9f)) {
          bVar7 = bVar2;
        }
        lVar6 = lVar6 + 1;
      } while (bVar5 == bVar7);
      if (pbVar1 == param_4) {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

