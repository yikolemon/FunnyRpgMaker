/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010ad44 */

void FUN_1010ad44(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar2 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  if ((*(int *)(DAT_1039d74c + 0x14a8) < 2) && (*(char *)(DAT_1039d74c + 2) == '\x01')) {
    FUN_100fcef5("Calling End() too many times!");
  }
  else {
    iVar5 = *(int *)(DAT_1039d74c + 0x14a8) * 0x70 + *(int *)(DAT_1039d74c + 0x14b0);
    uVar3 = *(uint *)(iVar1 + 0xc);
    if (((uVar3 >> 0x1a & 1) != 0) && (*(int *)(DAT_1039d74c + 0x145c) != *(int *)(iVar1 + 8))) {
      FUN_100fcef5("Must call EndPopup() and not End()!");
      uVar3 = *(uint *)(iVar1 + 0xc);
    }
    if ((((uVar3 & 0x1800000) == 0x1000000) && ((*(byte *)(iVar1 + 0x409) & 1) == 0)) &&
       (*(int *)(iVar2 + 0x1458) != *(int *)(iVar1 + 8))) {
      FUN_100fcef5("Must call EndChild() and not End()!");
    }
    if (*(int *)(iVar1 + 0x1e8) != 0) {
      FUN_10169f56();
    }
    if (((*(byte *)(iVar1 + 0xe) & 0x80) == 0) && (*(char *)(iVar1 + 0xff) == '\0')) {
      FUN_1010a588();
    }
    FUN_101113ef();
    if ((*(char *)(iVar5 + -6) == '\x01') && (*(int *)(iVar1 + 0x3a8) == iVar1)) {
      FUN_10111436();
    }
    if (*(char *)(iVar1 + 0xff) == '\x01') {
      *(int *)(iVar1 + 0x2e8) = iVar1 + 0x2f0;
    }
    if (*(int *)(iVar2 + 0x2750) == iVar1) {
      FUN_1011147d();
    }
    if (*(char *)(iVar1 + 0x185) == '\x01') {
      FUN_10111542();
    }
    if (((*(int *)(iVar1 + 0x430) != 0) && ((*(byte *)(iVar1 + 0x409) & 4) != 0)) &&
       (iVar4 = *(int *)(*(int *)(iVar1 + 0x430) + 0x78), iVar4 != 0)) {
      *(ulonglong *)(iVar4 + 0x15c) =
           CONCAT44(((float)((ulonglong)*(undefined8 *)(iVar1 + 0x15c) >> 0x20) +
                    (float)((ulonglong)*(undefined8 *)(iVar1 + 0x80) >> 0x20)) -
                    (float)((ulonglong)*(undefined8 *)(iVar4 + 0x80) >> 0x20),
                    ((float)*(undefined8 *)(iVar1 + 0x15c) + (float)*(undefined8 *)(iVar1 + 0x80)) -
                    (float)*(undefined8 *)(iVar4 + 0x80));
    }
    puVar6 = (undefined4 *)(iVar5 + -0x6c);
    puVar7 = (undefined4 *)(iVar2 + 0x1e80);
    for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    uVar3 = *(uint *)(iVar1 + 0xc);
    if ((uVar3 >> 0x1c & 1) != 0) {
      *(int *)(iVar2 + 0x2558) = *(int *)(iVar2 + 0x2558) + -1;
      uVar3 = *(uint *)(iVar1 + 0xc);
    }
    if ((uVar3 >> 0x1a & 1) != 0) {
      *(int *)(iVar2 + 0x1fc8) = *(int *)(iVar2 + 0x1fc8) + -1;
    }
    if (*(char *)(iVar2 + 0x9c) == '\x01') {
      FUN_1011158d(iVar5 + -0x1c);
    }
    *(int *)(iVar2 + 0x14a8) = *(int *)(iVar2 + 0x14a8) + -1;
    FUN_1010e3db();
    if (*(int *)(iVar2 + 0x14cc) != 0) {
      FUN_1010b0a7();
    }
  }
  return;
}

