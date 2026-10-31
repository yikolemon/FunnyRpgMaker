/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027c92c */

int FUN_1027c92c(ushort *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  int local_8;
  
  if ((param_1 != (ushort *)0x0) && (uVar6 = 0, *param_1 != 0)) {
    puVar5 = &DAT_10359f38;
    puVar4 = param_1;
    do {
      uVar1 = *puVar4;
      bVar7 = uVar1 < *puVar5;
      if (uVar1 != *puVar5) {
LAB_1027c977:
        uVar2 = -(uint)bVar7 | 1;
        goto LAB_1027c97c;
      }
      if (uVar1 == 0) break;
      uVar1 = puVar4[1];
      bVar7 = uVar1 < puVar5[1];
      if (uVar1 != puVar5[1]) goto LAB_1027c977;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
    } while (uVar1 != 0);
    uVar2 = 0;
LAB_1027c97c:
    if (uVar2 != 0) {
      iVar3 = FUN_1026b1a0(param_1,L"utf8");
      if (iVar3 == 0) {
        return 0xfde9;
      }
      iVar3 = FUN_1026b1a0(param_1,L"utf-8");
      if (iVar3 == 0) {
        return 0xfde9;
      }
      puVar5 = &DAT_10359f30;
      puVar4 = param_1;
      do {
        uVar1 = *puVar4;
        bVar7 = uVar1 < *puVar5;
        if (uVar1 != *puVar5) {
LAB_1027c9cd:
          uVar6 = -(uint)bVar7 | 1;
          break;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar4[1];
        bVar7 = uVar1 < puVar5[1];
        if (uVar1 != puVar5[1]) goto LAB_1027c9cd;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      if (uVar6 != 0) {
        iVar3 = FUN_1028341e(param_1);
        return iVar3;
      }
      uVar8 = 0x2000000b;
      goto LAB_1027ca08;
    }
  }
  uVar8 = 0x20001004;
LAB_1027ca08:
  iVar3 = ___acrt_GetLocaleInfoEx_16(param_2 + 0x250,uVar8,&local_8,2);
  if (iVar3 == 0) {
    return 0;
  }
  if (local_8 < 3) {
    return 0xfde9;
  }
  return local_8;
}

