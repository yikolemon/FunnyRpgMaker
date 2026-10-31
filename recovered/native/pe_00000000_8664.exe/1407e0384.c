/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e0384 */

void FUN_1407e0384(longlong param_1)

{
  undefined4 uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  int unaff_retaddr;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)((ulonglong)unaff_RBX >> 0x20);
  iVar5 = (int)((ulonglong)unaff_RBP >> 0x20);
  if ((*(int *)(param_1 + 0x60) != iVar5 || *(int *)(param_1 + 100) != unaff_retaddr) ||
     (*(int *)(param_1 + 0x58) != iVar4)) {
    uVar1 = *(undefined4 *)(((ulonglong)&stack0xfffffffffffffff4 & 0xffffffff) + 4);
    *(int *)(param_1 + 0x58) = iVar4;
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 100) = unaff_retaddr;
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x98);
    uVar2 = (ulonglong)(uint)(*(int *)(param_1 + 0x90) << 4);
    *(int *)((uVar3 - 0x10) + uVar2) = iVar4;
    *(undefined4 *)((uVar3 - 0xc) + uVar2) = uVar1;
    *(int *)((uVar3 - 8) + uVar2) = iVar5;
    *(int *)((uVar3 - 4) + uVar2) = unaff_retaddr;
    FUN_1407dff16();
  }
  return;
}

