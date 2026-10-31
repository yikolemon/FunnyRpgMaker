/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006a936 */

ushort FUN_14006a936(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  
  if (param_1 < param_2 && param_1 != (byte *)0x0) {
    pbVar4 = param_1 + 1;
    iVar11 = 0;
    uVar10 = 0x34;
    do {
      uVar7 = uVar10 + iVar11 & 0xfffffffe;
      bVar2 = (&UNK_1400fb9d2)[uVar7];
      uVar8 = (ulonglong)(byte)(&UNK_1400fb9d3)[uVar7];
      bVar5 = (&DAT_1400fb9d0)[uVar8 + (ulonglong)bVar2 * 0x100] & 0x7f;
      if (bVar5 == *param_1) {
        puVar9 = &DAT_1400fb9d0 + uVar8 + (ulonglong)bVar2 * 0x100;
        bVar2 = (&DAT_1400fb9d0)[uVar8 + (ulonglong)bVar2 * 0x100];
        if (pbVar4 < param_2) {
          do {
            bVar5 = puVar9[1];
            bVar6 = (byte)(bVar5 & 0x7f);
            if ((char)bVar2 < '\0') {
              if (*pbVar4 != bVar6) {
                return 0;
              }
              puVar9 = puVar9 + 1;
              bVar2 = bVar5;
            }
            else {
              if (bVar6 == 0) {
                return 0;
              }
              iVar11 = (bVar5 & 0x7f) + 1;
              pbVar1 = puVar9 + (ulonglong)(bVar5 >> 7) * 2;
              while( true ) {
                bVar5 = pbVar1[2];
                bVar2 = (&DAT_1400fb9d0)[(ulonglong)pbVar1[3] + (ulonglong)bVar5 * 0x100];
                if (*pbVar4 == (bVar2 & 0x7f)) break;
                iVar11 = iVar11 + -1;
                pbVar1 = pbVar1 + 2;
                if (iVar11 < 2) {
                  return 0;
                }
              }
              puVar9 = &DAT_1400fb9d0 + (ulonglong)pbVar1[3] + (ulonglong)bVar5 * 0x100;
            }
            pbVar4 = pbVar4 + 1;
          } while (pbVar4 != param_2);
        }
        uVar3 = 0;
        if ((-1 < (char)bVar2) && ((char)puVar9[1] < '\0')) {
          uVar3 = *(ushort *)(puVar9 + 2) << 8 | *(ushort *)(puVar9 + 2) >> 8;
        }
        return uVar3;
      }
      uVar7 = uVar10 + iVar11 >> 1;
      if ((char)bVar5 < (char)*param_1) {
        iVar11 = uVar7 + 1;
        uVar7 = uVar10;
      }
      uVar10 = uVar7;
    } while (iVar11 < (int)uVar10);
  }
  return 0;
}

