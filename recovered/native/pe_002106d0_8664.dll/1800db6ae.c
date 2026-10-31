/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800db6ae */

void FUN_1800db6ae(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar7 = param_3;
  do {
    plVar5 = plVar7;
    if (plVar5 <= param_2) break;
    plVar7 = plVar5 + -1;
  } while (*plVar5 == plVar5[-1]);
  do {
    param_3 = param_3 + 1;
    plVar4 = param_3;
    plVar7 = plVar5;
    if (param_4 <= param_3) break;
  } while (*plVar5 == *param_3);
LAB_1800db6ea:
  do {
    plVar6 = plVar5;
    if (plVar4 < param_4) {
      lVar3 = *plVar4;
      if (lVar3 <= *plVar7) {
        if (lVar3 < *plVar7) goto joined_r0x0001800db717;
        if (plVar4 != param_3) {
          lVar2 = *param_3;
          *param_3 = lVar3;
          *plVar4 = lVar2;
        }
        param_3 = param_3 + 1;
      }
      plVar4 = plVar4 + 1;
      goto LAB_1800db6ea;
    }
joined_r0x0001800db717:
    while (plVar5 = plVar6, param_2 < plVar5) {
      plVar6 = plVar5 + -1;
      lVar3 = plVar5[-1];
      if (*plVar7 <= lVar3) {
        if (*plVar7 < lVar3) break;
        plVar1 = plVar7 + -1;
        bVar8 = plVar5 != plVar7;
        plVar7 = plVar1;
        if (bVar8) {
          lVar2 = *plVar1;
          *plVar1 = lVar3;
          *plVar6 = lVar2;
        }
      }
    }
    if (plVar4 == param_4 && plVar5 == param_2) {
      *param_1 = plVar7;
      param_1[1] = param_3;
      return;
    }
    if (plVar5 == param_2) {
      lVar3 = *plVar7;
      if (param_3 != plVar4) {
        *plVar7 = *param_3;
        *param_3 = lVar3;
        lVar3 = *plVar7;
      }
      param_3 = param_3 + 1;
      *plVar7 = *plVar4;
      *plVar4 = lVar3;
      plVar4 = plVar4 + 1;
      plVar7 = plVar7 + 1;
    }
    else {
      plVar6 = plVar5 + -1;
      if (plVar4 == param_4) {
        plVar1 = plVar7 + -1;
        lVar3 = plVar7[-1];
        if (plVar5 != plVar7) {
          lVar3 = *plVar6;
          *plVar6 = plVar7[-1];
          *plVar1 = lVar3;
        }
        *plVar1 = param_3[-1];
        param_3[-1] = lVar3;
        param_3 = param_3 + -1;
        plVar5 = plVar6;
        plVar7 = plVar1;
      }
      else {
        lVar3 = *plVar4;
        *plVar4 = *plVar6;
        *plVar6 = lVar3;
        plVar4 = plVar4 + 1;
        plVar5 = plVar6;
      }
    }
  } while( true );
}

