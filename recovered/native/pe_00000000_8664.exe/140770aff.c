/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140770aff */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140770aff(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar10;
  undefined4 *puVar8;
  ulonglong uVar9;
  
  uVar6 = (int)&stack0xffffffffffffffe8 - 0xc;
  puVar8 = (undefined4 *)(ulonglong)uVar6;
  bVar1 = *(byte *)((longlong)puVar8 + 0x24);
  uVar7 = *(uint *)((longlong)puVar8 + 0x20);
  uVar10 = (ulonglong)uVar7;
  *(uint *)((longlong)puVar8 + 8) = _DAT_150af9817 ^ uVar6;
  if ((*(byte *)((ulonglong)*(uint *)((longlong)puVar8 + 0x1c) + 0x27b5) & 4) != 0) {
    *(ulonglong *)((longlong)puVar8 + -8) = (ulonglong)bVar1;
    *(undefined8 *)((longlong)puVar8 + -0x10) = *(undefined8 *)(uVar10 + 4);
    *(undefined8 *)((longlong)puVar8 + -0x18) = 0x1034cf6d;
    *(undefined8 *)((longlong)puVar8 + -0x20) = 0x140770b37;
    FUN_1407518b6();
    puVar8 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar8 + -0x18) + 0xc);
  }
  iVar2 = *(int *)(uVar10 + 0x430);
  if (iVar2 == 0) {
    *(undefined4 *)(uVar10 + 0x438) = 0;
  }
  else {
    uVar5 = 0;
    if (bVar1 == 0) {
      uVar5 = (ulonglong)*(uint *)(uVar10 + 0x438);
    }
    *(ulonglong *)((longlong)puVar8 + -8) = uVar5;
    *(undefined8 *)((longlong)puVar8 + -0x10) = 0x140770b58;
    FUN_1407735f9(iVar2,uVar10);
    puVar8 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar8 + -8) + 4);
  }
  *(undefined1 *)(uVar10 + 0xfc) = 0;
  *(byte *)(uVar10 + 0x409) = *(byte *)(uVar10 + 0x409) & 0xf8;
  *(undefined8 *)(puVar8 + -2) = *(undefined8 *)(uVar10 + 0x3c);
  *(undefined8 *)(puVar8 + -4) = 0x140770b84;
  FUN_1407737ba(puVar8,uVar7 + 0x60);
  uVar7 = (int)(puVar8 + -2) + 4;
  uVar9 = (ulonglong)uVar7;
  uVar3 = *puVar8;
  uVar4 = puVar8[1];
  *(undefined4 *)(uVar10 + 0x58) = uVar3;
  *(undefined4 *)(uVar10 + 0x5c) = uVar4;
  *(undefined4 *)(uVar10 + 0x60) = uVar3;
  *(undefined4 *)(uVar10 + 100) = uVar4;
  if (_DAT_150af98a1 == (*(uint *)(uVar9 + 8) ^ uVar7)) {
    FUN_140770426();
    return;
  }
  uVar6 = *(uint *)(uVar9 + 8);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(uVar9 - 8) = &UNK_140770bbb;
  FUN_1408802b0(uVar6 ^ uVar7);
}

