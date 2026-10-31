/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006142e */

longlong * FUN_18006142e(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (param_2 == param_3) {
    return param_3;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined8 *)param_2[1];
  uVar5 = FUN_1800611df(param_2 + 2);
  lVar6 = (uVar5 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
  plVar4 = *(longlong **)(lVar2 + lVar6);
  plVar9 = *(longlong **)(lVar2 + 8 + lVar6);
  plVar8 = param_2;
  while( true ) {
    plVar10 = (longlong *)*plVar8;
    thunk_FUN_1802464a0(plVar8,0x20);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar8 == plVar9) break;
    if ((plVar10 == param_3) && (plVar4 == param_2)) {
      *(longlong **)(lVar2 + lVar6) = plVar10;
      goto code_r0x00018006155f;
    }
    plVar8 = plVar10;
    if (plVar10 == param_3) goto code_r0x00018006155f;
  }
  puVar7 = puVar3;
  if (plVar4 == param_2) {
    *(undefined8 **)(lVar2 + lVar6) = puVar1;
    puVar7 = puVar1;
  }
  *(undefined8 **)(lVar2 + 8 + lVar6) = puVar7;
  while (plVar10 != param_3) {
    uVar5 = FUN_1800611df(plVar10 + 2);
    lVar6 = (uVar5 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
    plVar4 = *(longlong **)(lVar2 + 8 + lVar6);
    plVar9 = plVar10;
    while( true ) {
      plVar10 = (longlong *)*plVar9;
      thunk_FUN_1802464a0(plVar9,0x20);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      if (plVar9 == plVar4) break;
      plVar9 = plVar10;
      if (plVar10 == param_3) {
        *(longlong **)(lVar2 + lVar6) = plVar10;
        goto code_r0x00018006155f;
      }
    }
    *(undefined8 **)(lVar2 + lVar6) = puVar1;
    *(undefined8 **)(lVar2 + 8 + lVar6) = puVar1;
  }
code_r0x00018006155f:
  *puVar3 = plVar10;
  plVar10[1] = (longlong)puVar3;
  return param_3;
}

