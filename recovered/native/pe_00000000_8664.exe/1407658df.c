/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407658df */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407658df(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  puVar11 = (undefined8 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xc);
  uVar2 = *(uint *)((longlong)puVar11 + 0x24);
  uVar3 = *(uint *)((longlong)puVar11 + 0x20);
  uVar14 = (ulonglong)uVar3;
  uVar15 = (ulonglong)_DAT_150b0304b;
  if ((*(char *)(uVar14 + 0x102) == '\x01') && (*(char *)(uVar14 + 0xfa) == '\0')) {
LAB_140765af2:
    if (_DAT_150aee7fe == (*(uint *)((longlong)puVar11 + 8) ^ (uint)puVar11)) {
      FUN_140774ad9(uVar14);
      return;
    }
    goto LAB_140765b36;
  }
  *(ulonglong *)((longlong)puVar11 + -8) = uVar14;
  *(undefined8 *)((longlong)puVar11 + -0x10) = 0x14076591b;
  cVar4 = FUN_1407658b3();
  puVar11 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar11 + -8) + 4);
  if (cVar4 == '\0') {
    uVar7 = *(uint *)(uVar14 + 0xc) >> 0x13 & 1;
    if (((*(byte *)(uVar15 + 0x1ed0) & 1) != 0) &&
       ((*(uint *)(uVar15 + 0x1ed4) & (int)*(char *)(uVar14 + 0x121)) != 0)) {
      uVar7 = uVar7 | *(byte *)(uVar15 + 0x1f14);
    }
    if (uVar7 == 0) {
      iVar6 = *(int *)(uVar14 + 0x438);
      goto LAB_140765975;
    }
LAB_1407659ef:
    *(undefined8 *)((longlong)puVar11 + -8) = 1;
    *(ulonglong *)((longlong)puVar11 + -0x10) = uVar14;
    *(ulonglong *)((longlong)puVar11 + -0x18) = uVar15;
    *(undefined8 *)((longlong)puVar11 + -0x20) = 0x1407659f8;
    FUN_140770aff();
    puVar11 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar11 + -0x18) + 0xc);
  }
  else {
    iVar6 = *(int *)(uVar14 + 0x438);
    if (iVar6 == 0) {
      *(ulonglong *)((longlong)puVar11 + -8) = uVar15;
      *(undefined8 *)((longlong)puVar11 + -0x10) = 0x140765932;
      iVar6 = FUN_14077340b();
      puVar11 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar11 + -8) + 4);
      *(int *)(uVar14 + 0x438) = iVar6;
    }
