/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027d201 */

/* Library Function - Single Match
    _ProcessCodePage
   
   Library: Visual Studio 2019 Release */

UINT _ProcessCodePage(ushort *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  UINT UVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  bool bVar8;
  UINT local_8;
  
  if ((param_1 != (ushort *)0x0) && (uVar2 = 0, *param_1 != 0)) {
    puVar7 = &DAT_10359f38;
    puVar6 = param_1;
    do {
      uVar1 = *puVar6;
      bVar8 = uVar1 < *puVar7;
      if (uVar1 != *puVar7) {
LAB_1027d24c:
        uVar5 = -(uint)bVar8 | 1;
        goto LAB_1027d251;
      }
      if (uVar1 == 0) break;
      uVar1 = puVar6[1];
      bVar8 = uVar1 < puVar7[1];
      if (uVar1 != puVar7[1]) goto LAB_1027d24c;
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + 2;
    } while (uVar1 != 0);
    uVar5 = 0;
LAB_1027d251:
    if (uVar5 != 0) {
      puVar7 = &DAT_10359f30;
      puVar6 = param_1;
      do {
        uVar1 = *puVar6;
        bVar8 = uVar1 < *puVar7;
        if (uVar1 != *puVar7) {
LAB_1027d280:
          uVar2 = -(uint)bVar8 | 1;
          break;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar6[1];
        bVar8 = uVar1 < puVar7[1];
        if (uVar1 != puVar7[1]) goto LAB_1027d280;
        puVar6 = puVar6 + 2;
        puVar7 = puVar7 + 2;
      } while (uVar1 != 0);
      if (uVar2 != 0) {
        UVar4 = FUN_1028341e(param_1);
        return UVar4;
      }
      iVar3 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x2000000b,(LPWSTR)&local_8,2);
      if (iVar3 == 0) {
        return 0;
      }
      return local_8;
    }
  }
  iVar3 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x20001004,(LPWSTR)&local_8,2);
  if (iVar3 == 0) {
    return 0;
  }
  if (local_8 == 0) {
    UVar4 = GetACP();
    return UVar4;
  }
  return local_8;
}

