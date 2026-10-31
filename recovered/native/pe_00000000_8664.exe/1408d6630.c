/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d6630 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1408d6630(void)

{
  uint uVar1;
  ulonglong *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong unaff_RBX;
  ulonglong *puVar8;
  ulonglong uVar9;
  uint unaff_EDI;
  ulonglong uVar10;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = (ulonglong)unaff_EDI;
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  uVar10 = (ulonglong)uVar1;
  uStack_20 = uVar10;
  iVar3 = FUN_1408d295f();
  uVar9 = uStack_20;
  uVar5 = _DAT_7501ff83103a5230;
  puVar2 = &uStack_18;
  if (iVar3 != -1) {
    *(char *)((ulonglong)_DAT_7501ff83103a5230 + 0x1000000) =
         *(char *)((ulonglong)_DAT_7501ff83103a5230 + 0x1000000) + -0x75;
    if ((*(byte *)((ulonglong)(uVar5 | *(uint *)(unaff_RBX + 0x1c7502ff)) + 0x60) & 1) != 0) {
      uStack_20 = 2;
      iVar3 = FUN_1408d295f(uVar9);
      iVar4 = FUN_1408d295f();
      puVar2 = &uStack_18;
      if (iVar4 == iVar3) goto LAB_1408d6646;
    }
    uVar9 = uStack_20;
    uStack_20 = uVar10;
    uVar6 = FUN_1408d295f(uVar9);
    uVar9 = uStack_20;
    puVar8 = &uStack_20;
    uStack_20 = uVar6;
    iVar3 = (*_DAT_150c3451c)(uVar9);
    puVar2 = &uStack_20;
    if (iVar3 == 0) {
      uVar5 = (*_DAT_150c34626)();
      uVar9 = (ulonglong)uVar5;
      goto LAB_1408d6698;
    }
  }
LAB_1408d6646:
  puVar8 = puVar2;
  uVar9 = 0;
LAB_1408d6698:
  *(ulonglong *)((longlong)puVar8 + -8) = uVar10;
  *(undefined8 *)((longlong)puVar8 + -0x10) = 0x1408d669e;
  FUN_1408d2adc();
  *(undefined1 *)
   ((ulonglong)*(uint *)((ulonglong)(uint)((int)uVar1 >> 6) * 4 + 0x103a5230) + 0x28 +
   (ulonglong)((uVar1 & 0x3f) * 0x38)) = 0;
  if ((int)uVar9 == 0) {
    uVar7 = 0;
  }
  else {
    *(undefined8 *)((longlong)puVar8 + -8) =
         *(undefined8 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0xc);
    *(ulonglong *)((longlong)puVar8 + -0x10) = uVar9;
    *(undefined8 *)((longlong)puVar8 + -0x18) = 0x1408d66c3;
    FUN_1408c0f79();
    uVar7 = 0xffffffff;
  }
  return uVar7;
}

