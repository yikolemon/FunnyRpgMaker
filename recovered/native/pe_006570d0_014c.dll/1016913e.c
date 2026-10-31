/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016913e */

void FUN_1016913e(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 uVar7;
  
  while( true ) {
    iVar3 = DAT_1039d74c;
    iVar1 = *(int *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x1e8);
    if (param_1 < 0) {
      param_1 = *(int *)(iVar1 + 0xc);
    }
    uVar2 = *(uint *)(iVar1 + 4);
    uVar5 = 0;
    if (((uVar2 & 4) == 0) && (param_1 < *(int *)(iVar1 + 0x10) + -1)) {
      FUN_10169259(*(undefined1 *)(iVar1 + 9));
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    if ((uVar2 & 8) == 0) {
      fVar4 = (float10)FUN_100ea38a(param_2,*(float *)(iVar1 + 0x18) -
                                            (float)(*(int *)(iVar1 + 0x10) - param_1) *
                                            *(float *)(iVar3 + 0xd40));
      param_2 = (float)fVar4;
    }
    cVar6 = (char)uVar7;
    fVar4 = (float10)FUN_10169038(iVar1,param_2 - *(float *)(iVar1 + 0x14),uVar7,param_2,uVar5);
    *(float *)(*(int *)(iVar1 + 100) + param_1 * 0x1c) = (float)fVar4;
    if (cVar6 == '\0') break;
    fVar4 = (float10)FUN_100fdbca(*(undefined4 *)(iVar3 + 0xd40),uVar5);
    param_2 = param_2 + (float)fVar4;
    param_1 = param_1 + 1;
  }
  return;
}

