/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140276725 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140276725(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = ram0x000140613b10 ^ (ulonglong)auStack_78;
  puVar11 = param_3;
  do {
    puVar10 = puVar11;
    if (puVar10 <= param_2) break;
    uVar2 = puVar10[-3];
    uVar6 = puVar10[-2] - uVar2;
    uVar3 = *puVar10;
    uVar8 = puVar10[1] - uVar3;
    bVar4 = uVar8 < uVar6;
    if (uVar6 == uVar8) {
      bVar4 = uVar2 < uVar3;
    }
    if (bVar4) break;
    bVar4 = uVar6 < uVar8;
    if (uVar6 == uVar8) {
      bVar4 = uVar3 < uVar2;
    }
    puVar11 = puVar10 + -3;
  } while (!bVar4);
  do {
    puVar7 = param_3 + 3;
    puVar9 = puVar7;
    puVar11 = puVar10;
    if (param_4 <= puVar7) break;
    uVar2 = *puVar7;
    uVar8 = param_3[4] - uVar2;
    uVar3 = *puVar10;
    uVar6 = puVar10[1] - uVar3;
    bVar4 = uVar6 < uVar8;
    if (uVar8 == uVar6) {
      bVar4 = uVar2 < uVar3;
    }
    if (bVar4) break;
    bVar4 = uVar8 < uVar6;
    if (uVar8 == uVar6) {
      bVar4 = uVar3 < uVar2;
    }
    param_3 = puVar7;
  } while (!bVar4);
LAB_1402767fe:
  do {
    puVar1 = puVar10;
    if (puVar9 < param_4) {
      uVar2 = *puVar11;
      uVar8 = puVar11[1] - uVar2;
      uVar3 = *puVar9;
      uVar6 = puVar9[1] - uVar3;
      bVar4 = uVar6 < uVar8;
      if (uVar8 == uVar6) {
        bVar4 = uVar2 < uVar3;
      }
      if (!bVar4) {
        bVar4 = uVar8 < uVar6;
        if (uVar8 == uVar6) {
          bVar4 = uVar3 < uVar2;
        }
        if (bVar4) goto joined_r0x00014027689d;
        if (puVar9 != puVar7) {
          local_48 = puVar7[2];
          uVar2 = *puVar7;
          uVar3 = puVar7[1];
          puVar7[2] = puVar9[2];
          uVar6 = puVar9[1];
          *puVar7 = *puVar9;
          puVar7[1] = uVar6;
          puVar9[2] = local_48;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)(uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)(uVar3 >> 0x20);
          *(undefined4 *)puVar9 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar9 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar9 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar9 + 0xc) = uStack_50._4_4_;
          local_58 = uVar2;
          uStack_50 = uVar3;
        }
        puVar7 = puVar7 + 3;
      }
      puVar9 = puVar9 + 3;
      goto LAB_1402767fe;
    }
