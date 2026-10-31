/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c70b8 */

undefined8 FUN_1408c70b8(void)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar4 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x20);
  if ((*(int *)(uVar2 + 0xc) != 0) && (*(int *)(uVar2 + 0x10) != 0)) {
    iVar1 = *(int *)(uVar2 + 0x14);
    if (iVar1 != 0) {
      *(int *)(uVar2 - 8) = iVar1;
      *(int *)(uVar2 - 0x20) = (int)&stack0xfffffffffffffff8 + 0x14;
      *(undefined4 *)(uVar2 - 0x1c) = *(undefined4 *)(uVar2 + 0x18);
      *(int *)(uVar2 - 0x18) = (int)&stack0xfffffffffffffff8 + 8;
      *(int *)(uVar2 - 0x14) = (int)&stack0xfffffffffffffff8 + 0xc;
      *(int *)(uVar2 - 0x10) = (int)&stack0xfffffffffffffff8 + 0x10;
      *(ulonglong *)(uVar4 - 8) = (ulonglong)((int)&stack0xfffffffffffffff8 - 8);
      *(int *)(uVar2 - 0xc) = iVar1;
      *(ulonglong *)(uVar4 - 0x10) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x20);
      *(ulonglong *)(uVar4 - 0x18) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0xc);
      *(undefined8 *)(uVar4 - 0x20) = 0x1408c712d;
      uVar3 = FUN_1408c717b((int)&stack0xfffffffffffffff8 + -1);
      return uVar3;
    }
    uVar2 = (ulonglong)*(uint *)(uVar2 + 0x18);
    *(ulonglong *)(uVar4 - 8) = uVar2;
    *(undefined1 *)(uVar2 + 0x1c) = 1;
    *(undefined4 *)(uVar2 + 0x18) = 0x16;
    *(undefined8 *)(uVar4 - 0x10) = 0;
    *(undefined8 *)(uVar4 - 0x18) = 0;
    *(undefined8 *)(uVar4 - 0x20) = 0;
    *(undefined8 *)(uVar4 - 0x28) = 0;
    *(undefined8 *)(uVar4 - 0x30) = 0;
    *(undefined8 *)(uVar4 - 0x38) = 0x1408c70ee;
    FUN_1408cbf04();
  }
  return 0;
}

