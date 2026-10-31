/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077d4d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14077d4d8(void)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint unaff_EBP;
  int iVar6;
  ulonglong uVar7;
  code *pcVar8;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  
  uVar1 = _DAT_150b1ac32;
  uVar7 = (ulonglong)_DAT_150b1ac32;
  uVar3 = *(int *)(uVar7 + 0x27b8) + -1 + (uint)(*(int *)(uVar7 + 0x27b8) == 0);
  uVar2 = (ulonglong)(_DAT_150b1ac32 + 0x27b8);
  uStack_28 = (ulonglong)*(uint *)(uVar7 + 4);
  if (*(char *)(uVar7 + 0x20) == '\0') {
    uStack_30 = 0x1034baaa;
    uStack_40 = 0x14077d522;
    uStack_38 = uVar2;
    FUN_140753872();
    puVar4 = (undefined1 *)(ulonglong)((int)&uStack_38 + 0xc);
  }
  else {
    uStack_30 = (ulonglong)(_DAT_150b1ac32 + 0x20);
    uStack_38 = 0x1034baa5;
    uStack_40 = uVar2;
    FUN_140753872();
    puVar4 = (undefined1 *)(ulonglong)((int)&uStack_40 + 0x10);
  }
  *(ulonglong *)(puVar4 + -8) = (ulonglong)unaff_EBP;
  *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + 0x10);
  *(undefined8 *)(puVar4 + -0x18) = 0x14077d531;
  FUN_1407538b6(uVar2);
  uVar2 = (ulonglong)*(uint *)(uVar7 + 0x27c0);
  if (*(uint *)(uVar7 + 0x27c0) == 0) {
    uVar2 = 0x1039d750;
  }
  *(ulonglong *)(puVar4 + -0x18) =
       (ulonglong)(*(int *)(uVar7 + 0x27b8) + -1 + (uint)(*(int *)(uVar7 + 0x27b8) == 0));
  *(ulonglong *)(puVar4 + -0x20) = (ulonglong)uVar3;
  puVar5 = puVar4 + -0x28;
  *(ulonglong *)(puVar4 + -0x28) = uVar2;
  *(undefined8 *)(puVar4 + -0x30) = 0x14077d55b;
  FUN_1407539aa(uVar1 + 0x27c4);
  uVar1 = *(uint *)(uVar7 + 0x27b4);
  iVar6 = *(int *)(uVar7 + 0x27c0);
  if (iVar6 == 0) {
    iVar6 = 0x1039d750;
  }
  uVar2 = (ulonglong)(iVar6 + uVar3);
  if ((uVar1 >> 0x14 & 1) != 0) {
    *(ulonglong *)(puVar4 + -0x30) = uVar2;
    *(undefined8 *)(puVar4 + -0x38) = 0x103344e9;
    *(undefined8 *)(puVar4 + -0x40) = 0x14077d57f;
    FUN_14077d5a3();
    puVar5 = (undefined1 *)(ulonglong)((int)(puVar4 + -0x38) + 8);
    uVar1 = *(uint *)(uVar7 + 0x27b4);
  }
  if ((uVar1 >> 0x15 & 1) != 0) {
    pcVar8 = (code *)(ulonglong)_DAT_150adb5f4;
    *(undefined8 *)(puVar5 + -8) = 0x1034ba9c;
    *(undefined8 *)(puVar5 + -0x10) = 0x14077d59b;
    (*pcVar8)();
    *(ulonglong *)(puVar5 + -0x10) = uVar2;
    *(undefined8 *)(puVar5 + -0x18) = 0x14077d59e;
    (*pcVar8)();
  }
  return;
}