joined_r0x00014027689d:
    while (puVar5 = puVar11, puVar10 = puVar1, puVar11 = puVar5, param_2 < puVar10) {
      uVar2 = puVar10[-3];
      uVar6 = puVar10[-2] - uVar2;
      uVar3 = *puVar5;
      uVar8 = puVar5[1] - uVar3;
      puVar1 = puVar10 + -3;
      bVar4 = uVar8 < uVar6;
      if (uVar6 == uVar8) {
        bVar4 = uVar2 < uVar3;
      }
      if (!bVar4) {
        bVar4 = uVar6 < uVar8;
        if (uVar6 == uVar8) {
          bVar4 = uVar3 < uVar2;
        }
        if (bVar4) break;
        puVar11 = puVar5 + -3;
        if (puVar10 != puVar5) {
          local_48 = puVar5[-1];
          uVar2 = *puVar11;
          uVar3 = puVar5[-2];
          puVar5[-1] = puVar10[-1];
          uVar6 = puVar10[-2];
          *puVar11 = *puVar1;
          puVar5[-2] = uVar6;
          puVar10[-1] = local_48;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)(uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)(uVar3 >> 0x20);
          *(undefined4 *)puVar1 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar10 + -0x14) = local_58._4_4_;
          *(undefined4 *)(puVar10 + -2) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar10 + -0xc) = uStack_50._4_4_;
          local_58 = uVar2;
          uStack_50 = uVar3;
        }
      }
    }
    if (puVar9 == param_4 && puVar10 == param_2) {
      *param_1 = puVar5;
      param_1[1] = puVar7;
      if (ram0x000140613b10 != (local_40 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
        FUN_14044aba0(local_40 ^ (ulonglong)auStack_78);
      }
      return param_1;
    }
    if (puVar10 == param_2) {
      if (puVar7 != puVar9) {
        uVar2 = puVar5[2];
        uVar3 = *puVar5;
        uVar6 = puVar5[1];
        puVar5[2] = puVar7[2];
        uVar8 = puVar7[1];
        *puVar5 = *puVar7;
        puVar5[1] = uVar8;
        puVar7[2] = uVar2;
        *puVar7 = uVar3;
        puVar7[1] = uVar6;
      }
      puVar7 = puVar7 + 3;
      local_48 = puVar5[2];
      uVar2 = *puVar5;
      uVar3 = puVar5[1];
      puVar5[2] = puVar9[2];
      uVar6 = puVar9[1];
      *puVar5 = *puVar9;
      puVar5[1] = uVar6;
      puVar9[2] = local_48;
      local_58._0_4_ = (undefined4)uVar2;
      local_58._4_4_ = (undefined4)(uVar2 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar3;
      uStack_50._4_4_ = (undefined4)(uVar3 >> 0x20);
      *(undefined4 *)puVar9 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar9 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar9 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uStack_50._4_4_;
      puVar9 = puVar9 + 3;
      puVar11 = puVar5 + 3;
      local_58 = uVar2;
      uStack_50 = uVar3;
    }
    else {
      puVar1 = puVar10 + -3;
      if (puVar9 == param_4) {
        puVar11 = puVar5 + -3;
        if (puVar10 != puVar5) {
          uVar2 = puVar10[-1];
          uVar3 = *puVar1;
          uVar6 = puVar10[-2];
          puVar10[-1] = puVar5[-1];
          uVar8 = puVar5[-2];
          *puVar1 = *puVar11;
          puVar10[-2] = uVar8;
          puVar5[-1] = uVar2;
          *puVar11 = uVar3;
          puVar5[-2] = uVar6;
        }
        local_48 = puVar5[-1];
        uVar2 = *puVar11;
        uVar3 = puVar5[-2];
        puVar5[-1] = puVar7[-1];
        uVar6 = puVar7[-2];
        *puVar11 = puVar7[-3];
        puVar5[-2] = uVar6;
        puVar7[-1] = local_48;
        local_58._0_4_ = (undefined4)uVar2;
        local_58._4_4_ = (undefined4)(uVar2 >> 0x20);
        uStack_50._0_4_ = (undefined4)uVar3;
        uStack_50._4_4_ = (undefined4)(uVar3 >> 0x20);
        *(undefined4 *)(puVar7 + -3) = (undefined4)local_58;
        *(undefined4 *)((longlong)puVar7 + -0x14) = local_58._4_4_;
        *(undefined4 *)(puVar7 + -2) = (undefined4)uStack_50;
        *(undefined4 *)((longlong)puVar7 + -0xc) = uStack_50._4_4_;
        puVar7 = puVar7 + -3;
        puVar10 = puVar1;
        local_58 = uVar2;
        uStack_50 = uVar3;
      }
      else {
        local_48 = puVar9[2];
        uVar2 = *puVar9;
        uVar3 = puVar9[1];
        puVar9[2] = puVar10[-1];
        uVar6 = puVar10[-2];
        *puVar9 = *puVar1;
        puVar9[1] = uVar6;
        puVar10[-1] = local_48;
        local_58._0_4_ = (undefined4)uVar2;
        local_58._4_4_ = (undefined4)(uVar2 >> 0x20);
        uStack_50._0_4_ = (undefined4)uVar3;
        uStack_50._4_4_ = (undefined4)(uVar3 >> 0x20);
        *(undefined4 *)puVar1 = (undefined4)local_58;
        *(undefined4 *)((longlong)puVar10 + -0x14) = local_58._4_4_;
        *(undefined4 *)(puVar10 + -2) = (undefined4)uStack_50;
        *(undefined4 *)((longlong)puVar10 + -0xc) = uStack_50._4_4_;
        puVar9 = puVar9 + 3;
        puVar10 = puVar1;
        local_58 = uVar2;
        uStack_50 = uVar3;
      }
    }
  } while( true );
}

