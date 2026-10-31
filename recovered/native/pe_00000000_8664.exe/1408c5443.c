/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c5443 */

undefined4 FUN_1408c5443(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint unaff_EDI;
  ulonglong uStack_30;
  ulonglong uStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = (ulonglong)unaff_EDI;
  uVar6 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar7 = (ulonglong)*(uint *)(uVar6 + 8);
  if (*(uint *)(uVar6 + 8) == 0) {
    uStack_18 = (ulonglong)*(uint *)(uVar6 + 0xc);
    *(undefined1 *)(uStack_18 + 0x1c) = 1;
    *(undefined4 *)(uStack_18 + 0x18) = 0x16;
    uStack_20 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    FUN_1408cbf04();
    uVar2 = 0xffffffff;
  }
  else {
    puVar5 = &uStack_18;
    uVar2 = 0xffffffff;
    if ((*(uint *)(uVar7 + 0xc) >> 0xd & 1) != 0) {
      uStack_20 = *(undefined8 *)(uVar6 + 0xc);
      uStack_30 = 0x1408c548b;
      uStack_28 = uVar7;
      uVar2 = FUN_1408c5629();
      uStack_30 = uVar7;
      FUN_1408cf29b();
      puVar5 = (ulonglong *)(ulonglong)((int)&uStack_30 + 0xc);
      *(undefined8 *)((longlong)puVar5 + -8) = *(undefined8 *)(uVar6 + 0xc);
      *(ulonglong *)((longlong)puVar5 + -0x10) = uVar7;
      *(undefined8 *)((longlong)puVar5 + -0x18) = 0x1408c549f;
      uVar4 = FUN_1408d056e();
      uVar1 = *(undefined8 *)((longlong)puVar5 + -0x10);
      *(undefined8 *)((longlong)puVar5 + -0x10) = uVar4;
      *(undefined8 *)((longlong)puVar5 + -0x18) = 0x1408c54a6;
      iVar3 = FUN_1408d66d0(uVar1);
      param_1 = *(undefined8 *)((longlong)puVar5 + -8);
      if (iVar3 < 0) {
        uVar2 = 0xffffffff;
      }
      else if (*(int *)(uVar7 + 0x1c) != 0) {
        *(undefined8 *)((longlong)puVar5 + -8) = *(undefined8 *)(uVar7 + 0x1c);
        *(undefined8 *)((longlong)puVar5 + -0x10) = 0x1408c54bf;
        FUN_1408cbff0(param_1);
        *(undefined4 *)(uVar7 + 0x1c) = 0;
        param_1 = *(undefined8 *)((longlong)puVar5 + -8);
      }
    }
    *(ulonglong *)((longlong)puVar5 + -8) = uVar7;
    *(undefined8 *)((longlong)puVar5 + -0x10) = 0x1408c54ca;
    FUN_1408d14e7(param_1);
  }
  return uVar2;
}

