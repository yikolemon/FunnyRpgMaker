/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180247b90 */

void FUN_180247b90(undefined8 *param_1,undefined4 *param_2)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined *local_48;
  undefined **ppuStack_40;
  
  uVar11 = 0;
  puVar6 = *(undefined **)(param_2 + 0xe);
  iVar4 = *(int *)(puVar6 + (longlong)*(int *)(*(longlong *)(param_2 + 0xc) + 0xc) + 4);
  lVar10 = (longlong)*(int *)(puVar6 + iVar4 + 0x14) + 0xb0;
  local_48 = puVar6;
  puVar8 = (undefined8 *)_malloc_base();
  if (puVar8 == (undefined8 *)0x0) {
    LOCK();
    DAT_180404588 = DAT_180404588 + 1;
    UNLOCK();
    local_48 = &DAT_180404590;
    ppuStack_40 = &PTR_vftable_180404580;
    FUN_1802477a0(param_1,&local_48);
    ppuVar7 = ppuStack_40;
    if (ppuStack_40 != (undefined **)0x0) {
      LOCK();
      ppuVar1 = ppuStack_40 + 1;
      iVar4 = *(int *)ppuVar1;
      *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)PTR__guard_dispatch_icall_18038bc80)(ppuStack_40);
        LOCK();
        piVar2 = (int *)((longlong)ppuVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(ppuVar7);
          return;
        }
      }
    }
  }
  else {
    FUN_1802476f0(puVar8 + 0x16,*(undefined8 *)(param_2 + 10),puVar6 + iVar4,puVar6,uVar11,lVar10);
    *puVar8 = 0;
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 1) = 1;
    *(undefined4 *)((longlong)puVar8 + 0xc) = 1;
    *puVar8 = _anon_6E02EFE5::_ExceptionPtr_normal::vftable;
    puVar8[0x15] = 0;
    puVar3 = puVar8 + 2;
    *(undefined4 *)puVar3 = *param_2;
    *(uint *)((longlong)puVar8 + 0x14) = param_2[1] | 1;
    puVar8[3] = 0;
    puVar8[4] = 0;
    uVar5 = param_2[6];
    *(uint *)(puVar8 + 5) = uVar5;
    uVar9 = (ulonglong)uVar5;
    if (0xf < uVar5) {
      uVar9 = 0xf;
    }
    FUN_1802a82f0(puVar8 + 6,param_2 + 8,uVar9 * 8);
    FUN_1802a89a0(puVar3 + uVar9 + 4,0,(ulonglong)(0xf - (int)uVar9) << 3);
    puVar8[7] = puVar8 + 0x16;
    *param_1 = puVar3;
    param_1[1] = puVar8;
  }
  return;
}

