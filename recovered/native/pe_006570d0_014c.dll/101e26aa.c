/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e26aa */

void __fastcall FUN_101e26aa(int param_1,int *param_2)

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
  *(undefined4 *)(param_1 + 0x6c) = *puVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar6;
  *(undefined4 *)(param_1 + 0x74) = uVar7;
  *(undefined4 *)(param_1 + 0x78) = uVar8;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  *(short *)(param_1 + 0xf2) = (short)*param_2;
  return;
}

