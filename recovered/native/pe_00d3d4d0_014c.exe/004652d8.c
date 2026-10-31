/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004652d8 */

ushort __fastcall FUN_004652d8(byte *param_1,byte *param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  char cVar5;
  short sVar3;
  ushort uVar4;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  int iVar14;
  
  if (param_2 <= param_1 || param_1 == (byte *)0x0) {
    return 0;
  }
  uVar4 = (ushort)*param_1;
  pbVar6 = param_1 + 1;
  iVar8 = 0;
  uVar12 = 0x34;
  do {
    uVar10 = uVar12 + iVar8 & 0xfffffffe;
    uVar11 = (uint)(byte)(&UNK_004e85fd)[uVar10];
    uVar4 = CONCAT11((&UNK_004e85fa)[uVar11 + (uint)(byte)(&UNK_004e85fc)[uVar10] * 0x100],
                     (char)uVar4) & 0x7fff;
    cVar5 = (char)(uVar4 >> 8);
    if (cVar5 == (char)uVar4) {
      puVar1 = &UNK_004e85fa + (uint)(byte)(&UNK_004e85fc)[uVar10] * 0x100;
      puVar13 = puVar1 + uVar11;
      bVar7 = puVar1[uVar11];
      sVar3 = CONCAT11(bVar7,(char)puVar1);
      if (pbVar6 < param_2) {
        do {
          bVar7 = puVar13[1];
          bVar9 = (byte)(bVar7 & 0x7f);
          if (sVar3 < 0) {
            if (*pbVar6 != bVar9) {
              return 0;
            }
            puVar13 = puVar13 + 1;
          }
          else {
            if (bVar9 == 0) {
              return 0;
            }
            iVar8 = (bVar7 & 0x7f) + 1;
            pbVar2 = puVar13 + (uint)(bVar7 >> 7) * 2;
            while( true ) {
              iVar14 = (uint)pbVar2[2] * 0x100;
              bVar7 = (&UNK_004e85fa)[(uint)pbVar2[3] + iVar14];
              sVar3 = 0;
              if (*pbVar6 == (bVar7 & 0x7f)) break;
              iVar8 = iVar8 + -1;
              pbVar2 = pbVar2 + 2;
              if (iVar8 < 2) {
                return 0;
              }
            }
            puVar13 = &UNK_004e85fa + (uint)pbVar2[3] + iVar14;
          }
          pbVar6 = pbVar6 + 1;
          sVar3 = CONCAT11(bVar7,(char)sVar3);
        } while (pbVar6 != param_2);
      }
      uVar4 = 0;
      if ((-1 < (char)bVar7) && ((char)puVar13[1] < '\0')) {
        uVar4 = *(ushort *)(puVar13 + 2) << 8 | *(ushort *)(puVar13 + 2) >> 8;
      }
      return uVar4;
    }
    uVar10 = uVar12 + iVar8 >> 1;
    if (cVar5 < (char)uVar4) {
      iVar8 = uVar10 + 1;
      uVar10 = uVar12;
    }
    uVar12 = uVar10;
  } while (iVar8 < (int)uVar10);
  return 0;
}

