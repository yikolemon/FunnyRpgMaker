/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075a58a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075a58a(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint unaff_EBX;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  bool bVar10;
  ulonglong uStack_30;
  undefined1 auStack_28 [8];
  
  puVar6 = (undefined4 *)auStack_28;
  uVar9 = (ulonglong)_DAT_150af7ce5;
  uVar1 = *(uint *)(uVar9 + 0x1528);
  uVar5 = (ulonglong)uVar1;
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    *(uint *)(uVar9 + 0x1554) = uVar1;
    *(uint *)(uVar9 + 0x1558) = (uint)(*(uint *)(uVar9 + 0x1e80) != uVar1) + *(int *)(uVar9 + 4);
    *(undefined1 *)(uVar9 + 0x155c) = *(undefined1 *)(uVar9 + 0x1538);
    *(bool *)(uVar9 + 0x155d) = *(uint *)(uVar9 + 0x152c) == uVar1;
    puVar6 = (undefined4 *)auStack_28;
    if (*(uint *)(uVar9 + 0x247c) == uVar1) {
      uStack_30 = uVar5;
      FUN_14079a987();
      puVar6 = (undefined4 *)(ulonglong)((int)&uStack_30 + 4);
      uVar5 = (ulonglong)*(uint *)(uVar9 + 0x1528);
    }
    if ((*(uint *)(uVar9 + 0x14dc) != 0) &&
       ((int)uVar5 == *(int *)((ulonglong)*(uint *)(uVar9 + 0x14dc) + 0xb4))) {
      if ((*(byte *)(uVar9 + 0x27b4) & 2) != 0) {
        *(undefined8 *)((longlong)puVar6 + -8) = 0x1034c8a7;
        *(undefined8 *)((longlong)puVar6 + -0x10) = 0x14075a612;
        FUN_1407518b6();
        puVar6 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar6 + -8) + 4);
      }
      *(undefined8 *)((longlong)puVar6 + -8) = 0x14075a61a;
      FUN_14075a741();
      uVar5 = (ulonglong)*(uint *)(uVar9 + 0x1528);
    }
  }
  uVar1 = puVar6[7];
  bVar10 = (uint)uVar5 != unaff_EBX;
  *(bool *)(uVar9 + 0x1534) = bVar10;
  if (bVar10) {
    if ((*(byte *)(uVar9 + 0x27b4) & 2) != 0) {
      if (*(uint *)(uVar9 + 0x154c) == 0) {
        *puVar6 = 0x10356101;
      }
      else {
        *puVar6 = *(undefined4 *)((ulonglong)*(uint *)(uVar9 + 0x154c) + 4);
      }
      if (uVar1 == 0) {
        *(undefined8 *)(puVar6 + -2) = 0x14;
        *(undefined8 *)(puVar6 + -4) = 0;
        *(undefined8 *)(puVar6 + -6) = 0x14075a688;
        uVar3 = FUN_140753b3a();
        uVar4 = 0x10356101;
        puVar8 = (undefined8 *)(ulonglong)((int)(puVar6 + -4) + 8);
      }
      else {
        *(undefined8 *)(puVar6 + -2) = *(undefined8 *)((ulonglong)uVar1 + 4);
        *(undefined8 *)(puVar6 + -4) = 0x14075a665;
        iVar2 = FUN_1408c85c0();
        uVar7 = (ulonglong)((int)(puVar6 + -2) + 4);
        *(ulonglong *)(uVar7 - 8) = (ulonglong)(0x14 - iVar2);
        *(undefined8 *)(uVar7 - 0x10) = 0;
        *(undefined8 *)(uVar7 - 0x18) = 0x14075a677;
        uVar3 = FUN_140753b3a();
        puVar8 = (undefined8 *)(ulonglong)((int)(uVar7 - 0x10) + 8);
        uVar4 = (ulonglong)*(uint *)((ulonglong)uVar1 + 4);
      }
      puVar8[-1] = *puVar8;
      puVar8[-2] = uVar5;
      puVar8[-3] = 0x10356101;
      puVar8[-4] = uVar3;
      puVar8[-5] = uVar4;
      puVar8[-6] = (ulonglong)unaff_EBX;
      puVar8[-7] = 0x103559e2;
      puVar8[-8] = 0x14075a6a6;
      FUN_1407518b6();
    }
    *(undefined4 *)(uVar9 + 0x1530) = 0;
    *(undefined2 *)(uVar9 + 0x1537) = 0;
    *(undefined1 *)(uVar9 + 0x153b) = 0xff;
    if (unaff_EBX != 0) {
      *(uint *)(uVar9 + 0x1568) = unaff_EBX;
      *(undefined4 *)(uVar9 + 0x156c) = 0;
    }
  }
  *(uint *)(uVar9 + 0x1528) = unaff_EBX;
  *(undefined2 *)(uVar9 + 0x1535) = 0;
  *(uint *)(uVar9 + 0x154c) = uVar1;
  *(undefined2 *)(uVar9 + 0x1539) = 0;
  *(undefined4 *)(uVar9 + 0x153c) = 0;
  if (unaff_EBX != 0) {
    *(uint *)(uVar9 + 0x152c) = unaff_EBX;
    if ((*(uint *)(uVar9 + 0x2058) == unaff_EBX) || (*(uint *)(uVar9 + 0x2204) == unaff_EBX)) {
      *(undefined4 *)(uVar9 + 0x1548) = *(undefined4 *)(uVar9 + 0x208c);
    }
    else {
      *(undefined4 *)(uVar9 + 0x1548) = 0;
    }
  }
  *(undefined4 *)(uVar9 + 0x1e30) = 0;
  *(undefined1 *)(uVar9 + 0x1e34) = 0;
  return;
}

