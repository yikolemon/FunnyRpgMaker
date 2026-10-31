/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407669d1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407669d1(ulonglong param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  puVar8 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x14);
  *(undefined4 *)((longlong)puVar8 + 4) = param_2;
  uVar7 = _DAT_150b0413b;
  uVar11 = param_1 & 0xffffffff;
  uVar10 = (ulonglong)_DAT_150b0413b;
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x3c);
  if (*(char *)(uVar5 + 0x55) == '\x01') {
    *(undefined8 *)(uVar11 + 0x50) = *(undefined8 *)(uVar5 + 8);
    *(ulonglong *)((longlong)puVar8 + -8) = uVar11;
    *(undefined8 *)((longlong)puVar8 + -0x10) = 0x140766a08;
    FUN_1407663d8();
    puVar8 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar8 + -8) + 4);
LAB_140766a2b:
    bVar3 = false;
  }
  else {
    if (*(int *)(uVar5 + 0xc) == *(int *)(uVar11 + 0x54) &&
        *(int *)(uVar5 + 8) == *(int *)(uVar11 + 0x50)) goto LAB_140766a2b;
    *(undefined8 *)(uVar5 + 8) = *(undefined8 *)(uVar11 + 0x50);
    bVar3 = true;
  }
  uVar5 = (ulonglong)*(uint *)(uVar11 + 0x3c);
  if (*(char *)(uVar5 + 0x56) == '\x01') {
    *puVar8 = uVar7;
    uVar4 = *(undefined4 *)(uVar5 + 0x10);
    uVar2 = *(undefined4 *)(uVar5 + 0x14);
    *(undefined4 *)(uVar11 + 0x58) = uVar4;
    *(undefined4 *)(uVar11 + 0x5c) = uVar2;
    *(undefined4 *)(uVar11 + 0x60) = uVar4;
    *(undefined4 *)(uVar11 + 100) = uVar2;
    *(ulonglong *)(puVar8 + -2) = uVar11;
    puVar8[-4] = 0x40766a50;
    puVar8[-3] = 1;
    FUN_1407663d8();
    puVar8 = (uint *)(ulonglong)((int)(puVar8 + -2) + 4);
    uVar5 = (ulonglong)*(uint *)(uVar11 + 0x3c);
LAB_140766ab3:
    *(ulonglong *)(uVar5 + 0x20) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(uVar5 + 0x100) >> 0x20) +
                  (float)((ulonglong)*(undefined8 *)(uVar5 + 8) >> 0x20),
                  (float)*(undefined8 *)(uVar5 + 0x100) + (float)*(undefined8 *)(uVar5 + 8));
    *(ulonglong *)((longlong)puVar8 + -8) = (ulonglong)((int)uVar5 + 0x108);
    *(ulonglong *)((longlong)puVar8 + -0x10) = (ulonglong)((int)uVar5 + 0x100);
    puVar9 = (undefined1 *)((longlong)puVar8 + -0x18);
    *(undefined8 **)((longlong)puVar8 + -0x18) =
         (undefined8 *)((ulonglong)((longlong)puVar8 + 8) & 0xffffffff);
    *(undefined8 *)((longlong)puVar8 + -0x20) = 0x140766ae1;
    FUN_14077df16(uVar5);
    *(undefined8 *)(uVar5 + 0x28) = *(undefined8 *)((ulonglong)((longlong)puVar8 + 8) & 0xffffffff);
    uVar10 = (ulonglong)*(uint *)((longlong)puVar8 + -0x18);
    if (!bVar3) goto LAB_140766afb;
  }
  else {
    if (*(int *)(uVar5 + 0x14) == *(int *)(uVar11 + 0x5c) &&
        *(int *)(uVar5 + 0x10) == *(int *)(uVar11 + 0x58)) {
      *puVar8 = uVar7;
      goto LAB_140766ab3;
    }
    *(undefined8 *)(uVar5 + 0x10) = *(undefined8 *)(uVar11 + 0x58);
    uVar7 = *(uint *)(uVar11 + 0x3c);
    uVar5 = (ulonglong)uVar7;
    *(ulonglong *)(uVar5 + 0x20) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(uVar5 + 0x100) >> 0x20) +
                  (float)((ulonglong)*(undefined8 *)(uVar5 + 8) >> 0x20),
                  (float)*(undefined8 *)(uVar5 + 0x100) + (float)*(undefined8 *)(uVar5 + 8));
    *(ulonglong *)(puVar8 + -2) = (ulonglong)(uVar7 + 0x108);
    *(ulonglong *)(puVar8 + -4) = (ulonglong)(uVar7 + 0x100);
    *(undefined8 **)(puVar8 + -6) = (undefined8 *)((ulonglong)(puVar8 + 2) & 0xffffffff);
    puVar8[-8] = 0x40766aa3;
    puVar8[-7] = 1;
    FUN_14077df16(uVar5);
    *(undefined8 *)(uVar5 + 0x28) = *(undefined8 *)((ulonglong)(puVar8 + 2) & 0xffffffff);
  }
  puVar9 = (undefined1 *)((longlong)puVar8 + -0x18);
  uVar4 = *(undefined4 *)(uVar11 + 0x3c);
  *(undefined8 *)((longlong)puVar8 + -0x20) = 0x140766afb;
  FUN_1407812c2(uVar4);