LAB_140765975:
    uVar7 = *(uint *)(uVar14 + 0x430);
    if (uVar7 == 0 && iVar6 != 0) {
      puVar11[-1] = 0x140765995;
      uVar7 = FUN_140774aef(uVar15);
      if (uVar7 != 0) goto LAB_14076599b;
    }
    else {
LAB_14076599b:
      uVar9 = (ulonglong)uVar7;
      if (*(int *)(uVar9 + 0x8c) < *(int *)(uVar15 + 4)) {
        do {
          uVar10 = uVar9;
          uVar2 = *(uint *)(uVar10 + 0x18);
          uVar9 = (ulonglong)uVar2;
        } while (uVar2 != 0);
        if (*(int *)(uVar10 + 0x8c) < *(int *)(uVar15 + 4)) goto LAB_1407659ef;
        *(byte *)(uVar14 + 0x409) = *(byte *)(uVar14 + 0x409) | 1;
      }
      else {
        puVar11[-1] = 0x1407659c7;
        FUN_140774bd5(uVar14);
        if (*(uint *)(uVar9 + 0x78) == 0) {
          if (*(int *)(uVar9 + 0x14) == 2) {
            *(byte *)(uVar14 + 0x409) = *(byte *)(uVar14 + 0x409) | 1;
          }
          if ((1 < *(int *)(uVar9 + 0x24)) && (*(char *)(uVar14 + 0x100) == '\x01'))
          goto LAB_140765af2;
        }
        else {
          *(undefined4 *)(uVar9 + 0x14) = 3;
          if (((*(byte *)(uVar9 + 0x10) & 1) == 0) &&
             (*(short *)(uVar14 + 0x10e) < *(short *)((ulonglong)*(uint *)(uVar9 + 0x78) + 0x10e)))
          goto LAB_1407659ef;
          *puVar11 = 0;
          puVar11[-1] = puVar11;
          puVar11[-2] = 0;
          puVar11[-3] = (ulonglong)(uVar7 + 0x34);
          puVar11[-4] = 0x140765a2d;
          FUN_140769c26();
          uVar12 = (ulonglong)((int)(puVar11 + -3) + 0xc);
          *(undefined8 *)(uVar12 - 8) = 0;
          *(ulonglong *)(uVar12 - 0x10) = (ulonglong)(uVar7 + 0x3c);
          *(undefined8 *)(uVar12 - 0x18) = 0x140765a3c;
          FUN_14075fbc6();
          puVar13 = (undefined1 *)(ulonglong)((int)(uVar12 - 0x10) + 8);
          *(undefined1 *)(uVar15 + 0x1f14) = 0;
          bVar1 = *(byte *)(uVar14 + 0x409);
          *(byte *)(uVar14 + 0x409) = bVar1 & 0xf8 | 3;
          puVar11 = (undefined8 *)puVar13;
          if ((*(byte *)(uVar9 + 0x10) & 1) == 0) {
            if (*(uint *)(uVar9 + 0x7c) == uVar3) {
              *(byte *)(uVar14 + 0x409) = bVar1 | 7;
            }
            uVar3 = *(uint *)(uVar14 + 0xc);
            *(uint *)(uVar14 + 0xc) = uVar3 | 0x1000002;
            *(byte *)(uVar14 + 0x14) = *(byte *)(uVar14 + 0x14) | 2;
            uVar7 = uVar3 | 0x1000003;
            if ((*(uint *)(uVar9 + 0x10) & 0x3000) == 0) {
              uVar7 = uVar3 & 0xfffffffe | 0x1000002;
            }
            *(uint *)(uVar14 + 0xc) = uVar7;
            if ((*(int *)(uVar9 + 0x30) != 0) && (*(char *)(uVar14 + 0xfa) == '\x01')) {
              *(undefined8 *)(puVar13 + -8) = 0x140765aaa;
              uVar5 = FUN_140774c0e(uVar14);
              *(undefined2 *)(uVar14 + 0x40a) = uVar5;
            }
            if ((*(byte *)(uVar9 + 0xac) & 0x40) == 0) {
              if ((uVar2 != 0) && (*(int *)(uVar9 + 0xa0) == *(int *)(uVar14 + 0xb8))) {
LAB_140765b14:
                *(undefined1 *)(ulonglong)uVar2 = 0;
              }
            }
            else if (uVar2 != 0) goto LAB_140765b14;
            uVar8 = *(undefined4 *)((ulonglong)*(uint *)(uVar14 + 0x430) + 0x78);
            *(undefined8 *)(puVar13 + -8) = 0;
            puVar11 = (undefined8 *)(puVar13 + -0x10);
            *(undefined8 *)(puVar13 + -0x10) = *(undefined8 *)(uVar14 + 4);
            *(undefined8 *)(puVar13 + -0x18) = 0x140765b2b;
            uVar8 = FUN_14075a0a4(uVar8);
            *(undefined4 *)(uVar14 + 0xbc) = uVar8;
          }
        }
      }
    }
  }
  if (_DAT_150aee707 == (*(uint *)((longlong)puVar11 + 8) ^ (uint)puVar11)) {
    return;
  }
LAB_140765b36:
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)puVar11 + -8) = FUN_140765b41;
  FUN_1408802b0(*(uint *)((longlong)puVar11 + 8) ^ (uint)puVar11);
}

