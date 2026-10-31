/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026be51 */

undefined4 * FUN_1026be51(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint uVar10;
  bool bVar11;
  undefined4 *local_10;
  undefined **local_8;
  
  puVar5 = (undefined4 *)FUN_10274170(0x6a6);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 1;
    puVar6 = puVar5 + 1;
    *(undefined2 *)puVar6 = 0;
    FUN_1026b8b2(puVar6,0x351,3,PTR_u_LC_COLLATE_10324e4c,&DAT_1035a480,
                 *(undefined4 *)(param_1 + 0x30));
    local_8 = &PTR_u_LC_COLLATE_10324e4c;
    local_10 = (undefined4 *)(param_1 + 0x30);
    bVar4 = true;
    do {
      iVar7 = FUN_1027ba80(puVar6,0x351,&DAT_1035a48c);
      if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      puVar8 = (ushort *)*local_10;
      puVar2 = (ushort *)local_10[4];
      puVar9 = puVar2;
      do {
        uVar1 = *puVar8;
        bVar11 = uVar1 < *puVar9;
        if (uVar1 != *puVar9) {
LAB_1026bf00:
          uVar10 = -(uint)bVar11 | 1;
          goto LAB_1026bf05;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar8[1];
        bVar11 = uVar1 < puVar9[1];
        if (uVar1 != puVar9[1]) goto LAB_1026bf00;
        puVar8 = puVar8 + 2;
        puVar9 = puVar9 + 2;
      } while (uVar1 != 0);
      uVar10 = 0;
LAB_1026bf05:
      bVar11 = false;
      if (uVar10 == 0) {
        bVar11 = bVar4;
      }
      local_8 = local_8 + 3;
      FUN_1026b8b2(puVar6,0x351,3,*local_8,&DAT_1035a480,puVar2);
      local_10 = local_10 + 4;
      bVar4 = bVar11;
    } while ((int)local_8 < 0x10324e7c);
    if (bVar11) {
      FUN_10274120(puVar5);
      piVar3 = *(int **)(param_1 + 0x28);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar3;
        *piVar3 = iVar7 + -1;
        UNLOCK();
        if (iVar7 + -1 == 0) {
          FUN_10274120(*(undefined4 *)(param_1 + 0x28));
        }
      }
      piVar3 = *(int **)(param_1 + 0x24);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_10274120(*(undefined4 *)(param_1 + 0x24));
        }
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      puVar6 = *(undefined4 **)(param_1 + 0x40);
    }
    else {
      piVar3 = *(int **)(param_1 + 0x28);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar3;
        *piVar3 = iVar7 + -1;
        UNLOCK();
        if (iVar7 + -1 == 0) {
          FUN_10274120(*(undefined4 *)(param_1 + 0x28));
        }
      }
      piVar3 = *(int **)(param_1 + 0x24);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_10274120(*(undefined4 *)(param_1 + 0x24));
        }
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
      puVar6 = puVar5 + 1;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 **)(param_1 + 0x28) = puVar5;
      *(undefined4 **)(param_1 + 0x20) = puVar6;
    }
  }
  return puVar6;
}

