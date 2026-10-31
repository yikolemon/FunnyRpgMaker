/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140038b52 */

void FUN_140038b52(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)*param_1;
  if ((ulonglong)((param_1[2] - (longlong)plVar1 >> 7) * -0x5555555555555555) < param_3) {
    FUN_140038c6e(param_1,param_3);
    plVar3 = (longlong *)*param_1;
    uVar5 = param_3;
  }
  else {
    plVar3 = (longlong *)param_1[1];
    lVar2 = (longlong)plVar3 - (longlong)plVar1 >> 7;
    uVar5 = param_3 + lVar2 * 0x5555555555555555;
    if (param_3 < (ulonglong)(lVar2 * -0x5555555555555555) || uVar5 == 0) {
      FUN_140038e0a(param_2,param_3,plVar1);
      plVar3 = (longlong *)param_1[1];
      plVar1 = plVar1 + param_3 * 0x30;
      for (plVar4 = plVar1; plVar4 != plVar3; plVar4 = plVar4 + 0x30) {
        FUN_1400386c0(plVar4);
      }
      goto LAB_140038c1f;
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
        FUN_140019fc2(plVar1 + 0xc,param_2[0xc],param_2[0xd] + param_2[0xc]);
        *plVar1 = plVar1[0xc];
        plVar1[10] = plVar1[0xc] + plVar1[1];
        param_2 = param_2 + 0x30;
        plVar3 = (longlong *)param_1[1];
        plVar1 = plVar1 + 0x30;
      } while (plVar1 != plVar3);
    }
  }
  plVar1 = (longlong *)FUN_140038d56(param_2,uVar5,plVar3,param_1);
LAB_140038c1f:
  param_1[1] = plVar1;
  return;
}

