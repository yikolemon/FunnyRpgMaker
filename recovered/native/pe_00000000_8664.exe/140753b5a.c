/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140753b5a */

void thunk_FUN_140753b60(ulonglong param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  puVar3 = &stack0xffffffffffffffe8;
  piVar4 = (int *)(param_1 & 0xffffffff);
  uVar2 = *(uint *)(param_1 + 0x2c);
  if (uVar2 != 0) {
    uVar5 = (ulonglong)(uint)piVar4[10];
    if ((*(byte *)(uVar5 + 0x27b4) & 0x20) != 0) {
      uStack_20 = *(undefined8 *)((ulonglong)*(uint *)(uVar5 + 0x14cc) + 4);
      uStack_28 = 0x10355b2b;
      FUN_1407518b6();
      puVar3 = (undefined1 *)(ulonglong)((int)&uStack_28 + 8);
    }
    if (((uint)piVar4[3] < 0x7fffffff) && (-1 < *piVar4)) {
      *(ulonglong *)(puVar3 + -8) = (ulonglong)(uint)piVar4[3];
      *(undefined8 *)(puVar3 + -0x10) = 0x140753ba5;
      FUN_140753f3e(piVar4);
    }
    *(undefined4 *)((ulonglong)uVar2 + 8) = *(undefined4 *)((ulonglong)uVar2 + 0x10);
    iVar1 = *(int *)(uVar5 + 0x22f8);
    *(int *)(uVar5 + 0x22f8) = iVar1 + -1;
    if (1 < iVar1) {
      uVar2 = (*(int *)(uVar5 + 0x2304) + iVar1 * 0x1c) - 0x38;
      *(uint *)((ulonglong)*(uint *)(ulonglong)uVar2 + 0x2c) = uVar2;
    }
    piVar4[0xb] = 0;
  }
  piVar4[1] = piVar4[3];
  *piVar4 = piVar4[3];
  piVar4[3] = -1;
  return;
}

