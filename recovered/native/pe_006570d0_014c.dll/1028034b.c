/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028034b */

int FUN_1028034b(uint param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                )

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  
  iVar3 = FUN_102804a2(param_1,param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  iVar6 = (int)param_1 >> 6;
  iVar10 = (param_1 & 0x3f) * 0x38;
  iVar2 = (&DAT_103a5230)[iVar6];
  if (*(char *)(iVar2 + 0x29 + iVar10) != '\0') {
    pbVar8 = param_2 + iVar3;
    bVar1 = pbVar8[-1];
    if ((char)bVar1 < '\0') {
      uVar7 = 1;
      pbVar8 = pbVar8 + -1;
      while ((((&DAT_1039bbe0)[bVar1] == '\0' && (uVar7 < 5)) && (param_2 <= pbVar8))) {
        pbVar8 = pbVar8 + -1;
        uVar7 = uVar7 + 1;
        bVar1 = *pbVar8;
      }
      if ((char)(&DAT_1039bbe0)[*pbVar8] == 0) {
        puVar4 = (undefined4 *)FUN_10268ffd();
        *puVar4 = 0x2a;
        return -1;
      }
      if ((int)(char)(&DAT_1039bbe0)[*pbVar8] + 1U == uVar7) {
        pbVar8 = pbVar8 + uVar7;
      }
      else if ((*(byte *)(iVar2 + 0x28 + iVar10) & 0x48) == 0) {
        FUN_1027938a(param_1,-uVar7,(int)-uVar7 >> 0x1f,1);
      }
      else {
        pbVar9 = pbVar8 + 1;
        *(byte *)(iVar2 + 0x2a + iVar10) = *pbVar8;
        if (1 < uVar7) {
          bVar1 = *pbVar9;
          pbVar9 = pbVar8 + 2;
          *(byte *)(iVar10 + 0x2b + (&DAT_103a5230)[iVar6]) = bVar1;
        }
        if (uVar7 == 3) {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          *(byte *)(iVar10 + 0x2c + (&DAT_103a5230)[iVar6]) = bVar1;
        }
        pbVar8 = pbVar9 + -uVar7;
      }
    }
    iVar3 = FUN_102741c1(0xfde9,0,param_2,(int)pbVar8 - (int)param_2,param_4,param_5);
    if (iVar3 == 0) {
      DVar5 = GetLastError();
      ___acrt_errno_map_os_error(DVar5);
      return -1;
    }
    *(byte *)(iVar10 + 0x2d + (&DAT_103a5230)[iVar6]) =
         (iVar3 == (int)pbVar8 - (int)param_2) - 1U & 2 |
         *(byte *)(iVar10 + 0x2d + (&DAT_103a5230)[iVar6]) & 0xfd;
    return iVar3 * 2;
  }
  return iVar3;
}

