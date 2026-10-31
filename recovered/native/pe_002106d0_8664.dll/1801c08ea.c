/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c08ea */

uint FUN_1801c08ea(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  bVar3 = FUN_18014f686(&DAT_1804200e8,*(undefined4 *)(param_1 + 0x1c));
  uVar6 = (uint)bVar3;
  if (param_2 != 0) {
    cVar4 = FUN_18014d0ad(*(undefined4 *)(param_1 + 0x1c));
    if (cVar4 == '\0') goto LAB_1801c0956;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar7 = 0;
    do {
      iVar5 = FUN_1801c08ea(*(undefined8 *)(lVar2 + lVar7),param_2 + 1);
      uVar6 = uVar6 + iVar5;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  FUN_18014d0da(*(undefined4 *)(param_1 + 0x1c),0);
LAB_1801c0956:
  FUN_18014f78a(&DAT_1804200e8,*(undefined4 *)(param_1 + 0x1c),0 < (int)uVar6 && param_2 == 0);
  return uVar6;
}

