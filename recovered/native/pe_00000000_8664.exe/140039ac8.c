/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140039ac8 */

longlong * FUN_140039ac8(longlong param_1,longlong *param_2,longlong *param_3)

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
  uVar4 = FUN_140039729(plVar7,param_2[4]);
  lVar5 = (uVar4 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
  plVar7 = *(longlong **)(lVar2 + lVar5);
  plVar9 = *(longlong **)(lVar2 + 8 + lVar5);
  plVar8 = param_2;
  while( true ) {
    plVar10 = (longlong *)*plVar8;
    FUN_1400183bd(plVar8 + 2);
    thunk_FUN_14018e090(plVar8,0x40);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar8 == plVar9) break;
    if ((plVar10 == param_3) && (plVar7 == param_2)) {
      *(longlong **)(lVar2 + lVar5) = plVar10;
      goto code_r0x000140039c44;
    }
    plVar8 = plVar10;
    if (plVar10 == param_3) goto code_r0x000140039c44;
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
    uVar4 = FUN_140039729(plVar7,plVar10[4]);
    lVar5 = (uVar4 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
    plVar7 = *(longlong **)(lVar2 + 8 + lVar5);
    plVar9 = plVar10;
    while( true ) {
      plVar10 = (longlong *)*plVar9;
      FUN_1400183bd(plVar9 + 2);
      thunk_FUN_14018e090(plVar9,0x40);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      if (plVar9 == plVar7) break;
      plVar9 = plVar10;
      if (plVar10 == param_3) {
        *(longlong **)(lVar2 + lVar5) = plVar10;
        goto code_r0x000140039c44;
      }
    }
    *(undefined8 **)(lVar2 + lVar5) = puVar1;
    *(undefined8 **)(lVar2 + 8 + lVar5) = puVar1;
  }
code_r0x000140039c44:
  *puVar3 = plVar10;
  plVar10[1] = (longlong)puVar3;
  return param_3;
}

