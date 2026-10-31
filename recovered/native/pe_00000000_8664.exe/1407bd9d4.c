/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd9d4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bd9d4(void)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  undefined8 in_RAX;
  int iVar4;
  uint uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte unaff_BPL;
  longlong unaff_RSI;
  uint uVar10;
  undefined8 uStack_28;
  
  puVar8 = &uStack_28;
  puVar9 = &uStack_28;
  puVar7 = &uStack_28;
  iVar4 = (int)unaff_RBX;
  *(char *)(ulonglong)_DAT_2308b08b1039d74c =
       *(char *)(ulonglong)_DAT_2308b08b1039d74c + (char)_DAT_2308b08b1039d74c;
  bVar2 = (*(byte *)(unaff_RSI + 7) & 4) >> 2 & unaff_BPL;
  uStack_28._4_4_ = (undefined4)((ulonglong)in_RAX >> 0x20);
  uStack_28._0_4_ = CONCAT13(bVar2,(int3)in_RAX);
  if (bVar2 == 1) {
    if (*(int *)(unaff_RSI + 0x40) < 1) {
      sVar3 = 0;
      uVar1 = *(uint *)(unaff_RSI + 0x10);
      goto code_r0x0001407bda3b;
    }
    sVar3 = 0;
    do {
      *(ulonglong *)((longlong)puVar7 + -8) =
           (ulonglong)(uint)(int)*(short *)((ulonglong)*(uint *)(unaff_RSI + 0x10) + 0x5e);
      *(ulonglong *)((longlong)puVar7 + -0x10) = (ulonglong)(uint)(int)sVar3;
      *(undefined8 *)((longlong)puVar7 + -0x18) = 0x1407bda1e;
      sVar3 = FUN_1407bdab7();
      puVar7 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar7 + -0x10) + 8);
    } while (0 < *(int *)(unaff_RSI + 0x40));
    iVar4 = *(int *)((longlong)puVar7 + 0x18);
    puVar8 = puVar7;
  }
  else {
    sVar3 = 0;
  }
  uVar1 = *(uint *)(unaff_RSI + 0x10);
  puVar9 = puVar8;
code_r0x0001407bda3b:
  uVar5 = iVar4 * 0x74;
  uVar10 = uVar1 + uVar5;
  uVar6 = (ulonglong)
          CONCAT11((char)((ulonglong)unaff_RBX >> 0x20),
                   *(undefined1 *)((ulonglong)uVar1 + 0x71 + (ulonglong)uVar5)) & 0xffffffffffff03fc
  ;
  bVar2 = (byte)(uVar6 >> 8);
  *(byte *)((ulonglong)uVar1 + 0x71 + (ulonglong)uVar5) = (byte)uVar6 | bVar2;
  if (bVar2 != 0) {
    if ((*(byte *)((longlong)puVar9 + 3) & *(short *)((ulonglong)uVar10 + 0x5e) != -1) == 0) {
      *(short *)((ulonglong)uVar10 + 0x5e) = sVar3;
    }
    iVar4 = *(int *)(unaff_RSI + 0x40);
    while (0 < iVar4) {
      uVar1 = *(uint *)(unaff_RSI + 0x10);
      if (uVar1 != uVar10 && *(char *)((longlong)puVar9 + 3) == '\0') {
        *(undefined2 *)((ulonglong)uVar1 + 0x5e) = 0xffff;
      }
      *(ulonglong *)((longlong)puVar9 + -8) = (ulonglong)uVar1;
      *(longlong *)((longlong)puVar9 + -0x10) = unaff_RSI;
      *(undefined8 *)((longlong)puVar9 + -0x18) = 0x1407bda95;
      FUN_1407bd947();
      puVar9 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar9 + -0x10) + 8);
      iVar4 = *(int *)(unaff_RSI + 0x40);
    }
    *(undefined1 *)(unaff_RSI + 0x1f5) = 1;
    *(undefined1 *)(unaff_RSI + 0x1f0) = 1;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

