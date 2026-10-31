/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007ae77 */

void FUN_14007ae77(undefined4 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  puVar4 = (uint *)FUN_14007ab1d();
  lVar2 = DAT_140f2a910;
  if ((*puVar4 & 0xffff) == 0x802) {
    uVar8 = (ulonglong)(*puVar4 >> 0x10);
    uVar1 = *(undefined8 *)(DAT_140f2a910 + 0xda8 + uVar8);
    iVar3 = *(int *)(DAT_140f2a910 + 0x20f8);
    if (iVar3 == *(int *)(DAT_140f2a910 + 0x20fc)) {
      if (iVar3 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar3 / 2 + iVar3;
      }
      iVar7 = iVar3 + 1;
      if (iVar3 + 1 < iVar6) {
        iVar7 = iVar6;
      }
      lVar5 = FUN_140077ab4((longlong)iVar7 * 0xc);
      if (*(longlong *)(lVar2 + 0x2100) != 0) {
        FUN_1401c5180(lVar5,*(longlong *)(lVar2 + 0x2100),(longlong)*(int *)(lVar2 + 0x20f8) * 0xc);
        FUN_140077b90(*(undefined8 *)(lVar2 + 0x2100));
      }
      *(longlong *)(lVar2 + 0x2100) = lVar5;
      *(int *)(lVar2 + 0x20fc) = iVar7;
      iVar3 = *(int *)(lVar2 + 0x20f8);
    }
    else {
      lVar5 = *(longlong *)(DAT_140f2a910 + 0x2100);
    }
    *(undefined4 *)(lVar5 + (longlong)iVar3 * 0xc) = param_1;
    *(undefined8 *)(lVar5 + 4 + (longlong)iVar3 * 0xc) = uVar1;
    *(int *)(lVar2 + 0x20f8) = *(int *)(lVar2 + 0x20f8) + 1;
    *(undefined8 *)(lVar2 + 0xda8 + uVar8) = *param_2;
    return;
  }
  FUN_14007a954("Calling PushStyleVar() variant with wrong type!");
  return;
}

