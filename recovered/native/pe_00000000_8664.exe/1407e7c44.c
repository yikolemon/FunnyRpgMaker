/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e7c44 */

ulonglong FUN_1407e7c44(ulonglong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  ulonglong unaff_RBX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uStack_20;
  
  puVar6 = &stack0xffffffffffffffe8;
  uVar10 = param_1 & 0xffffffff;
  if (*(int *)(param_1 + 0x290) == 0) {
    uStack_20 = uVar10;
    FUN_1407e71e3();
    puVar6 = (undefined1 *)(ulonglong)((int)&uStack_20 + 4);
  }
  *(undefined8 *)(puVar6 + -8) = 0;
  *(ulonglong *)(puVar6 + -0x10) = unaff_RBX >> 0x20;
  *(ulonglong *)(puVar6 + -0x18) = unaff_RBX & 0xffffffff;
  *(ulonglong *)(puVar6 + -0x20) = uVar10;
  *(undefined8 *)(puVar6 + -0x28) = 0x1407e7c6d;
  uVar4 = FUN_1407e7cbf();
  puVar7 = (undefined1 *)(ulonglong)((int)(puVar6 + -0x20) + 0x10);
  uVar11 = (ulonglong)uVar4;
  if (uVar4 != 0xffffffff) {
    puVar8 = puVar7;
    if (*(uint *)(puVar7 + 0x18) != 0) {
      *(ulonglong *)(puVar7 + -8) = (ulonglong)*(uint *)(puVar7 + 0x18);
      puVar8 = puVar7 + -0x10;
      *(ulonglong *)(puVar7 + -0x10) = uVar11;
      *(undefined8 *)(puVar7 + -0x18) = 0x1407e7c88;
      FUN_1407e7f58(uVar10);
    }
    if (*(char *)(uVar10 + 0x41) == '\x01') {
      *(ulonglong *)(puVar8 + -8) = uVar11;
      *(ulonglong *)(puVar8 + -0x10) = uVar10;
      *(undefined8 *)(puVar8 + -0x18) = 0x1407e7c95;
      puVar5 = (ushort *)FUN_1407e7fe2();
      uVar9 = (ulonglong)((int)(puVar8 + -0x10) + 8);
      uVar1 = puVar5[2];
      uVar2 = puVar5[1];
      uVar3 = *puVar5;
      *(ulonglong *)(uVar9 - 8) = (ulonglong)puVar5[3];
      *(ulonglong *)(uVar9 - 0x10) = (ulonglong)uVar1;
      *(ulonglong *)(uVar9 - 0x18) = (ulonglong)uVar2;
      *(ulonglong *)(uVar9 - 0x20) = (ulonglong)uVar3;
      *(undefined8 *)(uVar9 - 0x28) = *(undefined8 *)(uVar10 + 0x30);
      *(ulonglong *)(uVar9 - 0x30) = uVar10;
      *(undefined8 *)(uVar9 - 0x38) = 0x1407e7cb4;
      FUN_1407e6cea();
    }
  }
  return uVar11;
}

