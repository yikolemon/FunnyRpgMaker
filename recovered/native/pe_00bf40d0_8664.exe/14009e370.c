/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009e370 */

undefined8 FUN_14009e370(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  PVOID pvVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_48 [2];
  
  pvVar7 = FUN_14009d690();
  uVar1 = *(undefined8 *)((longlong)pvVar7 + 0x28);
  pvVar7 = FUN_14009d690();
  uVar2 = *(undefined8 *)((longlong)pvVar7 + 0x20);
  piVar3 = *(int **)(param_1 + 0x50);
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar5 = *(longlong *)(param_1 + 0x40);
  plVar6 = *(longlong **)(param_1 + 0x28);
  __except_validate_context_record(lVar5);
  pvVar7 = FUN_14009d690();
  *(int **)((longlong)pvVar7 + 0x20) = piVar3;
  pvVar7 = FUN_14009d690();
  *(longlong *)((longlong)pvVar7 + 0x28) = lVar5;
  pvVar7 = FUN_14009d690();
  puVar8 = _CreateFrameInfo(local_48,*(undefined8 *)(*(longlong *)((longlong)pvVar7 + 0x20) + 0x28))
  ;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_14009d690();
  }
  uVar9 = _CallSettingFrame();
  FUN_14008d710((longlong)puVar8);
  if ((((*piVar3 == -0x1f928c9d) && (piVar3[6] == 4)) && (piVar3[8] + 0xe66cfae0U < 3)) &&
     (uVar10 = FUN_14008d9e0(*(longlong *)(piVar3 + 10)), (int)uVar10 != 0)) {
    __DestructExceptionObject(piVar3);
  }
  pvVar7 = FUN_14009d690();
  *(undefined8 *)((longlong)pvVar7 + 0x20) = uVar2;
  pvVar7 = FUN_14009d690();
  *(undefined8 *)((longlong)pvVar7 + 0x28) = uVar1;
  *(undefined8 *)((longlong)*(int *)(lVar4 + 0x1c) + *plVar6) = 0xfffffffffffffffe;
  return uVar9;
}

