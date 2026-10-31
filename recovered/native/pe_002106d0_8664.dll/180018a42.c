/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180018a42 */

void FUN_180018a42(ulonglong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  
  if (*param_1 != 0) {
    uVar4 = param_1[2];
    uVar2 = param_1[4];
    puVar5 = (undefined8 *)(uVar2 + uVar4 * 0x180);
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    plVar1 = (longlong *)(uVar2 + uVar4 * 0x180);
    FUN_180018b2e(plVar1 + 0xc);
    lVar3 = plVar1[0xc];
    *plVar1 = lVar3;
    plVar1[10] = lVar3 + plVar1[1];
    uVar4 = (param_1[2] + 1) % *param_1;
    param_1[2] = uVar4;
    if (uVar4 == param_1[1]) {
      uVar2 = 0;
      if (uVar4 + 1 != *param_1) {
        uVar2 = uVar4 + 1;
      }
      param_1[1] = uVar2;
      param_1[3] = param_1[3] + 1;
    }
  }
  return;
}

