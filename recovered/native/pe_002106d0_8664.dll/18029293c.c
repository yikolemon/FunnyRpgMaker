/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029293c */

void FUN_18029293c(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  int *piVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  int local_res10;
  undefined8 local_res20;
  
  puVar4 = (undefined8 *)FUN_1802924ec();
  puVar5 = (undefined8 *)FUN_180292584();
  iVar3 = FUN_180292554();
  if ((iVar3 == 0) && (iVar3 = FUN_1802924f4(), iVar3 == 0)) {
    if (DAT_1804213f0 != 0) {
      puVar6 = param_1;
      do {
        uVar1 = *puVar6;
        uVar2 = *(ushort *)((longlong)puVar6 + (DAT_1804213f0 - (longlong)param_1));
        if (uVar1 != uVar2) break;
        puVar6 = puVar6 + 1;
      } while (uVar2 != 0);
      if (uVar1 == uVar2) {
        return;
      }
    }
    lVar10 = -1;
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (param_1[lVar9] != 0);
    lVar9 = _malloc_base(lVar9 * 2 + 2);
    if (lVar9 != 0) {
      FUN_180290e40(DAT_1804213f0);
      do {
        lVar10 = lVar10 + 1;
      } while (param_1[lVar10] != 0);
      DAT_1804213f0 = lVar9;
      iVar3 = FUN_180291780();
      if (iVar3 != 0) goto LAB_180292ba5;
      FUN_1802a89a0(*puVar5,0,0x80);
      FUN_1802a89a0(puVar5[1],0,0x80);
      FUN_1802a89a0(*puVar4,0,0x40);
      FUN_1802a89a0(puVar4[1],0,0x40);
      FUN_180292858(param_1,*puVar5,*puVar4,3);
      lVar9 = 3;
      do {
        if (*param_1 != 0) {
          param_1 = param_1 + 1;
        }
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      uVar1 = *param_1;
      local_res20 = 0;
      puVar6 = param_1 + 1;
      if (uVar1 != 0x2d) {
        puVar6 = param_1;
      }
      local_res10 = FUN_18028b2bc(puVar6,&local_res20,10);
      local_res10 = local_res10 * 0xe10;
      for (; (*puVar6 == 0x2b || ((ushort)(*puVar6 - 0x30) < 10)); puVar6 = puVar6 + 1) {
      }
      if (*puVar6 == 0x3a) {
        puVar6 = puVar6 + 1;
        iVar3 = FUN_18028b2bc(puVar6,&local_res20,10);
        local_res10 = local_res10 + iVar3 * 0x3c;
        uVar2 = *puVar6;
        while ((0x2f < uVar2 && (uVar2 < 0x3a))) {
          puVar6 = puVar6 + 1;
          uVar2 = *puVar6;
        }
        if (uVar2 == 0x3a) {
          puVar6 = puVar6 + 1;
          iVar3 = FUN_18028b2bc(puVar6,&local_res20,10);
          local_res10 = local_res10 + iVar3;
          for (; (0x2f < *puVar6 && (*puVar6 < 0x3a)); puVar6 = puVar6 + 1) {
          }
        }
      }
      if (uVar1 == 0x2d) {
        local_res10 = -local_res10;
      }
      uVar1 = *puVar6;
      if (uVar1 != 0) {
        FUN_180292858(puVar6,puVar5[1],puVar4[1],3);
      }
      piVar7 = (int *)FUN_1802924e4();
      *piVar7 = local_res10;
      puVar8 = (uint *)FUN_1802924d4();
      *puVar8 = (uint)(uVar1 != 0);
    }
    FUN_180290e40(0);
    return;
  }
LAB_180292ba5:
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

