/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140096c9e */

void FUN_140096c9e(longlong *param_1,int param_2,int param_3,byte param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  
  lVar9 = param_1[1];
  iVar2 = *(int *)(lVar9 + 8);
  if (iVar2 == 6) {
    if (*(int *)(lVar9 + 0x24) != 1) {
      FUN_140096b58(param_1);
      uVar8 = *(int *)(lVar9 + 0x24) - 1;
      *(uint *)(lVar9 + 0x24) = uVar8;
      FUN_140094ac8(param_1,*(undefined2 *)(*(longlong *)(lVar9 + 0x28) + (ulonglong)uVar8 * 2));
      lVar9 = param_1[1];
      iVar2 = *(int *)(lVar9 + 8);
      goto LAB_140096d02;
    }
  }
  else {
LAB_140096d02:
    if ((iVar2 == 0xe) || (iVar2 == 9)) {
      lVar9 = *(longlong *)(lVar9 + 0x20);
      goto code_r0x000140096ec1;
    }
  }
  if (param_3 == 1 && param_2 == 0) {
    puVar6 = (undefined8 *)FUN_1400d3680(0x20);
    *(undefined4 *)(puVar6 + 1) = 0x11;
    *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
    *puVar6 = std::_Node_endif::vftable;
    puVar7 = (undefined8 *)FUN_1400d3680(0x30);
    *(undefined4 *)(puVar7 + 1) = 0x10;
    *(undefined8 *)((longlong)puVar7 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
    *puVar7 = std::_Node_if::vftable;
    puVar7[4] = puVar6;
    puVar7[5] = 0;
    puVar3 = (undefined8 *)FUN_1400d3680(0x30);
    *(undefined4 *)(puVar3 + 1) = 0x10;
    *(undefined8 *)((longlong)puVar3 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
    *puVar3 = std::_Node_if::vftable;
    puVar3[4] = puVar6;
    puVar3[5] = 0;
    puVar4 = (undefined8 *)FUN_1400d3680(0x20);
    *puVar4 = std::_Node_base::vftable;
    *(undefined4 *)(puVar4 + 1) = 8;
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
    puVar5 = (undefined8 *)FUN_1400d3680(0x28);
    *(undefined4 *)(puVar5 + 1) = 9;
    *(undefined8 *)((longlong)puVar5 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
    *puVar5 = std::_Node_end_group::vftable;
    puVar5[4] = puVar4;
    puVar3[2] = puVar4;
    puVar4[3] = puVar3;
    puVar4[2] = puVar5;
    puVar5[3] = puVar4;
    puVar5[2] = puVar6;
    puVar7[5] = puVar3;
    FUN_14009434a(param_1,puVar6);
    FUN_140097130(lVar9,puVar7);
    if (param_4 == 0) {
      lVar9 = puVar3[2];
      uVar1 = *(undefined8 *)(puVar7[2] + 0x18);
      *(undefined8 *)(puVar7[2] + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined8 *)(lVar9 + 0x18) = uVar1;
      uVar1 = puVar7[2];
      puVar7[2] = puVar3[2];
      puVar3[2] = uVar1;
    }
    return;
  }
code_r0x000140096ec1:
  if (*(int *)(*param_1 + 0x24) != -1) {
    puVar6 = (undefined8 *)FUN_1400d3680(0x28);
    *(undefined4 *)(puVar6 + 1) = 0x13;
    *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
    *puVar6 = std::_Node_end_rep::vftable;
    puVar6[4] = 0;
    FUN_14009434a(param_1,puVar6);
    puVar7 = (undefined8 *)FUN_1400d3680(0x38);
    iVar2 = *(int *)(*param_1 + 0x24);
    *(int *)(*param_1 + 0x24) = iVar2 + 1;
    *(undefined4 *)(puVar7 + 1) = 0x12;
    *(uint *)((longlong)puVar7 + 0xc) = (uint)param_4 * 2;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = std::_Node_rep::vftable;
    *(int *)(puVar7 + 4) = param_2;
    *(int *)((longlong)puVar7 + 0x24) = param_3;
    puVar7[5] = puVar6;
    *(int *)(puVar7 + 6) = iVar2;
    *(undefined4 *)((longlong)puVar7 + 0x34) = 0xffffffff;
    puVar6[4] = puVar7;
    FUN_140097130(lVar9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d9f90(9);
}

