/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007d3fd */

undefined8 FUN_14007d3fd(byte *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x58);
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0x14) != 0)) {
    lVar6 = *(longlong *)(param_1 + 0x30);
    *(longlong *)(param_1 + 0x58) = lVar6;
    *(ulonglong *)(param_1 + 0x30) = lVar6 + 0x24U;
    if (*(ulonglong *)(param_1 + 0x28) <= lVar6 + 0x24U) {
      uVar5 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
      param_2 = 0x62;
      lVar6 = 0x38;
      goto LAB_14007d4fb;
    }
    *(undefined4 *)(lVar6 + 0x14) = 0;
    lVar6 = *(longlong *)(param_1 + 0x58);
  }
  *(ushort *)(lVar6 + 0x1c) = (ushort)param_1[0x3c];
  if (param_2 == 1) {
    *(ushort *)(*(longlong *)(param_1 + 0x58) + 0x1c) =
         *(ushort *)(*(longlong *)(param_1 + 0x58) + 0x1c) | 8;
    uVar3 = -*(int *)(param_1 + 4) & (*(int *)(param_1 + 0x44) + *(int *)(param_1 + 4)) - 1U;
    if (*(int *)(param_1 + 8) <= (int)(uVar3 - *(int *)(param_1 + 0x44))) {
      *(ushort *)(*(longlong *)(param_1 + 0x58) + 0x1c) =
           *(ushort *)(*(longlong *)(param_1 + 0x58) + 0x1c) | 0x20;
      iVar4 = *(int *)(param_1 + 4);
      uVar3 = (*(int *)(param_1 + 0x44) + iVar4) - 1;
      goto LAB_14007d4b2;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 4);
    uVar3 = *(uint *)(param_1 + 0x44);
    if (*(int *)(param_1 + 8) <= (int)(iVar4 - 1U & uVar3)) {
      *(ushort *)(*(longlong *)(param_1 + 0x58) + 0x1c) =
           *(ushort *)(*(longlong *)(param_1 + 0x58) + 0x1c) | 0x10;
      iVar4 = *(int *)(param_1 + 4);
      uVar3 = *(uint *)(param_1 + 0x44);
    }
LAB_14007d4b2:
    uVar3 = -iVar4 & uVar3;
  }
  uVar2 = *(uint *)(param_1 + 0x4c);
  if ((int)uVar3 < (int)*(uint *)(param_1 + 0x4c)) {
    uVar2 = uVar3;
  }
  if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x48)) {
    uVar2 = *(uint *)(param_1 + 0x48);
  }
  *(int *)(*(longlong *)(param_1 + 0x58) + 0x18) = (int)uVar2 >> (*param_1 & 0x1f);
  lVar6 = 0x70;
  if (*(uint *)(param_1 + 0x44) == uVar2) {
    puVar1 = *(undefined4 **)(param_1 + 0x30);
    *(undefined4 **)(param_1 + 0x30) = puVar1 + 1;
    *puVar1 = *(undefined4 *)(param_1 + 0x40);
  }
  uVar5 = 0;
LAB_14007d4fb:
  *(int *)(param_1 + lVar6) = param_2;
  return uVar5;
}

