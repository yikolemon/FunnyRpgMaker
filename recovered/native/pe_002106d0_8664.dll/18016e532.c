/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016e532 */

void FUN_18016e532(int param_1,float param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  while( true ) {
    lVar4 = DAT_180419160;
    lVar2 = *(longlong *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x208);
    if (param_1 < 0) {
      param_1 = *(int *)(lVar2 + 0xc);
    }
    uVar1 = *(uint *)(lVar2 + 4);
    uVar7 = 0;
    if (((uVar1 & 4) == 0) && (param_1 < *(int *)(lVar2 + 0x10) + -1)) {
      uVar7 = FUN_18016e61f(lVar2,param_1,*(undefined1 *)(lVar2 + 9));
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((uVar1 & 8) == 0) {
      param_2 = (float)FUN_1800eebe2(param_2,*(float *)(lVar2 + 0x18) -
                                             (float)(*(int *)(lVar2 + 0x10) - param_1) *
                                             *(float *)(lVar4 + 0xe28));
    }
    uVar5 = FUN_18016e428(lVar2,param_2 - *(float *)(lVar2 + 0x14));
    *(undefined4 *)(*(longlong *)(lVar2 + 0x68) + (longlong)param_1 * 0x1c) = uVar5;
    if (!bVar3) break;
    fVar6 = (float)FUN_180102463(*(undefined4 *)(lVar4 + 0xe28),uVar7);
    param_2 = param_2 + fVar6;
    param_1 = param_1 + 1;
  }
  return;
}

