/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00439dd6 */

void __fastcall FUN_00439dd6(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (*param_2 == 0) {
    iVar9 = 0x98;
  }
  else {
    if (*param_2 != 1) {
      if (*(char *)(param_1 + 0x1ce) != '\0') {
        *(undefined4 *)(param_1 + 0x10) = 0x86;
      }
      return;
    }
    iVar9 = 0x7c;
  }
  puVar1 = (undefined4 *)(param_1 + iVar9);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar1 = (undefined4 *)(param_1 + 0xc + iVar9);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  *(undefined4 *)(param_1 + 0x50) = *puVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar6;
  *(undefined4 *)(param_1 + 0x58) = uVar7;
  *(undefined4 *)(param_1 + 0x5c) = uVar8;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  *(short *)(param_1 + 0xf0) = (short)*param_2;
  return;
}

