/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400da9a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400da9a0(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 uVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if ((0x3f < uVar6) && (((byte)DAT_1401ca374 & 0x20) != 0)) {
    puVar4 = *param_1;
    do {
      auVar2 = vpermq_avx2(*param_1,0x4e);
      auVar2 = vpshufb_avx2(auVar2,_DAT_140162ea0);
      auVar3 = vpermq_avx2(param_2[-1],0x4e);
      auVar3 = vpshufb_avx2(auVar3,_DAT_140162ea0);
      param_2 = param_2 + -1;
      *param_1 = auVar3;
      param_1 = param_1 + 1;
      *param_2 = auVar2;
    } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 >> 1 & 0x7fffffffffffffe0)));
  }
  auVar5 = _DAT_140162e20;
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if ((0x1f < uVar6) && (((byte)DAT_1401ca374 & 4) != 0)) {
    puVar4 = *param_1;
    do {
      param_2 = (undefined1 (*) [32])(param_2[-1] + 0x10);
      auVar8 = pshufb(*(undefined1 (*) [16])*param_1,auVar5);
      auVar7 = pshufb(*(undefined1 (*) [16])*param_2,auVar5);
      *(undefined1 (*) [16])*param_1 = auVar7;
      param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      *(undefined1 (*) [16])*param_2 = auVar8;
    } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 >> 1 & 0x7ffffffffffffff0)));
  }
  if (param_1 != param_2) {
    do {
      param_2 = (undefined1 (*) [32])(param_2[-1] + 0x1f);
      if (param_1 == param_2) {
        return;
      }
      uVar1 = (*param_1)[0];
      (*param_1)[0] = (*param_2)[0];
      param_1 = (undefined1 (*) [32])(*param_1 + 1);
      (*param_2)[0] = uVar1;
    } while (param_1 != param_2);
  }
  return;
}

