/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019ef94 */

byte * FUN_14019ef94(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  __acrt_initialize_multibyte();
  pbVar5 = &DAT_140f32898;
  if (DAT_140f331d8 != (byte *)0x0) {
    pbVar5 = DAT_140f331d8;
  }
  bVar2 = false;
  do {
    bVar1 = *pbVar5;
    if (bVar1 < 0x21) {
      if (bVar1 == 0) {
        return pbVar5;
      }
      if (!bVar2) {
        do {
          if (0x20 < bVar1) {
            return pbVar5;
          }
          pbVar5 = pbVar5 + 1;
          bVar1 = *pbVar5;
        } while (bVar1 != 0);
        return pbVar5;
      }
    }
    if (bVar1 == 0x22) {
      bVar2 = !bVar2;
    }
    iVar3 = FUN_1401b7b28(bVar1);
    pbVar4 = pbVar5 + 1;
    if (iVar3 == 0) {
      pbVar4 = pbVar5;
    }
    pbVar5 = pbVar4 + 1;
  } while( true );
}

