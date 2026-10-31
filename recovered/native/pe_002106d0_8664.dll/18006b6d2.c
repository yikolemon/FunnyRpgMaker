/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006b6d2 */

longlong * FUN_18006b6d2(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (param_2 == param_3) {
    return param_3;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined8 *)param_2[1];
  if ((ulonglong)param_2[5] < 0x10) {
    plVar7 = param_2 + 2;
  }
  else {
    plVar7 = (longlong *)param_2[2];
  }
  uVar4 = FUN_18001c5bb(plVar7,param_2[4]);
  lVar5 = (uVar4 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
  plVar7 = *(longlong **)(lVar2 + lVar5);
  plVar9 = *(longlong **)(lVar2 + 8 + lVar5);
  plVar8 = param_2;
  while( true ) {
    plVar10 = (longlong *)*plVar8;
    FUN_18001828d(plVar8 + 2);
    thunk_FUN_1802464a0(plVar8,0x38);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar8 == plVar9) break;
    if ((plVar10 == param_3) && (plVar7 == param_2)) {
      *(longlong **)(lVar2 + lVar5) = plVar10;
      goto code_r0x00018006b84e;
    }
    plVar8 = plVar10;
    if (plVar10 == param_3) goto code_r0x00018006b84e;
  }
  puVar6 = puVar3;
  if (plVar7 == param_2) {
    *(undefined8 **)(lVar2 + lVar5) = puVar1;
    puVar6 = puVar1;
  }
  *(undefined8 **)(lVar2 + 8 + lVar5) = puVar6;
  while (plVar10 != param_3) {
    if ((ulonglong)plVar10[5] < 0x10) {
      plVar7 = plVar10 + 2;
    }
    else {
      plVar7 = (longlong *)plVar10[2];
    }
    uVar4 = FUN_18001c5bb(plVar7,plVar10[4]);
    lVar5 = (uVar4 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
    plVar7 = *(longlong **)(lVar2 + 8 + lVar5);
    plVar9 = plVar10;
    while( true ) {
      plVar10 = (longlong *)*plVar9;
      FUN_18001828d(plVar9 + 2);
      thunk_FUN_1802464a0(plVar9,0x38);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      if (plVar9 == plVar7) break;
      plVar9 = plVar10;
      if (plVar10 == param_3) {
        *(longlong **)(lVar2 + lVar5) = plVar10;
        goto code_r0x00018006b84e;
      }
    }
    *(undefined8 **)(lVar2 + lVar5) = puVar1;
    *(undefined8 **)(lVar2 + 8 + lVar5) = puVar1;
  }
code_r0x00018006b84e:
  *puVar3 = plVar10;
  plVar10[1] = (longlong)puVar3;
  return param_3;
}

