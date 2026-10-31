/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009ea10 */

longlong FUN_14009ea10(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  PVOID pvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_60 [5];
  
  pvVar5 = FUN_14009d690();
  uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x28);
  pvVar5 = FUN_14009d690();
  uVar3 = *(undefined8 *)((longlong)pvVar5 + 0x20);
  piVar4 = *(int **)(param_1 + 0x50);
  lVar7 = *(longlong *)(param_1 + 0x40);
  local_60[0] = *(longlong *)(param_1 + 0x48);
  local_60[1] = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  __except_validate_context_record(lVar7);
  pvVar5 = FUN_14009d690();
  *(int **)((longlong)pvVar5 + 0x20) = piVar4;
  pvVar5 = FUN_14009d690();
  *(longlong *)((longlong)pvVar5 + 0x28) = lVar7;
  pvVar5 = FUN_14009d690();
  puVar6 = _CreateFrameInfo(local_60 + 2,
                            *(undefined8 *)(*(longlong *)((longlong)pvVar5 + 0x20) + 0x28));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_14009d690();
  }
  lVar7 = FUN_1400aee20();
  if ((lVar7 < 2) && (lVar7 = local_60[lVar7], lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_140096cf8();
  }
  FUN_1400aee50();
  FUN_14008d710((longlong)puVar6);
  if ((((*piVar4 == -0x1f928c9d) && (piVar4[6] == 4)) && (piVar4[8] + 0xe66cfae0U < 3)) &&
     (uVar8 = FUN_14008d9e0(*(longlong *)(piVar4 + 10)), (int)uVar8 != 0)) {
    __DestructExceptionObject(piVar4);
  }
  pvVar5 = FUN_14009d690();
  *(undefined8 *)((longlong)pvVar5 + 0x20) = uVar3;
  pvVar5 = FUN_14009d690();
  *(undefined8 *)((longlong)pvVar5 + 0x28) = uVar2;
  pvVar5 = FUN_14009d690();
  *(undefined4 *)((longlong)pvVar5 + 0x78) = uVar1;
  pvVar5 = FUN_14009d690();
  *(undefined4 *)((longlong)pvVar5 + 0x78) = 0xfffffffe;
  return lVar7;
}

