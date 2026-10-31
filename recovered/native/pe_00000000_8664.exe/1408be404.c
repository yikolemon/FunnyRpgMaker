/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408be404 */

undefined8 FUN_1408be404(ulonglong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  param_1 = param_1 & 0xffffffff;
  uVar5 = *(uint *)(param_1 + 8);
  cVar1 = *(char *)(ulonglong)uVar5;
  if ((byte)(cVar1 - 0x30U) < 10) {
    uVar3 = (int)cVar1 - 0x30;
  }
  else if ((byte)(cVar1 + 0x9fU) < 0x1a) {
    uVar3 = (int)cVar1 - 0x57;
  }
  else {
    if (0x19 < (byte)(cVar1 + 0xbfU)) {
      return 1;
    }
    uVar3 = (int)cVar1 - 0x37;
  }
  if (uVar3 < 10) {
    *(undefined4 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 4) = 0;
    iVar4 = FUN_1408c8a22();
    if ((iVar4 == 0 && uVar5 == 0) ||
       (iVar2 = *(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 4),
       iVar2 == *(int *)(param_1 + 8))) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined2 *)(param_1 + 0x14) = 0;
      *(undefined1 *)(param_1 + 0x16) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined1 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0x16;
      return 0;
    }
    *(int *)(param_1 + 0x18) = iVar4;
    *(uint *)(param_1 + 0x1c) = uVar5;
    *(int *)(param_1 + 8) = iVar2;
  }
  return 1;
}

