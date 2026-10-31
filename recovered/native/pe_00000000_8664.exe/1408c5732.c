/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c5732 */

void FUN_1408c5732(void)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong unaff_RBP;
  uint *puVar5;
  longlong in_FS_OFFSET;
  
  FUN_1408d05b0();
  uVar4 = *(undefined8 *)(ulonglong)*(uint *)(unaff_RBP + 8);
  FUN_1408b66a1();
  *(undefined4 *)(unaff_RBP + -4) = 0;
  puVar5 = (uint *)(ulonglong)*(uint *)(unaff_RBP + 0xc);
  uVar1 = *(undefined8 *)(puVar5 + 1);
  cVar2 = FUN_1408c56b5(uVar4);
  uVar4 = uVar1;
  if ((cVar2 != '\0') &&
     ((*(char *)(ulonglong)puVar5[2] != '\0' ||
      ((*(uint *)((ulonglong)*(uint *)(ulonglong)*puVar5 + 0xc) >> 1 & 1) != 0)))) {
    uVar4 = *(undefined8 *)(ulonglong)*puVar5;
    iVar3 = FUN_1408c55c4(uVar1);
    if (iVar3 == -1) {
      *(undefined4 *)(ulonglong)puVar5[3] = 0xffffffff;
    }
    else {
      *(int *)(ulonglong)puVar5[1] = *(int *)(ulonglong)puVar5[1] + 1;
    }
  }
  *(undefined4 *)(unaff_RBP + -4) = 0xfffffffe;
  FUN_1408c57b2(uVar4);
  *(undefined4 *)(in_FS_OFFSET + 0x1408c57aa) = *(undefined4 *)(unaff_RBP + -0x10);
  return;
}

