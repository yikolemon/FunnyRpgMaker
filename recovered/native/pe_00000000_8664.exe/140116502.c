/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140116502 */

void FUN_140116502(int param_1,float param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  while( true ) {
    lVar4 = DAT_140f2a910;
    lVar2 = *(longlong *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x208);
    if (param_1 < 0) {
      param_1 = *(int *)(lVar2 + 0xc);
    }
    uVar1 = *(uint *)(lVar2 + 4);
    uVar7 = 0;
    if (((uVar1 & 4) == 0) && (param_1 < *(int *)(lVar2 + 0x10) + -1)) {
      uVar7 = FUN_1401165ef(lVar2,param_1,*(undefined1 *)(lVar2 + 9));
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((uVar1 & 8) == 0) {
      param_2 = (float)FUN_14004863e(param_2,*(float *)(lVar2 + 0x18) -
                                             (float)(*(int *)(lVar2 + 0x10) - param_1) *
                                             *(float *)(lVar4 + 0xe28));
    }
    uVar5 = FUN_1401163f8(lVar2,param_2 - *(float *)(lVar2 + 0x14));
    *(undefined4 *)(*(longlong *)(lVar2 + 0x68) + (longlong)param_1 * 0x1c) = uVar5;
    if (!bVar3) break;
    fVar6 = (float)FUN_14007b71f(*(undefined4 *)(lVar4 + 0xe28),uVar7);
    param_2 = param_2 + fVar6;
    param_1 = param_1 + 1;
  }
  return;
}

