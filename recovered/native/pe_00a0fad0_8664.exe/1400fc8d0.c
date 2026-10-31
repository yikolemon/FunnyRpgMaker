/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400fc8d0 */

/* WARNING: Removing unreachable block (ram,0x0001400fc932) */
/* WARNING: Removing unreachable block (ram,0x0001400fc93c) */
/* WARNING: Removing unreachable block (ram,0x0001400fc944) */
/* WARNING: Removing unreachable block (ram,0x0001400fc966) */
/* WARNING: Removing unreachable block (ram,0x0001400fc96a) */
/* WARNING: Removing unreachable block (ram,0x0001400fc970) */
/* WARNING: Removing unreachable block (ram,0x0001400fc974) */

longlong * FUN_1400fc8d0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar6 = param_4 - param_3;
  uVar3 = 0;
  if (uVar6 != 0) {
    uVar4 = 0;
    uVar3 = uVar6;
    if (uVar6 != 0) goto LAB_1400fc990;
    param_2[2] = 0;
    plVar2 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar2 = (longlong *)*param_2;
    }
    *(undefined1 *)plVar2 = 0;
    while( true ) {
      plVar2 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        plVar2 = (longlong *)*param_2;
      }
      uVar3 = FUN_1401058a0(plVar2,param_2[2] + (longlong)plVar2,param_3,param_4,param_1 + 0x10);
      if (uVar3 == 0xffffffffffffffff) break;
      uVar4 = param_2[2];
      if (uVar3 <= uVar4) goto LAB_1400fc9e0;
LAB_1400fc990:
      FUN_14002548a(param_2,uVar3 - uVar4,0);
    }
    uVar3 = 0;
  }
LAB_1400fc9e0:
  uVar6 = param_2[2];
  if (uVar6 < uVar3) {
    FUN_14002548a(param_2,uVar3 - uVar6,0);
  }
  else {
    if (((uVar3 != uVar6) && (0xf < (ulonglong)param_2[3])) && (DAT_140166098 != '\0')) {
      lVar1 = *param_2;
      uVar7 = uVar6 + 1 + lVar1;
      uVar4 = lVar1 + 1 + uVar3;
      uVar5 = param_2[3] + 8U + lVar1 & 0xfffffffffffffff8;
      uVar6 = uVar5;
      if (uVar4 <= uVar5) {
        uVar6 = uVar4;
      }
      uVar4 = uVar5;
      if (uVar7 <= uVar5) {
        uVar4 = uVar7;
      }
      _guard_check_icall(lVar1,uVar5,uVar4,uVar6);
    }
    param_2[2] = uVar3;
    if ((ulonglong)param_2[3] < 0x10) {
      *(undefined1 *)((longlong)param_2 + uVar3) = 0;
    }
    else {
      *(undefined1 *)(*param_2 + uVar3) = 0;
    }
  }
  return param_2;
}

