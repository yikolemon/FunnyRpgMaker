/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140754dc5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_140754dc5(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  int *piVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  piVar11 = (int *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0xc);
  uVar13 = (ulonglong)*(uint *)((longlong)piVar11 + 0x1c);
  uVar12 = (ulonglong)_DAT_150af252c;
  uVar2 = *(uint *)(uVar12 + 0x14cc);
  uVar9 = (ulonglong)uVar2;
  if (*(char *)(uVar12 + 0x9e) == '\x01') {
    if (*(char *)(uVar12 + 0x278c) == '\x01') {
      if ((*(byte *)(uVar12 + 0x27b4) & 1) == 0) {
        *(int *)(uVar12 + 0x27d4) = *(int *)(uVar12 + 0x27d4) + 1;
      }
      else {
        bVar1 = *(byte *)(uVar12 + 0x9d);
        *(ulonglong *)((longlong)piVar11 + -8) = (ulonglong)*(byte *)(uVar12 + 0x9f);
        *(undefined8 *)((longlong)piVar11 + -0x10) = 1;
        *(ulonglong *)((longlong)piVar11 + -0x18) = (ulonglong)bVar1;
        *(undefined8 *)((longlong)piVar11 + -0x20) = 0x10355786;
        *(undefined8 *)((longlong)piVar11 + -0x28) = 0x140754e25;
        FUN_1407518b6();
        piVar11 = (int *)(ulonglong)((int)(undefined1 *)((longlong)piVar11 + -0x20) + 0x10);
      }
    }
    if ((*(byte *)(uVar12 + 0x27b4) & 1) == 0) {
      *(int *)(uVar12 + 0x27d4) = *(int *)(uVar12 + 0x27d4) + 1;
    }
    else {
      if (uVar2 == 0) {
        uVar8 = 0x1033c442;
      }
      else {
        uVar8 = (ulonglong)*(uint *)(uVar9 + 4);
      }
      *(ulonglong *)((longlong)piVar11 + -8) = uVar13;
      *(ulonglong *)((longlong)piVar11 + -0x10) = uVar8;
      *(undefined8 *)((longlong)piVar11 + -0x18) = 0x1034ca0e;
      *(undefined8 *)((longlong)piVar11 + -0x20) = 0x140754e53;
      FUN_1407518b6();
      piVar11 = (int *)(ulonglong)((int)(undefined1 *)((longlong)piVar11 + -0x18) + 0xc);
    }
  }
  *(undefined1 *)(uVar12 + 0x278c) = 0;
  if (*(char *)(uVar12 + 0x9f) == '\x01') {
    if (*(char *)(uVar12 + 1) == '\x01') {
      *(undefined8 *)((longlong)piVar11 + -8) = 0x140754e79;
      cVar5 = FUN_14076c78c();
      if (cVar5 != '\0') {
        iVar7 = *(int *)(uVar12 + 0x2790);
        if (iVar7 < 0x14) {
          if (uVar2 == 0) {
            *(ulonglong *)((longlong)piVar11 + -8) = uVar13;
            *(undefined8 *)((longlong)piVar11 + -0x10) = 0x1033c442;
            *(undefined8 *)((longlong)piVar11 + -0x18) = 0x103344a2;
            *(undefined8 *)((longlong)piVar11 + -0x20) = 0x140754f02;
            FUN_140784f5c();
            piVar11 = (int *)(ulonglong)((int)(undefined1 *)((longlong)piVar11 + -0x18) + 0xc);
          }
          else {
            *(ulonglong *)((longlong)piVar11 + -8) = uVar13;
            *(undefined8 *)((longlong)piVar11 + -0x10) = *(undefined8 *)(uVar9 + 4);
            *(undefined8 *)((longlong)piVar11 + -0x18) = 0x103344a2;
            *(undefined8 *)((longlong)piVar11 + -0x20) = 0x140754e9e;
            FUN_140784f5c();
            piVar11 = (int *)(ulonglong)((int)(undefined1 *)((longlong)piVar11 + -0x18) + 0xc);
            if ((*(char *)(uVar9 + 0x102) != '\x01') || (*(char *)(uVar9 + 0xfa) == '\x01')) {
              *(undefined8 *)((longlong)piVar11 + -8) = *(undefined8 *)(uVar9 + 0x3c);
              *(undefined8 *)((longlong)piVar11 + -0x10) = 0x140754ebb;
              uVar6 = FUN_1407567d0();
              uVar10 = (int)(undefined1 *)((longlong)piVar11 + -8) + 4;
              *(ulonglong *)(ulonglong)uVar10 =
                   CONCAT44((float)((ulonglong)*(undefined8 *)(uVar9 + 0x58) >> 0x20) +
                            (float)((ulonglong)*(undefined8 *)(uVar9 + 0x50) >> 0x20),
                            (float)*(undefined8 *)(uVar9 + 0x58) +
                            (float)*(undefined8 *)(uVar9 + 0x50));
              iVar4 = iRam0000000150a0d969;
              iVar3 = iRam0000000150a0d965;
              iVar7 = iRam0000000150a0d961;
              piVar11 = (int *)(ulonglong)((int)(undefined1 *)((longlong)piVar11 + -8) - 0x14);
              piVar11[2] = _DAT_150a0d95d;
              piVar11[3] = iVar7;
              piVar11[4] = iVar3;
              piVar11[5] = iVar4;
              piVar11[1] = uVar10;
              *piVar11 = uVar2 + 0x50;
              piVar11[-2] = 0x40754ef0;
              piVar11[-1] = 1;
              FUN_1407e3632(uVar6);
            }
          }
          iVar7 = *(int *)(uVar12 + 0x2790);
        }
        if (iVar7 == 0x14) {
          *(undefined8 *)((longlong)piVar11 + -8) = 0x10347be9;
          *(undefined8 *)((longlong)piVar11 + -0x10) = 0x140754f1a;
          FUN_140784f5c();
          piVar11 = (int *)(ulonglong)((int)(undefined1 *)((longlong)piVar11 + -8) + 4);
        }
        *(undefined8 *)((longlong)piVar11 + -8) = 0x140754f22;
        thunk_FUN_140762c14();
      }
    }
    *(int *)(uVar12 + 0x2790) = *(int *)(uVar12 + 0x2790) + 1;
  }
  uVar2 = *(uint *)(uVar12 + 0x277c);
  if (uVar2 != 0) {
    *(ulonglong *)((longlong)piVar11 + -8) = uVar13;
    *(undefined8 *)((longlong)piVar11 + -0x10) = *(undefined8 *)(uVar12 + 0x2780);
    *(ulonglong *)((longlong)piVar11 + -0x18) = uVar12;
    *(undefined8 *)((longlong)piVar11 + -0x20) = 0x140754f3c;
    (*(code *)(ulonglong)uVar2)();
    piVar11 = (int *)(ulonglong)((int)(undefined1 *)((longlong)piVar11 + -0x18) + 0xc);
  }
  if (_DAT_150addc51 == (*(uint *)((longlong)piVar11 + 8) ^ (uint)piVar11)) {
    return *(undefined1 *)(uVar12 + 0x9d);
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)piVar11 + -8) = FUN_140754f67;
  FUN_1408802b0(*(uint *)((longlong)piVar11 + 8) ^ (uint)piVar11);
}

