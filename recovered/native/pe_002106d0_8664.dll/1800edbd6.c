/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800edbd6 */

void FUN_1800edbd6(longlong *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_2 >> 0x3b == 0) {
    lVar3 = param_1[1];
    lVar4 = *param_1;
    lVar10 = FUN_1800013e0(*param_2 << 5);
    local_30 = *param_2;
    puVar5 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
    uVar12 = local_30;
    if (puVar5 != puVar6) {
      lVar11 = 0;
      do {
        puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar11);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar10 + lVar11) = 0;
        ((undefined8 *)(lVar10 + lVar11))[1] = 0;
        puVar1 = (undefined8 *)((longlong)puVar5 + lVar11);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        uVar9 = puVar1[3];
        puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar11);
        *puVar2 = puVar1[2];
        puVar2[1] = uVar9;
        *(undefined8 *)(lVar10 + lVar11) = uVar7;
        ((undefined8 *)(lVar10 + lVar11))[1] = uVar8;
        puVar1[2] = 0;
        puVar1[3] = 0xf;
        *(undefined1 *)puVar1 = 0;
        lVar11 = lVar11 + 0x20;
      } while (puVar1 + 4 != puVar6);
      uVar12 = *param_2;
    }
    local_38 = 0;
    local_40 = param_1;
    FUN_1800af7d0(param_1,lVar10,lVar3 - lVar4 >> 5,uVar12);
    FUN_18001bbb4(&local_40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

