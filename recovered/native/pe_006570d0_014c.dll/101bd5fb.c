/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bd5fb */

void FUN_101bd5fb(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int unaff_ESI;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int **ppiVar8;
  int iStack_44;
  uint uStack_40;
  int *local_3c;
  int iStack_38;
  int iStack_34;
  int *local_2c [2];
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&iStack_44;
  puVar2 = (undefined4 *)FUN_101bd5e3();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 4) {
    piVar1 = *(int **)(param_1 + 0x10);
    if ((*(int *)(param_1 + 0x14) != 0 || piVar1 != (int *)0x0) && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(uint *)(param_1 + 4) = 2 - (uint)(*(int *)(param_1 + 0x28) == 0 | *(byte *)(param_1 + 0x4f));
  }
  else if (iVar3 == 3) {
    local_3c = *(int **)(param_1 + 0x10);
    local_24 = (uint)*(ushort *)(param_1 + 0x34);
    local_20 = (uint)*(ushort *)(param_1 + 0x36);
    local_1c = *(ushort *)(param_1 + 0x38) + local_24;
    local_18 = *(ushort *)(param_1 + 0x3a) + local_20;
    ppiVar8 = local_2c;
    iVar3 = (**(code **)(*local_3c + 0x4c))(local_3c,0,ppiVar8,&local_24,0);
    if ((iVar3 == 0) && (*(int *)(unaff_ESI + 0x3c) != 0)) {
      iVar3 = *(int *)(unaff_ESI + 0x44);
      iVar7 = *(int *)(unaff_ESI + 0x3c) << 3;
      iVar6 = 0;
      do {
        uVar4 = uStack_40 + 3;
        if (-1 < (int)uStack_40) {
          uVar4 = uStack_40;
        }
        iStack_44 = *(int *)(unaff_ESI + 0x1c) * 4;
        FUN_101bdbc4(iStack_44,
                     local_3c +
                     ((uint)*(ushort *)(iVar3 + iVar6) - iStack_38) +
                     (uVar4 >> 2) * ((uint)*(ushort *)(iVar3 + 2 + iVar6) - iStack_34),uStack_40,
                     *(undefined2 *)(iVar3 + 4 + iVar6),*(undefined2 *)(iVar3 + 6 + iVar6));
        iVar6 = iVar6 + 8;
      } while (iVar7 != iVar6);
    }
    (*(code *)(*ppiVar8)[0x14])(ppiVar8,0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else if (iVar3 == 2) {
    local_2c[0] = (int *)0x0;
    uVar5 = 0x15;
    if (*(char *)(puVar2 + 5) != '\0') {
      uVar5 = 0x20;
    }
    iVar3 = (**(code **)(*(int *)*puVar2 + 0x5c))
                      ((int *)*puVar2,*(undefined4 *)(param_1 + 0x1c),
                       *(undefined4 *)(param_1 + 0x20),1,0x200,uVar5,0,local_2c,0);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(*local_2c[0] + 0x4c))(local_2c[0],0,&local_24,0,0);
      if (iVar3 == 0) {
        FUN_101bdbc4(*(int *)(param_1 + 0x1c) << 2,local_20,local_24,*(int *)(param_1 + 0x1c),
                     *(undefined4 *)(param_1 + 0x20));
        (**(code **)(*local_2c[0] + 0x50))(local_2c[0],0);
      }
      *(int **)(param_1 + 0x10) = local_2c[0];
      *(int *)(param_1 + 0x14) = (int)local_2c[0] >> 0x1f;
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&iStack_44)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

