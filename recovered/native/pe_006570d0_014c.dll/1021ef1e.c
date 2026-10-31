/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021ef1e */

undefined4 __fastcall FUN_1021ef1e(byte *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 0x44);
  if ((iVar4 == 0) || (*(int *)(iVar4 + 0xc) != 0)) {
    iVar4 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x44) = iVar4;
    *(uint *)(param_1 + 0x20) = iVar4 + 0x1cU;
    if (*(uint *)(param_1 + 0x1c) <= iVar4 + 0x1cU) {
      uVar3 = CONCAT31((int3)((uint)iVar4 >> 8),1);
      param_2 = 0x62;
      iVar4 = 0x24;
      goto LAB_1021eff0;
    }
    *(undefined4 *)(iVar4 + 0xc) = 0;
    iVar4 = *(int *)(param_1 + 0x44);
  }
  *(ushort *)(iVar4 + 0x14) = (ushort)param_1[0x28];
  if (param_2 == 1) {
    *(ushort *)(*(int *)(param_1 + 0x44) + 0x14) = *(ushort *)(*(int *)(param_1 + 0x44) + 0x14) | 8;
    uVar2 = -*(int *)(param_1 + 4) & (*(int *)(param_1 + 0x30) + *(int *)(param_1 + 4)) - 1U;
    if (*(int *)(param_1 + 8) <= (int)(uVar2 - *(int *)(param_1 + 0x30))) {
      *(ushort *)(*(int *)(param_1 + 0x44) + 0x14) =
           *(ushort *)(*(int *)(param_1 + 0x44) + 0x14) | 0x20;
      iVar4 = *(int *)(param_1 + 4);
      uVar2 = (*(int *)(param_1 + 0x30) + iVar4) - 1;
      goto LAB_1021efb6;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 4);
    uVar2 = *(uint *)(param_1 + 0x30);
    if (*(int *)(param_1 + 8) <= (int)(iVar4 - 1U & uVar2)) {
      *(ushort *)(*(int *)(param_1 + 0x44) + 0x14) =
           *(ushort *)(*(int *)(param_1 + 0x44) + 0x14) | 0x10;
      iVar4 = *(int *)(param_1 + 4);
      uVar2 = *(uint *)(param_1 + 0x30);
    }
LAB_1021efb6:
    uVar2 = -iVar4 & uVar2;
  }
  uVar5 = *(uint *)(param_1 + 0x38);
  if ((int)uVar2 < (int)*(uint *)(param_1 + 0x38)) {
    uVar5 = uVar2;
  }
  if ((int)uVar5 <= (int)*(uint *)(param_1 + 0x34)) {
    uVar5 = *(uint *)(param_1 + 0x34);
  }
  *(int *)(*(int *)(param_1 + 0x44) + 0x10) = (int)uVar5 >> (*param_1 & 0x1f);
  iVar4 = 0x50;
  if (*(uint *)(param_1 + 0x30) == uVar5) {
    puVar1 = *(undefined4 **)(param_1 + 0x20);
    *(undefined4 **)(param_1 + 0x20) = puVar1 + 1;
    *puVar1 = *(undefined4 *)(param_1 + 0x2c);
  }
  uVar3 = 0;
LAB_1021eff0:
  *(int *)(param_1 + iVar4) = param_2;
  return uVar3;
}

