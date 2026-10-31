/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076c8d9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140762c14(void)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int *piVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 uVar13;
  
  uVar2 = _DAT_150b0036d;
  piVar8 = (int *)(ulonglong)((int)&stack0xffffffffffffffe0 - 8);
  uVar7 = (ulonglong)_DAT_150b0036d;
  uVar4 = *(uint *)(uVar7 + 0x14cc);
  uVar9 = (ulonglong)uVar4;
  if ((*(int *)(uVar7 + 0x14a8) < 2) && (*(char *)(uVar7 + 2) == '\x01')) {
    *piVar8 = 0x1034ac1c;
    piVar8[-2] = 0x40762c44;
    piVar8[-1] = 1;
    FUN_140754dc5();
  }
  else {
    uVar10 = *(int *)(uVar7 + 0x14a8) * 0x70 + *(int *)(uVar7 + 0x14b0);
    uVar3 = *(uint *)(uVar9 + 0xc);
    if (((uVar3 >> 0x1a & 1) != 0) && (*(int *)(uVar7 + 0x145c) != *(int *)(uVar9 + 8))) {
      *piVar8 = 0x1034b67a;
      piVar8[-2] = 0x40762c72;
      piVar8[-1] = 1;
      FUN_140754dc5();
      uVar3 = *(uint *)(uVar9 + 0xc);
    }
    if ((((uVar3 & 0x1800000) == 0x1000000) && ((*(byte *)(uVar9 + 0x409) & 1) == 0)) &&
       (*(int *)(uVar7 + 0x1458) != *(int *)(uVar9 + 8))) {
      *piVar8 = 0x1034b69e;
      piVar8[-2] = 0x40762ca1;
      piVar8[-1] = 1;
      FUN_140754dc5();
    }
    if (*(int *)(uVar9 + 0x1e8) != 0) {
      piVar8[-2] = 0x40762caf;
      piVar8[-1] = 1;
      FUN_1407c1e26();
    }
    if (((*(byte *)(uVar9 + 0xe) & 0x80) == 0) && (*(char *)(uVar9 + 0xff) == '\0')) {
      piVar8[-2] = 0x40762cc3;
      piVar8[-1] = 1;
      FUN_140762458();
    }
    piVar8[-2] = 0x40762cc8;
    piVar8[-1] = 1;
    FUN_1407692bf();
    if ((*(char *)((ulonglong)uVar10 - 6) == '\x01') && (*(uint *)(uVar9 + 0x3a8) == uVar4)) {
      piVar8[-2] = 0x40762cdb;
      piVar8[-1] = 1;
      FUN_140769306();
    }
    if (*(char *)(uVar9 + 0xff) == '\x01') {
      *(uint *)(uVar9 + 0x2e8) = uVar4 + 0x2f0;
    }
    if (*(uint *)(uVar7 + 0x2750) == uVar4) {
      piVar8[-2] = 0x40762cfd;
      piVar8[-1] = 1;
      FUN_14076934d();
    }
    if (*(char *)(uVar9 + 0x185) == '\x01') {
      piVar8[-2] = 0x40762d0b;
      piVar8[-1] = 1;
      FUN_140769412();
    }
    if (((*(uint *)(uVar9 + 0x430) != 0) && ((*(byte *)(uVar9 + 0x409) & 4) != 0)) &&
       (uVar4 = *(uint *)((ulonglong)*(uint *)(uVar9 + 0x430) + 0x78), uVar4 != 0)) {
      uVar1 = *(undefined8 *)((ulonglong)uVar4 + 0x80);
      *(ulonglong *)((ulonglong)uVar4 + 0x15c) =
           CONCAT44(((float)((ulonglong)*(undefined8 *)(uVar9 + 0x15c) >> 0x20) +
                    (float)((ulonglong)*(undefined8 *)(uVar9 + 0x80) >> 0x20)) -
                    (float)((ulonglong)uVar1 >> 0x20),
                    ((float)*(undefined8 *)(uVar9 + 0x15c) + (float)*(undefined8 *)(uVar9 + 0x80)) -
                    (float)uVar1);
    }
    puVar11 = (undefined4 *)(ulonglong)(uVar10 - 0x6c);
    puVar12 = (undefined4 *)(ulonglong)(uVar2 + 0x1e80);
    for (lVar6 = 0x14; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    uVar4 = *(uint *)(uVar9 + 0xc);
    if ((uVar4 >> 0x1c & 1) != 0) {
      *(int *)(uVar7 + 0x2558) = *(int *)(uVar7 + 0x2558) + -1;
      uVar4 = *(uint *)(uVar9 + 0xc);
    }
    if ((uVar4 >> 0x1a & 1) != 0) {
      *(int *)(uVar7 + 0x1fc8) = *(int *)(uVar7 + 0x1fc8) + -1;
    }
    uVar13 = false;
    if (*(char *)(uVar7 + 0x9c) == '\x01') {
      uVar13 = uVar10 - 0x1c == 0;
      *piVar8 = uVar10 - 0x1c;
      piVar8[-2] = 0x40762d8e;
      piVar8[-1] = 1;
      FUN_14076945d();
    }
    uVar4 = *(uint *)(uVar7 + 0x14a8);
    *(ulonglong *)(uVar7 + 0x14a8) = (ulonglong)uVar4;
    if ((bool)uVar13) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)
               (((ulonglong)*(uint *)(uVar7 + 0x14b0) - 0x70) + (ulonglong)(uVar4 * 0x70));
    }
    piVar8[-2] = 0x40762db3;
    piVar8[-1] = 1;
    FUN_1407662ab(uVar5);
    if (*(uint *)(uVar7 + 0x14cc) != 0) {
      piVar8[1] = *(int *)((ulonglong)*(uint *)(uVar7 + 0x14cc) + 0x3c);
      piVar8[-2] = 0x40762dc9;
      piVar8[-1] = 1;
      FUN_140762f77();
    }
  }
  return;
}

