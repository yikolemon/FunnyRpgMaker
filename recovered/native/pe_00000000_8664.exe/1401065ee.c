/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401065ee */

uint FUN_1401065ee(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  bVar3 = FUN_1400c85b6(&DAT_140f31838,*(undefined4 *)(param_1 + 0x1c));
  uVar6 = (uint)bVar3;
  if (param_2 != 0) {
    cVar4 = FUN_1400c5fdd(*(undefined4 *)(param_1 + 0x1c));
    if (cVar4 == '\0') goto LAB_14010665a;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar7 = 0;
    do {
      iVar5 = FUN_1401065ee(*(undefined8 *)(lVar2 + lVar7),param_2 + 1);
      uVar6 = uVar6 + iVar5;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  FUN_1400c600a(*(undefined4 *)(param_1 + 0x1c),0);
LAB_14010665a:
  FUN_1400c86ba(&DAT_140f31838,*(undefined4 *)(param_1 + 0x1c),0 < (int)uVar6 && param_2 == 0);
  return uVar6;
}

