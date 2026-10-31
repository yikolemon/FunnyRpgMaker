/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102297c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_102297d0(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 uVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 *puVar4;
  undefined1 (*pauVar5) [32];
  undefined1 auVar6 [16];
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar7 = (int)param_2 - (int)param_1;
  if ((0x3f < uVar7) && (((byte)DAT_10389df8 & 0x20) != 0)) {
    puVar4 = *param_1;
    do {
      auVar2 = vpermq_avx2(*param_1,0x4e);
      auVar2 = vpshufb_avx2(auVar2,_DAT_10299900);
      auVar3 = vpermq_avx2(param_2[-1],0x4e);
      auVar3 = vpshufb_avx2(auVar3,_DAT_10299900);
      param_2 = param_2 + -1;
      *param_1 = auVar3;
      param_1 = param_1 + 1;
      *param_2 = auVar2;
    } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar7 >> 1 & 0xffffffe0)));
  }
  auVar6 = _DAT_10299890;
  uVar7 = (int)param_2 - (int)param_1;
  if ((0x1f < uVar7) && (((byte)DAT_10389df8 & 4) != 0)) {
    puVar4 = *param_1;
    do {
      pauVar5 = param_2 + -1;
      param_2 = (undefined1 (*) [32])(param_2[-1] + 0x10);
      auVar8 = pshufb(*(undefined1 (*) [16])(*pauVar5 + 0x10),auVar6);
      auVar9 = pshufb(*(undefined1 (*) [16])*param_1,auVar6);
      *(undefined1 (*) [16])*param_1 = auVar8;
      param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      *(undefined1 (*) [16])*param_2 = auVar9;
    } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar7 >> 1 & 0xfffffff0)));
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

