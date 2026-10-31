/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c57be */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408c57be(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  int unaff_EBX;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong unaff_RBP;
  uint *puVar9;
  undefined8 *unaff_RDI;
  longlong in_FS_OFFSET;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x2c;
  puVar8 = &uStack_10;
  uStack_10 = 0x10382b58;
  FUN_1408d05b0();
  FUN_1408c1f00();
  *(int *)(unaff_RBP + -4) = 0;
  puVar9 = (uint *)(ulonglong)_DAT_150c6a52b;
  puVar7 = &uStack_10;
  uVar1 = _DAT_8b861c8d103a4d48;
  if (-1 < *(int *)(unaff_RBP + -4)) goto LAB_1408c57f6;
  for (; *(int *)(unaff_RBP + -0x2c) = (int)puVar9, (int)puVar9 != unaff_EBX;
      puVar9 = (uint *)(ulonglong)((int)puVar9 + 4)) {
    uVar1 = *puVar9;
    *(uint *)(unaff_RBP + -0x20) = uVar1;
    puVar7 = puVar8;
LAB_1408c57f6:
    *(undefined8 *)((longlong)puVar7 + -8) = *unaff_RDI;
    *(ulonglong *)((longlong)puVar7 + -0x10) = (ulonglong)uVar1;
    *(undefined8 *)((longlong)puVar7 + -0x18) = 0x1408c57fe;
    cVar6 = FUN_1408c56b5();
    puVar8 = puVar7;
    if (cVar6 != '\0') {
      uVar2 = *(undefined4 *)(unaff_RDI + 1);
      uVar3 = *(undefined4 *)((longlong)unaff_RDI + 4);
      uVar4 = *(undefined4 *)unaff_RDI;
      iVar5 = (int)unaff_RBP;
      *(int *)(unaff_RBP + -0x3c) = iVar5 + -0x20;
      *(undefined4 *)(unaff_RBP + -0x38) = uVar4;
      *(undefined4 *)(unaff_RBP + -0x34) = uVar3;
      *(undefined4 *)(unaff_RBP + -0x30) = uVar2;
      *(undefined4 *)(unaff_RBP + -0x24) = *(undefined4 *)(unaff_RBP + -0x20);
      *(undefined4 *)(unaff_RBP + -0x28) = *(undefined4 *)(unaff_RBP + -0x20);
      *(ulonglong *)((longlong)puVar7 + -8) = (ulonglong)(iVar5 - 0x24);
      *(ulonglong *)((longlong)puVar7 + -0x10) = (ulonglong)(iVar5 - 0x3c);
      puVar8 = (undefined8 *)((longlong)puVar7 + -0x18);
      *(ulonglong *)((longlong)puVar7 + -0x18) = (ulonglong)(iVar5 - 0x28);
      *(undefined8 *)((longlong)puVar7 + -0x20) = 0x1408c5838;
      FUN_1408c5732(iVar5 + -0x19);
      unaff_RDI = (undefined8 *)(ulonglong)*(uint *)(unaff_RBP + 0xc);
    }
  }
  *(undefined4 *)(unaff_RBP + -4) = 0xfffffffe;
  *(undefined8 *)((longlong)puVar8 + -8) = 0x1408c584c;
  FUN_1408c585e();
  *(undefined4 *)(in_FS_OFFSET + 0x1408c5856) = *(undefined4 *)(unaff_RBP + -0x10);
  return;
}

