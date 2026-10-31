/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769fa9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140769fa9(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong unaff_R13;
  longlong unaff_R15;
  
  puVar9 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 8);
  uVar2 = *(uint *)((longlong)puVar9 + 0x1c);
  uVar8 = (ulonglong)uVar2;
  uVar11 = (ulonglong)_DAT_150b07706;
  *(uint *)(uVar11 + 0x204c) = uVar2;
  iVar7 = *(int *)(uVar11 + 0x206c);
  if (iVar7 < 0) {
    *(undefined8 *)((longlong)puVar9 + -8) = 0;
    *(undefined8 *)((longlong)puVar9 + -0x10) = 0x140769fd1;
    uVar1 = FUN_1407520ca();
    puVar9 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar9 + -8) + 4);
    uVar3 = *(uint *)(uVar11 + 0x2070);
    if (uVar3 != 0) {
      *(ulonglong *)((longlong)puVar9 + -8) = (ulonglong)(uint)(*(int *)(uVar11 + 0x2068) << 3);
      *(ulonglong *)((longlong)puVar9 + -0x10) = (ulonglong)uVar3;
      *(ulonglong *)((longlong)puVar9 + -0x18) = (ulonglong)uVar1;
      *(undefined8 *)((longlong)puVar9 + -0x20) = 0x140769ff1;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar9 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(uVar11 + 0x2070);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)puVar9 + -0x18) + 0xc) - 0x10) =
           &UNK_140769fff;
      FUN_14075219b();
    }
    *(uint *)(uVar11 + 0x2070) = uVar1;
    *(undefined4 *)(uVar11 + 0x206c) = 0;
    iVar7 = 0;
  }
  *(undefined4 *)(uVar11 + 0x2068) = 0;
  if (uVar2 != 0) {
    if (uVar2 == *(uint *)(uVar11 + 0x1e3c)) {
      uVar2 = *(uint *)(uVar11 + 0x1f98);
      if ((int)uVar2 < 1) {
        uVar8 = 0;
      }
      else {
        do {
          uVar3 = *(uint *)(uVar11 + 0x1fa0);
          if (*(int *)(((ulonglong)uVar3 - 0xc) + (ulonglong)uVar2 * 8) !=
              *(int *)((ulonglong)*(uint *)(uVar11 + 0x14cc) + 8)) break;
          iVar7 = (int)uVar8;
          if (iVar7 == *(int *)(uVar11 + 0x206c)) {
            if (iVar7 == 0) {
              uVar1 = 8;
            }
            else {
              uVar1 = ((int)(uVar8 >> 0x1f) + iVar7 >> 1) + iVar7;
            }
            if (iVar7 < param_3) {
              uVar8 = (ulonglong)uVar1;
            }
            *(ulonglong *)((longlong)puVar9 + -8) = (ulonglong)(uint)((int)uVar8 * 8);
            *(undefined8 *)((longlong)puVar9 + -0x10) = 0x14076a095;
            uVar5 = FUN_1407520ca();
            puVar9 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar9 + -8) + 4);
            uVar1 = *(uint *)(uVar11 + 0x2070);
            if (uVar1 != 0) {
              *(ulonglong *)((longlong)puVar9 + -8) =
                   (ulonglong)(uint)(*(int *)(uVar11 + 0x2068) << 3);
              *(ulonglong *)((longlong)puVar9 + -0x10) = (ulonglong)uVar1;
              *(ulonglong *)((longlong)puVar9 + -0x18) = uVar5;
              *(int *)((longlong)puVar9 + -0xc) = (int)uVar5;
              *(undefined8 *)((longlong)puVar9 + -0x20) = 0x14076a0b7;
              FUN_1408b31a0();
              *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar9 + -0x18) + 0xc) - 8)
                   = *(undefined8 *)(uVar11 + 0x2070);
                    /* WARNING: Subroutine does not return */
              *(undefined **)
               ((ulonglong)((int)(undefined1 *)((longlong)puVar9 + -0x18) + 0xc) - 0x10) =
                   &UNK_14076a0c5;
              FUN_14075219b();
            }
            *(int *)(uVar11 + 0x2070) = (int)uVar5;
            *(int *)(uVar11 + 0x206c) = (int)uVar8;
            uVar8 = (ulonglong)*(uint *)(uVar11 + 0x2068);
          }
          else {
            uVar5 = (ulonglong)*(uint *)(uVar11 + 0x2070);
          }
          *(undefined8 *)(uVar5 + uVar8 * 8) =
               *(undefined8 *)(((ulonglong)uVar3 - 0x10) + (ulonglong)uVar2 * 8);
          uVar8 = (ulonglong)*(uint *)(uVar11 + 0x2068);
          *(uint *)(unaff_R15 + 0x2068) = *(uint *)(uVar11 + 0x2068);
        } while (1 < unaff_R13);
      }
    }
    else {
      if (uVar2 != *(uint *)((ulonglong)*(uint *)(uVar11 + 0x2048) + 0x3fc)) {
        return;
      }
      uVar4 = *(undefined4 *)((ulonglong)*(uint *)(uVar11 + 0x2048) + 8);
      if (iVar7 == 0) {
        *(undefined8 *)((longlong)puVar9 + -8) = 0x40;
        *(undefined8 *)((longlong)puVar9 + -0x10) = 0x14076a133;
        uVar1 = FUN_1407520ca();
        puVar9 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar9 + -8) + 4);
        uVar8 = (ulonglong)uVar1;
        uVar3 = *(uint *)(uVar11 + 0x2070);
        if (uVar3 != 0) {
          *(ulonglong *)((longlong)puVar9 + -8) = (ulonglong)(uint)(*(int *)(uVar11 + 0x2068) << 3);
          *(ulonglong *)((longlong)puVar9 + -0x10) = (ulonglong)uVar3;
          *(ulonglong *)((longlong)puVar9 + -0x18) = uVar8;
          *(undefined8 *)((longlong)puVar9 + -0x20) = 0x14076a153;
          FUN_1408b31a0();
          *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar9 + -0x18) + 0xc) - 8) =
               *(undefined8 *)(uVar11 + 0x2070);
                    /* WARNING: Subroutine does not return */
          *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)puVar9 + -0x18) + 0xc) - 0x10) =
               &UNK_14076a161;
          FUN_14075219b();
        }
        *(uint *)(uVar11 + 0x2070) = uVar1;
        *(undefined4 *)(uVar11 + 0x206c) = 8;
        uVar5 = (ulonglong)*(uint *)(uVar11 + 0x2068);
      }
      else {
        uVar8 = (ulonglong)*(uint *)(uVar11 + 0x2070);
        uVar5 = 0;
      }
      *(undefined4 *)(uVar8 + 4 + uVar5 * 8) = uVar4;
      *(uint *)(uVar8 + uVar5 * 8) = uVar2;
      uVar8 = (ulonglong)*(uint *)(uVar11 + 0x2068);
      *(uint *)(unaff_R15 + 0x2068) = *(uint *)(uVar11 + 0x2068);
    }
    uVar2 = *(uint *)((ulonglong)*(uint *)(uVar11 + 0x2048) + 0x3bc);
    while (uVar5 = (ulonglong)uVar2, uVar2 != 0) {
      uVar4 = *(undefined4 *)(uVar5 + 0x3fc);
      uVar6 = *(undefined4 *)(uVar5 + 8);
      iVar7 = (int)uVar8;
      if (iVar7 == *(int *)(uVar11 + 0x206c)) {
        *puVar9 = uVar4;
        puVar9[1] = uVar6;
        if (iVar7 == 0) {
          uVar2 = 8;
        }
        else {
          uVar2 = ((int)(uVar8 >> 0x1f) + iVar7 >> 1) + iVar7;
        }
        if (iVar7 < param_3) {
          uVar8 = (ulonglong)uVar2;
        }
        *(ulonglong *)(puVar9 + -2) = (ulonglong)(uint)((int)uVar8 * 8);
        *(undefined8 *)(puVar9 + -4) = 0x14076a1eb;
        uVar3 = FUN_1407520ca();
        puVar9 = (undefined4 *)(ulonglong)((int)(puVar9 + -2) + 4);
        uVar10 = (ulonglong)uVar3;
        uVar2 = *(uint *)(uVar11 + 0x2070);
        if (uVar2 != 0) {
          *(ulonglong *)(puVar9 + -2) = (ulonglong)(uint)(*(int *)(uVar11 + 0x2068) << 3);
          *(ulonglong *)(puVar9 + -4) = (ulonglong)uVar2;
          *(ulonglong *)(puVar9 + -6) = uVar10;
          *(undefined8 *)(puVar9 + -8) = 0x14076a20b;
          FUN_1408b31a0();
          *(undefined8 *)((ulonglong)((int)(puVar9 + -6) + 0xc) - 8) =
               *(undefined8 *)(uVar11 + 0x2070);
                    /* WARNING: Subroutine does not return */
          *(undefined **)((ulonglong)((int)(puVar9 + -6) + 0xc) - 0x10) = &UNK_14076a219;
          FUN_14075219b();
        }
        *(uint *)(uVar11 + 0x2070) = uVar3;
        *(int *)(uVar11 + 0x206c) = (int)uVar8;
        uVar8 = (ulonglong)*(uint *)(uVar11 + 0x2068);
        uVar4 = *puVar9;
        uVar6 = puVar9[1];
      }
      else {
        uVar10 = (ulonglong)*(uint *)(uVar11 + 0x2070);
      }
      *(undefined4 *)(uVar10 + 4 + uVar8 * 8) = uVar6;
      *(undefined4 *)(uVar10 + uVar8 * 8) = uVar4;
      uVar8 = (ulonglong)*(uint *)(uVar11 + 0x2068);
      *(uint *)(unaff_R15 + 0x2068) = *(uint *)(uVar11 + 0x2068);
      uVar2 = *(uint *)(uVar5 + 0x3bc);
    }
  }
  return;
}