LAB_140766afb:
  uVar6 = *(uint *)((ulonglong)*(uint *)(uVar11 + 0x3c) + 4) & 0xfffffae7;
  uVar1 = *(uint *)(uVar11 + 0xc);
  uVar12 = uVar1 >> 0xf & 0x400;
  uVar7 = uVar12 + uVar6;
  uVar6 = uVar12 + 0x10 + uVar6;
  uVar12 = uVar7;
  if (*(char *)(uVar10 + 0x72) != '\0') {
    uVar12 = uVar6;
  }
  if ((uVar1 & 0x16000000) != 0) {
    uVar12 = uVar6;
  }
  if ((uVar1 & 0x8000000) != 0) {
    uVar12 = uVar7;
  }
  uVar7 = uVar12;
  if (*(char *)(uVar10 + 0x73) != '\0') {
    uVar7 = uVar12 + 8;
  }
  if ((uVar1 & 0x16000000) != 0) {
    uVar7 = uVar12 + 8;
  }
  uVar6 = uVar7 | 0x60;
  if ((uVar1 & 0x16000000) == 0) {
    uVar6 = uVar7;
  }
  if ((uVar1 & 0x8000000) != 0) {
    uVar6 = uVar7;
  }
  *(uint *)((ulonglong)*(uint *)(uVar11 + 0x3c) + 4) =
       ~*(uint *)(uVar11 + 0x28) & (uVar6 | *(uint *)(uVar11 + 0x24));
  *(undefined4 *)((ulonglong)*(uint *)(uVar11 + 0x3c) + 0x48) = *(undefined4 *)(uVar11 + 0x38);
  if (*(int *)(uVar11 + 0x1c) == -1) {
    uVar5 = (ulonglong)*(uint *)(puVar9 + 4);
    if ((*(uint *)(puVar9 + 4) == 0 || (uVar1 & 0x6000000) == 0) ||
       ((*(char *)(uVar5 + 0x102) == '\x01' && (*(char *)(uVar5 + 0xfa) != '\x01')))) {
      uVar4 = 0;
      if (*(char *)(uVar10 + 0x74) == '\0') {
        *(undefined8 *)(puVar9 + -8) = 0x140766be0;
        uVar4 = FUN_140762c06();
      }
      *(undefined4 *)((ulonglong)*(uint *)(uVar11 + 0x3c) + 0x38) = uVar4;
      uVar4 = 0x11111111;
      if (*(char *)(uVar10 + 0x74) != '\0') {
        uVar4 = 0;
      }
    }
    else {
      uVar7 = *(uint *)(uVar5 + 0x3c);
      *(uint *)((ulonglong)*(uint *)(uVar11 + 0x3c) + 0x38) = uVar7;
      uVar4 = *(undefined4 *)(ulonglong)uVar7;
    }
    *(undefined4 *)((ulonglong)*(uint *)(uVar11 + 0x3c) + 0x34) = uVar4;
  }
  else {
    uVar7 = *(uint *)((ulonglong)*(uint *)(uVar11 + 0x3c) + 0x34);
    *(int *)((ulonglong)*(uint *)(uVar11 + 0x3c) + 0x34) = *(int *)(uVar11 + 0x1c);
    uVar6 = *(uint *)(uVar11 + 0x3c);
    uVar1 = *(uint *)((ulonglong)uVar6 + 0x34);
    if (uVar1 != uVar7) {
      *(ulonglong *)(puVar9 + -8) = (ulonglong)uVar1;
      *(undefined8 *)(puVar9 + -0x10) = 0x140766b92;
      uVar4 = FUN_140762bd3();
      puVar9 = (undefined1 *)(ulonglong)((int)(puVar9 + -8) + 4);
      *(undefined4 *)((ulonglong)uVar6 + 0x38) = uVar4;
    }
  }
  if (_DAT_150aef904 == (*(uint *)(puVar9 + 0x10) ^ (uint)puVar9)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar9 + -8) = FUN_140766c1b;
  FUN_1408802b0(*(uint *)(puVar9 + 0x10) ^ (uint)puVar9);
}

