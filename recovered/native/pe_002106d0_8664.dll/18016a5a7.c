/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016a5a7 */

void FUN_18016a5a7(int param_1,int param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x24f8);
  if (lVar1 == 0) {
    FUN_180101698("Call should only be done while in BeginTable() scope!");
    return;
  }
  iVar4 = 0;
  if (param_2 != 0x1000000) {
    iVar4 = param_2;
  }
  if (param_1 - 1U < 2) {
    if (*(float *)(lVar1 + 0x7c) < *(float *)(lVar1 + 300) ||
        *(float *)(lVar1 + 0x7c) == *(float *)(lVar1 + 300)) {
      *(int *)(lVar1 + 0x9c + (ulonglong)(param_1 == 2) * 4) = iVar4;
    }
  }
  else if ((param_1 == 3) &&
          (*(float *)(lVar1 + 0x7c) < *(float *)(lVar1 + 300) ||
           *(float *)(lVar1 + 0x7c) == *(float *)(lVar1 + 300))) {
    if (param_3 == 0xffffffff) {
      param_3 = *(uint *)(lVar1 + 0x74);
    }
    if ((*(uint *)(*(longlong *)(lVar1 + 0x58) + (longlong)((int)param_3 >> 5) * 4) >>
         (param_3 & 0x1f) & 1) != 0) {
      sVar3 = *(short *)(lVar1 + 0x230);
      lVar2 = *(longlong *)(lVar1 + 0x38);
      if (((longlong)sVar3 < 0) || (param_3 != (int)*(short *)(lVar2 + 4 + (longlong)sVar3 * 8))) {
        sVar3 = sVar3 + 1;
        *(short *)(lVar1 + 0x230) = sVar3;
      }
      *(int *)(lVar2 + (longlong)sVar3 * 8) = iVar4;
      *(short *)(lVar2 + 4 + (longlong)sVar3 * 8) = (short)param_3;
      return;
    }
  }
  return;
}

