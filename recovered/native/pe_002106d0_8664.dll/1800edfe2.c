/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800edfe2 */

undefined4 * FUN_1800edfe2(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  
  if (param_1 != param_2) {
    lVar8 = 0;
    do {
      puVar9 = (undefined4 *)((longlong)param_2 + lVar8 + -0x50);
      if (param_2 != param_3) {
        puVar10 = (undefined4 *)((longlong)param_3 + lVar8 + -0x50);
        FUN_180004c8c(puVar10);
        uVar1 = *puVar9;
        uVar2 = *(undefined4 *)((longlong)param_2 + lVar8 + -0x4c);
        uVar3 = *(undefined4 *)((longlong)param_2 + lVar8 + -0x48);
        uVar4 = *(undefined4 *)((longlong)param_2 + lVar8 + -0x44);
        uVar5 = *(undefined4 *)((longlong)param_2 + lVar8 + -0x3c);
        uVar6 = *(undefined4 *)((longlong)param_2 + lVar8 + -0x38);
        uVar7 = *(undefined4 *)((longlong)param_2 + lVar8 + -0x34);
        *(undefined4 *)((longlong)param_3 + lVar8 + -0x40) =
             *(undefined4 *)((longlong)param_2 + lVar8 + -0x40);
        *(undefined4 *)((longlong)param_3 + lVar8 + -0x3c) = uVar5;
        *(undefined4 *)((longlong)param_3 + lVar8 + -0x38) = uVar6;
        *(undefined4 *)((longlong)param_3 + lVar8 + -0x34) = uVar7;
        *puVar10 = uVar1;
        *(undefined4 *)((longlong)param_3 + lVar8 + -0x4c) = uVar2;
        *(undefined4 *)((longlong)param_3 + lVar8 + -0x48) = uVar3;
        *(undefined4 *)((longlong)param_3 + lVar8 + -0x44) = uVar4;
        *(undefined8 *)((longlong)param_2 + lVar8 + -0x40) = 0;
        *(undefined8 *)((longlong)param_2 + lVar8 + -0x38) = 0xf;
        *(undefined1 *)((longlong)param_2 + lVar8 + -0x50) = 0;
        puVar11 = (undefined8 *)((longlong)param_3 + lVar8 + -0x30);
        FUN_180060538(puVar11);
        *puVar11 = *(undefined8 *)((longlong)param_2 + lVar8 + -0x30);
        *(undefined8 *)((longlong)param_3 + lVar8 + -0x28) =
             *(undefined8 *)((longlong)param_2 + lVar8 + -0x28);
        *(undefined8 *)((longlong)param_3 + lVar8 + -0x20) =
             *(undefined8 *)((longlong)param_2 + lVar8 + -0x20);
        *(undefined8 *)((longlong)param_2 + lVar8 + -0x20) = 0;
        puVar11 = (undefined8 *)((longlong)param_2 + lVar8 + -0x30);
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11 = (undefined8 *)((longlong)param_3 + lVar8 + -0x18);
        FUN_180060538(puVar11);
        *puVar11 = *(undefined8 *)((longlong)param_2 + lVar8 + -0x18);
        *(undefined8 *)((longlong)param_3 + lVar8 + -0x10) =
             *(undefined8 *)((longlong)param_2 + lVar8 + -0x10);
        *(undefined8 *)((longlong)param_3 + lVar8 + -8) =
             *(undefined8 *)((longlong)param_2 + lVar8 + -8);
        *(undefined8 *)((longlong)param_2 + lVar8 + -8) = 0;
        puVar11 = (undefined8 *)((longlong)param_2 + lVar8 + -0x18);
        *puVar11 = 0;
        puVar11[1] = 0;
      }
      lVar8 = lVar8 + -0x50;
    } while (puVar9 != param_1);
    param_3 = (undefined4 *)((longlong)param_3 + lVar8);
  }
  return param_3;
}

