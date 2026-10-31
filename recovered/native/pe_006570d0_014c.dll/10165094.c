/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10165094 */

void FUN_10165094(undefined4 param_1,short param_2)

{
  float *pfVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined2 uVar5;
  short sVar6;
  
  iVar2 = *(int *)(DAT_1039d74c + 0x2308);
  if (iVar2 == 0) {
    FUN_100fcef5("Call should only be done while in BeginTable() scope!");
  }
  else {
    uVar4 = *(uint *)(iVar2 + 4);
    uVar3 = 0;
    if ((uVar4 >> 0x18 & 1) != 0) {
      uVar3 = FUN_100fa683(param_1,*(undefined4 *)(iVar2 + 0x40));
      uVar4 = *(uint *)(iVar2 + 4);
    }
    *(undefined2 *)(iVar2 + 0x1e0) = uVar3;
    pfVar1 = (float *)(*(int *)(iVar2 + 0x158) + 0xc4);
    uVar5 = 0;
    if (*pfVar1 != 0.0) {
      uVar5 = uVar3;
    }
    if (NAN(*pfVar1)) {
      uVar5 = uVar3;
    }
    *(undefined2 *)(iVar2 + 0x1e2) = uVar5;
    if ((uVar4 >> 0x19 & 1) == 0) {
      param_2 = 0;
    }
    *(short *)(iVar2 + 0x1dc) = param_2;
    pfVar1 = (float *)(*(int *)(iVar2 + 0x158) + 200);
    sVar6 = 0;
    if (*pfVar1 != 0.0) {
      sVar6 = param_2;
    }
    if (NAN(*pfVar1)) {
      sVar6 = param_2;
    }
    *(short *)(iVar2 + 0x1de) = sVar6;
    *(bool *)(iVar2 + 0x1f9) = sVar6 == 0;
  }
  return;
}

