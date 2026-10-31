/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180101991 */

void FUN_180101991(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  puVar4 = (uint *)FUN_180101861();
  lVar2 = DAT_180419160;
  if ((*puVar4 & 0xffff) == 0x802) {
    uVar7 = (ulonglong)(*puVar4 >> 0x10);
    uVar1 = *(undefined8 *)(DAT_180419160 + 0xda8 + uVar7);
    iVar3 = *(int *)(DAT_180419160 + 0x20f8);
    if (iVar3 == *(int *)(DAT_180419160 + 0x20fc)) {
      if (iVar3 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar3 / 2 + iVar3;
      }
      iVar8 = iVar3 + 1;
      if (iVar3 + 1 < iVar6) {
        iVar8 = iVar6;
      }
      lVar5 = FUN_1800fe7f8((longlong)iVar8 * 0xc);
      if (*(longlong *)(lVar2 + 0x2100) != 0) {
        FUN_1802a82f0(lVar5,*(longlong *)(lVar2 + 0x2100),(longlong)*(int *)(lVar2 + 0x20f8) * 0xc);
        FUN_1800fe8d4(*(undefined8 *)(lVar2 + 0x2100));
      }
      *(longlong *)(lVar2 + 0x2100) = lVar5;
      *(int *)(lVar2 + 0x20fc) = iVar8;
      iVar3 = *(int *)(lVar2 + 0x20f8);
    }
    else {
      lVar5 = *(longlong *)(DAT_180419160 + 0x2100);
    }
    *(undefined4 *)(lVar5 + (longlong)iVar3 * 0xc) = param_1;
    *(undefined8 *)(lVar5 + 4 + (longlong)iVar3 * 0xc) = uVar1;
    *(int *)(lVar2 + 0x20f8) = *(int *)(lVar2 + 0x20f8) + 1;
    *(undefined4 *)(lVar2 + 0xda8 + uVar7) = param_2;
    return;
  }
  FUN_180101698("Calling PushStyleVar() variant with wrong type!");
  return;
}

