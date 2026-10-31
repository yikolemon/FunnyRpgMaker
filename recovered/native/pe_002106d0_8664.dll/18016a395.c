/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016a395 */

void FUN_18016a395(undefined8 param_1,short param_2)

{
  float *pfVar1;
  longlong lVar2;
  undefined2 uVar3;
  uint uVar4;
  short sVar5;
  undefined2 uVar6;
  
  lVar2 = *(longlong *)(DAT_180419160 + 0x24f8);
  if (lVar2 != 0) {
    uVar4 = *(uint *)(lVar2 + 4);
    uVar3 = 0;
    if ((uVar4 >> 0x18 & 1) != 0) {
      uVar3 = FUN_1800fed00(param_1,*(undefined4 *)(lVar2 + 0x6c));
      uVar4 = *(uint *)(lVar2 + 4);
    }
    *(undefined2 *)(lVar2 + 0x22c) = uVar3;
    pfVar1 = (float *)(*(longlong *)(lVar2 + 0x188) + 0xd4);
    uVar6 = 0;
    if (*pfVar1 != 0.0) {
      uVar6 = uVar3;
    }
    if (NAN(*pfVar1)) {
      uVar6 = uVar3;
    }
    *(undefined2 *)(lVar2 + 0x22e) = uVar6;
    if ((uVar4 >> 0x19 & 1) == 0) {
      param_2 = 0;
    }
    *(short *)(lVar2 + 0x228) = param_2;
    pfVar1 = (float *)(*(longlong *)(lVar2 + 0x188) + 0xd8);
    sVar5 = 0;
    if (*pfVar1 != 0.0) {
      sVar5 = param_2;
    }
    if (NAN(*pfVar1)) {
      sVar5 = param_2;
    }
    *(short *)(lVar2 + 0x22a) = sVar5;
    *(bool *)(lVar2 + 0x245) = sVar5 == 0;
    return;
  }
  FUN_180101698("Call should only be done while in BeginTable() scope!");
  return;
}

