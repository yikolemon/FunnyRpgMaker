/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018f370 */

longlong FUN_14018f370(byte *param_1,byte *param_2,longlong param_3,int param_4,char param_5)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  bVar2 = *param_1;
  pbVar9 = param_1 + 1;
  *param_2 = bVar2;
  if ((bVar2 & 4) != 0) {
    bVar3 = *pbVar9;
    pbVar9 = pbVar9 + -(longlong)(char)(&DAT_140eb2890)[bVar3 & 0xf];
    *(uint *)(param_2 + 4) = *(uint *)(pbVar9 + -4) >> ((&DAT_140eb28a0)[bVar3 & 0xf] & 0x1f);
  }
  if ((bVar2 & 8) != 0) {
    uVar4 = *(undefined4 *)pbVar9;
    pbVar9 = pbVar9 + 4;
    *(undefined4 *)(param_2 + 8) = uVar4;
  }
  if ((bVar2 & 0x10) != 0) {
    uVar4 = *(undefined4 *)pbVar9;
    pbVar9 = pbVar9 + 4;
    *(undefined4 *)(param_2 + 0xc) = uVar4;
  }
  pbVar8 = pbVar9 + 4;
  if ((param_5 == '\0') && ((bVar2 & 2) != 0)) {
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    if (*(int *)pbVar9 == 0) {
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(7);
    }
    else {
      pbVar9 = (byte *)(*(int *)pbVar9 + param_3);
      uVar6 = *pbVar9 & 0xf;
      pbVar9 = pbVar9 + -(longlong)(char)(&DAT_140eb2890)[uVar6];
      uVar7 = 0;
      puVar1 = (uint *)(pbVar9 + -4);
      if (*puVar1 >> ((&DAT_140eb28a0)[uVar6] & 0x1f) != 0) {
        do {
          if (*(int *)pbVar9 == param_4) {
            *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(pbVar9 + 4);
            break;
          }
          pbVar9 = pbVar9 + 8;
          uVar7 = uVar7 + 1;
        } while (uVar7 < *puVar1 >> ((&DAT_140eb28a0)[uVar6] & 0x1f));
      }
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)pbVar9;
  }
  if ((bVar2 & 1) != 0) {
    bVar2 = *pbVar8;
    pbVar8 = pbVar8 + -(longlong)(char)(&DAT_140eb2890)[bVar2 & 0xf];
    *(uint *)(param_2 + 0x14) = *(uint *)(pbVar8 + -4) >> ((&DAT_140eb28a0)[bVar2 & 0xf] & 0x1f);
  }
  return (longlong)pbVar8 - (longlong)param_1;
}

