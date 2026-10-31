/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e88ca */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e88ca(void)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  
  puVar5 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x14);
  uVar10 = *(uint *)(puVar5 + 0x30);
  uVar9 = (ulonglong)*(uint *)(puVar5 + 0x2c);
  uVar1 = *(ushort *)(uVar9 + 0x26);
  *(ulonglong *)(puVar5 + 8) = _DAT_150ae9cf0 & 0xffffffffffff0000 | (ulonglong)uVar1;
  puVar6 = puVar5;
  if (uVar1 == 0) {
    uVar4 = 0;
    puVar7 = puVar5;
    do {
      uVar1 = *(ushort *)(puVar7 + uVar4 + 8);
      puVar6 = puVar7;
      if (uVar1 != 0) {
        puVar6 = puVar7 + -8;
        *(ulonglong *)(puVar7 + -8) = (ulonglong)uVar1;
        *(undefined8 *)(puVar7 + -0x10) = 0x1407e8917;
        cVar2 = FUN_1407e89a0(uVar9);
        if (cVar2 != '\0') {
          *(ushort *)(uVar9 + 0x26) = uVar1;
          puVar6 = puVar7 + -8;
          break;
        }
      }
      uVar3 = (int)uVar4 + 2;
      uVar4 = (ulonglong)uVar3;
      puVar7 = puVar6;
    } while (uVar3 != 8);
  }
  *(undefined2 *)(puVar6 + 2) = *(undefined2 *)((ulonglong)uVar10 + 0x36);
  *(undefined4 *)(puVar6 + 4) = 0x852026;
  if (*(short *)(uVar9 + 0x24) == 0) {
    uVar4 = 0;
    puVar7 = puVar6;
    do {
      uVar1 = *(ushort *)(puVar7 + uVar4 + 2);
      puVar8 = puVar7;
      if (uVar1 != 0) {
        puVar8 = puVar7 + -8;
        puVar6 = puVar7 + -8;
        *(ulonglong *)(puVar7 + -8) = (ulonglong)uVar1;
        *(undefined8 *)(puVar7 + -0x10) = 0x1407e8970;
        cVar2 = FUN_1407e89a0(uVar9);
        if (cVar2 != '\0') {
          *(ushort *)(uVar9 + 0x24) = uVar1;
          goto LAB_1407e8941;
        }
      }
      uVar10 = (int)uVar4 + 2;
      uVar4 = (ulonglong)uVar10;
      puVar7 = puVar8;
    } while (uVar10 != 6);
    puVar6 = puVar8;
    if (*(short *)(uVar9 + 0x24) == 0) {
      *(undefined2 *)(uVar9 + 0x24) = 0x85;
      *(undefined1 *)(uVar9 + 0x29) = 1;
    }
  }
LAB_1407e8941:
  if (_DAT_150b7164d != (*(uint *)(puVar6 + 0x10) ^ (uint)puVar6)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(puVar6 + -8) = FUN_1407e89a0;
    FUN_1408802b0(*(uint *)(puVar6 + 0x10) ^ (uint)puVar6);
  }
  return;
}

