/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a49c3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a49c3(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  char cVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong auStack_30 [2];
  
  uVar12 = (ulonglong)_DAT_150b42119;
  *(undefined1 *)((ulonglong)*(uint *)(uVar12 + 0x14cc) + 0xfb) = 1;
  uVar2 = *(uint *)(uVar12 + 0x14cc);
  uVar11 = (ulonglong)uVar2;
  if (*(char *)(uVar11 + 0xfe) != '\0') {
    return;
  }
  auStack_30[1] = 0x1407a49f2;
  cVar5 = FUN_14076f185();
  if (((cVar5 == '\0') || (1 < *(uint *)(uVar12 + 0x20e8))) ||
     (uVar4 = (ulonglong)*(uint *)(uVar12 + 0x2048),
     (*(byte *)((ulonglong)*(uint *)(uVar12 + 0x2048) + 0xf) & 0x10) == 0)) {
    auStack_30[1] = 4;
    auStack_30[0] = uVar11;
    FUN_14076e761();
    puVar10 = (undefined1 *)(ulonglong)((int)auStack_30 + 8);
  }
  else {
    do {
      uVar6 = uVar4;
      uVar3 = *(uint *)(uVar6 + 0x3a0);
      if (uVar3 == 0) break;
      uVar4 = (ulonglong)uVar3;
    } while ((*(byte *)((ulonglong)uVar3 + 0xf) & 0x10) != 0);
    puVar10 = &stack0xffffffffffffffe0;
    if (((uVar3 == uVar2) && (puVar10 = &stack0xffffffffffffffe0, *(int *)(uVar6 + 500) == 0)) &&
       (puVar10 = &stack0xffffffffffffffe0, (*(byte *)(uVar12 + 0x20dc) & 0x80) == 0)) {
      auStack_30[1] = 0;
      auStack_30[0] = uVar11;
      FUN_14075b3b2();
      uVar8 = (ulonglong)((int)auStack_30 + 8);
      *(ulonglong *)(uVar8 - 8) = (ulonglong)(uVar2 + 0x3dc);
      *(undefined8 *)(uVar8 - 0x10) = 0;
      *(undefined8 *)(uVar8 - 0x18) = 1;
      *(undefined8 *)(uVar8 - 0x20) = *(undefined8 *)(uVar11 + 0x3c8);
      *(undefined8 *)(uVar8 - 0x28) = 0x1407a4b13;
      FUN_14076f01e();
      uVar9 = (ulonglong)((int)(uVar8 - 0x20) + 0x10);
      if (*(char *)(uVar12 + 0x2040) == '\x01') {
        *(undefined1 *)(uVar12 + 0x2040) = 0;
        *(undefined1 *)(uVar12 + 0x2098) = 2;
      }
      *(undefined2 *)(uVar12 + 0x2041) = 0x101;
      *(undefined8 *)(uVar9 - 8) = *(undefined8 *)(uVar12 + 0x20e0);
      *(undefined8 *)(uVar9 - 0x10) = *(undefined8 *)(uVar12 + 0x20dc);
      *(undefined8 *)(uVar9 - 0x18) = *(undefined8 *)(uVar12 + 0x20f0);
      *(undefined8 *)(uVar9 - 0x20) = *(undefined8 *)(uVar12 + 0x20e8);
      *(undefined8 *)(uVar9 - 0x28) = 0x1407a4b53;
      FUN_14076f20e();
      puVar10 = (undefined1 *)(ulonglong)((int)(uVar9 - 0x20) + 0x10);
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x1407a4a1f;
  FUN_140762458();
  *(undefined8 *)(puVar10 + -8) = 0x1407a4a24;
  FUN_14076b438();
  *(float *)(uVar11 + 0x1a8) = *(float *)(uVar11 + 0x144) - *(float *)(uVar11 + 0x50);
  *(undefined1 *)
   (((ulonglong)*(uint *)(uVar12 + 0x1fb8) - 4) +
   (ulonglong)(uint)(*(int *)(uVar12 + 0x1fb0) * 0x3c)) = 0;
  uVar1 = *(undefined4 *)(uVar11 + 0x164);
  puVar7 = (undefined4 *)(ulonglong)((int)puVar10 - 8);
  puVar7[1] = *(float *)(uVar11 + 0x15c) - *(float *)(uVar11 + 0xc4);
  *puVar7 = uVar1;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar7 + -2) = &UNK_1407a4a7f;
  FUN_140755a9a();
}

