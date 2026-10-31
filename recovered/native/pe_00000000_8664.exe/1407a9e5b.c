/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a9e5b */

ulonglong FUN_1407a9e5b(ulonglong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  puVar7 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xc);
  puVar7[1] = param_2;
  uVar9 = param_1 & 0xffffffff;
  uVar10 = puVar7[9];
  uVar3 = *(uint *)(param_1 + 8);
  uVar6 = *(uint *)(param_1 + 0x10);
  iVar1 = ~uVar6 + *(int *)(uVar9 + 0x3c);
  if (iVar1 < (int)uVar10 && (uVar3 >> 0x16 & 1) == 0) {
    uVar5 = puVar7[8];
    *puVar7 = uVar6;
    *(ulonglong *)(puVar7 + -2) = (ulonglong)(iVar1 + uVar5);
    *(ulonglong *)(puVar7 + -4) = (ulonglong)(uVar10 + uVar5);
    *(ulonglong *)(puVar7 + -6) = (ulonglong)uVar5;
    puVar7[-8] = 0x407a9e9f;
    puVar7[-7] = 1;
    iVar1 = FUN_140752a35();
    puVar7 = (uint *)(ulonglong)((int)(puVar7 + -6) + 0xc);
    uVar10 = iVar1 - uVar5;
    uVar6 = *puVar7;
  }
  uVar11 = (ulonglong)uVar10;
  if (uVar10 != 0) {
    if (((uVar3 >> 0x16 & 1) == 0) || ((int)(uVar10 + uVar6) < *(int *)(uVar9 + 0x18))) {
      uVar3 = *(uint *)(uVar9 + 0x20);
    }
    else {
      *(ulonglong *)((longlong)puVar7 + -8) = uVar11;
      *(undefined8 *)((longlong)puVar7 + -0x10) = 0x100;
      *(undefined8 *)((longlong)puVar7 + -0x18) = 0x1407a9eca;
      uVar4 = FUN_140753b3a();
      uVar8 = (ulonglong)((int)(undefined1 *)((longlong)puVar7 + -0x10) + 8);
      *(undefined8 *)(uVar8 - 8) = uVar4;
      *(undefined8 *)(uVar8 - 0x10) = 0x20;
      *(ulonglong *)(uVar8 - 0x18) = uVar11;
      *(undefined8 *)(uVar8 - 0x20) = 0x1407a9ed6;
      iVar2 = FUN_14077dc6a();
      puVar7 = (uint *)(ulonglong)((int)(uVar8 - 0x18) + 0xc);
      uVar5 = iVar2 + uVar6;
      iVar1 = *(int *)(uVar9 + 0x1c);
      if ((int)(iVar2 + uVar6) < iVar1) {
        uVar3 = *(uint *)(uVar9 + 0x20);
      }
      else {
        if (iVar1 == 0) {
          uVar3 = 8;
        }
        else {
          uVar3 = iVar1 / 2 + iVar1;
        }
        *puVar7 = uVar5;
        if ((int)uVar3 <= (int)uVar5) {
          uVar3 = uVar5;
        }
        puVar7[2] = uVar3;
        *(ulonglong *)(puVar7 + -2) = (ulonglong)uVar3;
        puVar7[-4] = 0x407a9f18;
        puVar7[-3] = 1;
        uVar3 = FUN_1407520ca();
        puVar7 = (uint *)(ulonglong)((int)(puVar7 + -2) + 4);
        uVar5 = *(uint *)(uVar9 + 0x20);
        if (uVar5 != 0) {
          *(undefined8 *)(puVar7 + -2) = *(undefined8 *)(uVar9 + 0x18);
          *(ulonglong *)(puVar7 + -4) = (ulonglong)uVar5;
          *(ulonglong *)(puVar7 + -6) = (ulonglong)uVar3;
          puVar7[-8] = 0x407a9f2e;
          puVar7[-7] = 1;
          FUN_1408b31a0();
          *(undefined8 *)((ulonglong)((int)(puVar7 + -6) + 0xc) - 8) = *(undefined8 *)(uVar9 + 0x20)
          ;
                    /* WARNING: Subroutine does not return */
          *(undefined **)((ulonglong)((int)(puVar7 + -6) + 0xc) - 0x10) = &UNK_1407a9f39;
          FUN_14075219b();
        }
        *(uint *)(uVar9 + 0x20) = uVar3;
        *(uint *)(uVar9 + 0x1c) = puVar7[2];
        uVar5 = *puVar7;
      }
      *(uint *)(uVar9 + 0x18) = uVar5;
      *(uint *)(uVar9 + 0x14) = uVar3;
    }
    iVar1 = *(int *)((longlong)puVar7 + 4);
    if (uVar6 - iVar1 != 0) {
      *(ulonglong *)((longlong)puVar7 + -8) = (ulonglong)(uVar6 - iVar1);
      *(ulonglong *)((longlong)puVar7 + -0x10) = (ulonglong)(iVar1 + uVar3);
      *(ulonglong *)((longlong)puVar7 + -0x18) = (ulonglong)(iVar1 + uVar3 + uVar10);
      *(undefined8 *)((longlong)puVar7 + -0x20) = 0x1407a9f63;
      FUN_1408b31a0();
      iVar1 = *(int *)((longlong)puVar7 + -8);
      puVar7 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar7 + -0x18) + 0xc);
    }
    *(ulonglong *)((longlong)puVar7 + -8) = uVar11;
    *(undefined8 *)((longlong)puVar7 + -0x10) = *(undefined8 *)((longlong)puVar7 + 0x1c);
    *(ulonglong *)((longlong)puVar7 + -0x18) = (ulonglong)(uVar3 + iVar1);
    *(undefined8 *)((longlong)puVar7 + -0x20) = 0x1407a9f77;
    FUN_1408b31a0();
    *(undefined2 *)(uVar9 + 0x57) = 0x101;
    uVar10 = *(int *)(uVar9 + 0x10) + uVar10;
    *(uint *)(uVar9 + 0x10) = uVar10;
    *(undefined1 *)((ulonglong)*(uint *)(uVar9 + 0x20) + (ulonglong)uVar10) = 0;
  }
  return uVar11;
}

