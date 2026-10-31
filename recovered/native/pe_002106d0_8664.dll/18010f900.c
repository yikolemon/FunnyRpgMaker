/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010f900 */

void FUN_18010f900(void)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  lVar1 = DAT_180419160;
  lVar4 = *(longlong *)(DAT_180419160 + 0x1608);
  if (((longlong)*(int *)(DAT_180419160 + 0x15d8) < 2) && (*(char *)(DAT_180419160 + 2) == '\x01'))
  {
    FUN_180101698("Calling End() too many times!");
    return;
  }
  lVar6 = (longlong)*(int *)(DAT_180419160 + 0x15d8) * 0x78 + *(longlong *)(DAT_180419160 + 0x15e0);
  uVar2 = *(uint *)(lVar4 + 0x14);
  if (((uVar2 >> 0x1a & 1) != 0) && (*(int *)(DAT_180419160 + 0x1574) != *(int *)(lVar4 + 0x10))) {
    FUN_180101698("Must call EndPopup() and not End()!");
    uVar2 = *(uint *)(lVar4 + 0x14);
  }
  if ((((uVar2 & 0x1800000) == 0x1000000) && ((*(byte *)(lVar4 + 0x495) & 1) == 0)) &&
     (*(int *)(lVar1 + 0x1570) != *(int *)(lVar4 + 0x10))) {
    FUN_180101698("Must call EndChild() and not End()!");
  }
  if (*(longlong *)(lVar4 + 0x208) != 0) {
    FUN_18016f201();
  }
  if (((*(byte *)(lVar4 + 0x16) & 0x80) == 0) && (*(char *)(lVar4 + 0x10f) == '\0')) {
    FUN_18010f0ef();
  }
  FUN_180116028();
  if ((*(char *)(lVar6 + -10) == '\x01') && (*(longlong *)(lVar4 + 0x418) == lVar4)) {
    FUN_180116073();
  }
  if (*(char *)(lVar4 + 0x10f) == '\x01') {
    *(longlong *)(lVar4 + 800) = lVar4 + 0x328;
  }
  if (*(longlong *)(lVar1 + 0x2a48) == lVar4) {
    FUN_1801160c4();
  }
  if (*(char *)(lVar4 + 0x199) == '\x01') {
    FUN_180116199();
  }
  if (((*(longlong *)(lVar4 + 0x4c0) != 0) && ((*(byte *)(lVar4 + 0x495) & 4) != 0)) &&
     (lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x4c0) + 0x90), lVar5 != 0)) {
    *(ulonglong *)(lVar5 + 0x170) =
         CONCAT44(((float)((ulonglong)*(undefined8 *)(lVar4 + 0x170) >> 0x20) +
                  (float)((ulonglong)*(undefined8 *)(lVar4 + 0x90) >> 0x20)) -
                  (float)((ulonglong)*(undefined8 *)(lVar5 + 0x90) >> 0x20),
                  ((float)*(undefined8 *)(lVar4 + 0x170) + (float)*(undefined8 *)(lVar4 + 0x90)) -
                  (float)*(undefined8 *)(lVar5 + 0x90));
  }
  puVar7 = (undefined8 *)(lVar6 + -0x70);
  puVar8 = (undefined8 *)(lVar1 + 0x1fe0);
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar2 = *(uint *)(lVar4 + 0x14);
  if ((uVar2 >> 0x1c & 1) != 0) {
    *(int *)(lVar1 + 0x27d4) = *(int *)(lVar1 + 0x27d4) + -1;
    uVar2 = *(uint *)(lVar4 + 0x14);
  }
  if ((uVar2 >> 0x1a & 1) != 0) {
    *(int *)(lVar1 + 0x2158) = *(int *)(lVar1 + 0x2158) + -1;
  }
  if (*(char *)(lVar1 + 0xb0) == '\x01') {
    FUN_1801161e6(lVar6 + -0x20);
  }
  lVar4 = (longlong)*(int *)(lVar1 + 0x15d8) + -1;
  iVar3 = (int)lVar4;
  *(int *)(lVar1 + 0x15d8) = iVar3;
  if (iVar3 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(*(longlong *)(lVar1 + 0x15e0) + -0x78 + lVar4 * 0x78);
  }
  uVar9 = FUN_1801130e7(uVar9);
  if (*(longlong *)(lVar1 + 0x1608) != 0) {
    FUN_18010fcde(uVar9,*(undefined8 *)(*(longlong *)(lVar1 + 0x1608) + 0x48));
    return;
  }
  return;
}

