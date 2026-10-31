/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020db58 */

ushort __fastcall FUN_1020db58(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar5;
  ushort uVar3;
  uint uVar4;
  byte bVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  int iVar12;
  
  if (param_2 <= param_1 || param_1 == (byte *)0x0) {
    return 0;
  }
  uVar4 = (uint)*param_1;
  param_1 = param_1 + 1;
  iVar7 = 0;
  uVar10 = 0x34;
  do {
    uVar9 = uVar10 + iVar7 & 0xfffffffe;
    iVar12 = (uint)(byte)(&UNK_1031405c)[uVar9] * 0x100;
    uVar9 = (uint)(byte)(&UNK_1031405d)[uVar9];
    uVar4 = CONCAT11((&UNK_1031405a)[uVar9 + iVar12],(char)uVar4) & 0xffff7fff;
    cVar5 = (char)(uVar4 >> 8);
    if (cVar5 == (char)uVar4) {
      puVar11 = &UNK_1031405a + uVar9 + iVar12;
      bVar6 = (&UNK_1031405a)[uVar9 + iVar12];
      bVar2 = bVar6;
      if (param_1 < param_2) {
        do {
          bVar6 = puVar11[1];
          bVar8 = (byte)(bVar6 & 0x7f);
          if ((char)bVar2 < '\0') {
            if (*param_1 != bVar8) {
              return 0;
            }
            puVar11 = puVar11 + 1;
          }
          else {
            if (bVar8 == 0) {
              return 0;
            }
            iVar7 = (bVar6 & 0x7f) + 1;
            pbVar1 = puVar11 + (uint)(bVar6 >> 7) * 2;
            while( true ) {
              iVar12 = (uint)pbVar1[2] * 0x100;
              bVar6 = (&UNK_1031405a)[(uint)pbVar1[3] + iVar12];
              if (*param_1 == (bVar6 & 0x7f)) break;
              iVar7 = iVar7 + -1;
              pbVar1 = pbVar1 + 2;
              if (iVar7 < 2) {
                return 0;
              }
            }
            puVar11 = &UNK_1031405a + (uint)pbVar1[3] + iVar12;
          }
          param_1 = param_1 + 1;
          bVar2 = bVar6;
        } while (param_1 != param_2);
      }
      uVar3 = 0;
      if ((-1 < (char)bVar6) && ((char)puVar11[1] < '\0')) {
        uVar3 = *(ushort *)(puVar11 + 2) << 8 | *(ushort *)(puVar11 + 2) >> 8;
      }
      return uVar3;
    }
    uVar9 = uVar10 + iVar7 >> 1;
    if (cVar5 < (char)uVar4) {
      iVar7 = uVar9 + 1;
      uVar9 = uVar10;
    }
    uVar10 = uVar9;
  } while (iVar7 < (int)uVar9);
  return 0;
}

