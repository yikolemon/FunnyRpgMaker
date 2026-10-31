/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016dce7 */

void __fastcall FUN_1016dce7(int *param_1,uint *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 ******ppppppuVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *****local_54 [5];
  uint local_40;
  char *local_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 local_30;
  uint *local_2c;
  int *local_28;
  char local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_54;
  local_14 = 0xffffffff;
  local_18 = &LAB_10180150;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_2c = param_2;
  local_28 = param_1;
  do {
    uVar6 = *local_2c;
    iVar8 = *local_28;
    uVar7 = local_28[1] - iVar8 >> 5;
    if (uVar7 <= uVar6) {
      ExceptionList = local_1c;
      return;
    }
    iVar5 = iVar8 + uVar6 * 0x20;
    local_34 = *(int *)(iVar8 + 4 + uVar6 * 0x20);
    if (uVar6 + 1 < uVar7) {
      iVar1 = *(int *)(iVar8 + 4 + (uVar6 + 1) * 0x20);
      local_30 = CONCAT31((int3)((uint)iVar8 >> 8),local_34 < iVar1);
      uVar9 = 0x80be8;
      if (local_34 < iVar1) {
        uVar9 = 0x808e0;
      }
    }
    else {
      uVar9 = 0x80be8;
      local_30 = 0;
    }
    FUN_10113358(uVar6);
    local_3c = "code: {:03d}, parameters: {}";
    uStack_38 = 0x1c;
    FUN_1016e421(local_54,0x1c1032f8b6,iVar5,iVar5 + 8);
    local_14 = 0;
    local_21 = FUN_10148b8c("##DrawCodeTree",uVar9);
    cVar3 = FUN_10115d1a();
    if (cVar3 != '\0') {
      ppppppuVar4 = local_54;
      if (0xf < local_40) {
        ppppppuVar4 = (undefined4 ******)local_54[0];
      }
      FUN_1012d079(ppppppuVar4,0);
      thunk_FUN_1010ad44();
    }
    FUN_10114a0e(0,0);
    ppppppuVar4 = local_54;
    if (0xf < local_40) {
      ppppppuVar4 = (undefined4 ******)local_54[0];
    }
    FUN_1012d079(ppppppuVar4,0);
    uVar7 = *local_2c;
    uVar6 = uVar7 + 1;
    *local_2c = uVar6;
    if ((char)local_30 != '\0') {
      if (local_21 == '\0') {
        iVar8 = *local_28;
        if (uVar6 < (uint)(local_28[1] - iVar8 >> 5)) {
          iVar5 = uVar7 * 0x20 + 0x24;
          do {
            if (*(int *)(iVar8 + iVar5) <= local_34) break;
            uVar6 = uVar6 + 1;
            *local_2c = uVar6;
            iVar8 = *local_28;
            iVar5 = iVar5 + 0x20;
          } while (uVar6 < (uint)(local_28[1] - iVar8 >> 5));
        }
      }
      else {
        FUN_1016dce7();
        FUN_10149387();
      }
    }
    local_14 = 0;
    FUN_10113568();
    if ((*local_2c < (uint)(local_28[1] - *local_28 >> 5)) &&
       (*(int *)(*local_28 + 4 + *local_2c * 0x20) < local_34)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    local_14 = 0xffffffff;
    FUN_10001fee();
    if (!bVar2) {
      ExceptionList = local_1c;
      return;
    }
  } while( true );
}

