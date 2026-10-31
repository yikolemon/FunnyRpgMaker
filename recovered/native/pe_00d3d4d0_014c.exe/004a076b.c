/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a076b */

int __cdecl FUN_004a076b(uint param_1,byte *param_2,int param_3,LPWSTR param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  __acrt_ptd *p_Var4;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  
  iVar3 = FUN_004a08c2(param_1,(char *)param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  iVar6 = (int)param_1 >> 6;
  iVar10 = (param_1 & 0x3f) * 0x38;
  iVar2 = (&DAT_00521cc8)[iVar6];
  if (*(char *)(iVar2 + 0x29 + iVar10) != '\0') {
    pbVar8 = param_2 + iVar3;
    bVar1 = pbVar8[-1];
    if ((char)bVar1 < '\0') {
      uVar7 = 1;
      pbVar8 = pbVar8 + -1;
      while ((((&DAT_0051b650)[bVar1] == '\0' && (uVar7 < 5)) && (param_2 <= pbVar8))) {
        pbVar8 = pbVar8 + -1;
        uVar7 = uVar7 + 1;
        bVar1 = *pbVar8;
      }
      if ((char)(&DAT_0051b650)[*pbVar8] == 0) {
        p_Var4 = FUN_0048f66d();
        *(undefined4 *)p_Var4 = 0x2a;
        return -1;
      }
      if ((int)(char)(&DAT_0051b650)[*pbVar8] + 1U == uVar7) {
        pbVar8 = pbVar8 + uVar7;
      }
      else if ((*(byte *)(iVar2 + 0x28 + iVar10) & 0x48) == 0) {
        FUN_0049cd94(param_1,-uVar7,(int)-uVar7 >> 0x1f,(PLARGE_INTEGER)0x1);
      }
      else {
        pbVar9 = pbVar8 + 1;
        *(byte *)(iVar2 + 0x2a + iVar10) = *pbVar8;
        if (1 < uVar7) {
          bVar1 = *pbVar9;
          pbVar9 = pbVar8 + 2;
          *(byte *)(iVar10 + 0x2b + (&DAT_00521cc8)[iVar6]) = bVar1;
        }
        if (uVar7 == 3) {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          *(byte *)(iVar10 + 0x2c + (&DAT_00521cc8)[iVar6]) = bVar1;
        }
        pbVar8 = pbVar9 + -uVar7;
      }
    }
    iVar3 = FUN_00495fa1(0xfde9,0,(LPCSTR)param_2,(int)pbVar8 - (int)param_2,param_4,param_5);
    if (iVar3 == 0) {
      DVar5 = GetLastError();
      ___acrt_errno_map_os_error(DVar5);
      return -1;
    }
    *(byte *)(iVar10 + 0x2d + (&DAT_00521cc8)[iVar6]) =
         (iVar3 == (int)pbVar8 - (int)param_2) - 1U & 2 |
         *(byte *)(iVar10 + 0x2d + (&DAT_00521cc8)[iVar6]) & 0xfd;
    return iVar3 * 2;
  }
  return iVar3;
}

