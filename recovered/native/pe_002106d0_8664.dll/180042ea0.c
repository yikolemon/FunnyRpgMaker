/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180042ea0 */

void FUN_180042ea0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)*param_1;
  if ((ulonglong)((param_1[2] - (longlong)plVar1 >> 7) * -0x5555555555555555) < param_3) {
    FUN_180042fbc(param_1,param_3);
    plVar3 = (longlong *)*param_1;
    uVar5 = param_3;
  }
  else {
    plVar3 = (longlong *)param_1[1];
    lVar2 = (longlong)plVar3 - (longlong)plVar1 >> 7;
    uVar5 = param_3 + lVar2 * 0x5555555555555555;
    if (param_3 < (ulonglong)(lVar2 * -0x5555555555555555) || uVar5 == 0) {
      FUN_180043158(param_2,param_3,plVar1);
      plVar3 = (longlong *)param_1[1];
      plVar1 = plVar1 + param_3 * 0x30;
      for (plVar4 = plVar1; plVar4 != plVar3; plVar4 = plVar4 + 0x30) {
        FUN_180018aca(plVar4);
      }
      goto LAB_180042f6d;
    }
    if (plVar1 != plVar3) {
      do {
        plVar3 = param_2;
        plVar4 = plVar1;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *plVar4 = *plVar3;
          plVar3 = plVar3 + 1;
          plVar4 = plVar4 + 1;
        }
        plVar1[0xd] = 0;
        FUN_180018bde(plVar1 + 0xc,param_2[0xc],param_2[0xd] + param_2[0xc]);
        *plVar1 = plVar1[0xc];
        plVar1[10] = plVar1[0xc] + plVar1[1];
        param_2 = param_2 + 0x30;
        plVar3 = (longlong *)param_1[1];
        plVar1 = plVar1 + 0x30;
      } while (plVar1 != plVar3);
    }
  }
  plVar1 = (longlong *)FUN_1800430a4(param_2,uVar5,plVar3,param_1);
LAB_180042f6d:
  param_1[1] = plVar1;
  return;
}

