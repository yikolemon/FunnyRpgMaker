/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d8cd0 */

/* WARNING: Removing unreachable block (ram,0x0001408d8cef) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408d8cd0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 unaff_RSI;
  
  iVar1 = _DAT_10325e54;
  uVar8 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar5 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x20);
  do {
  } while (_DAT_10325e50 != *(int *)(uVar8 + 0xc));
  *(int *)(uVar8 - 0x1c) = _DAT_10325e54;
  if (iVar1 != 0) {
    *(undefined4 *)(uVar8 - 0x18) = *(undefined4 *)(uVar8 + 0x10);
    *(undefined4 *)(uVar8 - 0x14) = *(undefined4 *)(uVar8 + 0x14);
    *(undefined4 *)(uVar8 - 0x10) = *(undefined4 *)(uVar8 + 0x18);
    uVar2 = *(undefined4 *)(uVar8 + 0x1c);
    *(undefined8 *)(uVar5 - 8) = unaff_RSI;
    iVar1 = *(int *)(uVar8 + 8);
    *(undefined4 *)(uVar8 - 0xc) = uVar2;
    uVar2 = *(undefined4 *)(uVar8 + 0x20);
    *(undefined8 *)(uVar5 - 0x10) = 0xffff;
    *(undefined8 *)(uVar5 - 0x18) = *(undefined8 *)(uVar8 + 0x28);
    *(undefined4 *)(uVar8 - 8) = uVar2;
    uVar2 = *(undefined4 *)(uVar8 + 0x24);
    *(int *)(uVar8 - 0x20) = iVar1;
    *(undefined4 *)(uVar8 - 4) = uVar2;
    *(undefined8 *)(uVar5 - 0x20) = 0x1408d8d78;
    FUN_1408d9120();
    *(ulonglong *)(uVar5 - 0x20) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x20);
    *(undefined8 *)(uVar5 - 0x28) = 0x1408d8d81;
    iVar3 = FUN_1408cf090();
    uVar7 = (ulonglong)((int)(uVar5 - 0x20) + 0xc);
    if (iVar3 == 0) {
      if (iVar1 == 1) {
        *(undefined8 *)(uVar7 - 8) = 0x1408d8daf;
        puVar4 = (undefined4 *)FUN_1408c0ecd();
        *puVar4 = 0x21;
      }
      else if ((iVar1 == 2) || (iVar1 == 3)) {
        *(undefined8 *)(uVar7 - 8) = 0x1408d8d9c;
        puVar4 = (undefined4 *)FUN_1408c0ecd();
        *puVar4 = 0x22;
        return;
      }
    }
    return;
  }
  *(undefined8 *)(uVar5 - 8) = 0xffff;
  *(undefined8 *)(uVar5 - 0x10) = *(undefined8 *)(uVar8 + 0x28);
  *(undefined8 *)(uVar5 - 0x18) = 0x1408d8d03;
  FUN_1408d9120();
  iVar1 = *(int *)(uVar8 + 8);
  uVar6 = (ulonglong)((int)(uVar5 - 0x10) + 8);
  if (iVar1 == 1) {
    *(undefined8 *)(uVar6 - 8) = 0x1408d8dc2;
    puVar4 = (undefined4 *)FUN_1408c0ecd();
    *puVar4 = 0x21;
  }
  else if ((iVar1 == 2) || (iVar1 == 3)) {
    *(undefined8 *)(uVar6 - 8) = 0x1408d8d25;
    puVar4 = (undefined4 *)FUN_1408c0ecd();
    *puVar4 = 0x22;
    return;
  }
  return;
}

