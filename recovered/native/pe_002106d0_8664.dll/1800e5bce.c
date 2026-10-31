/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e5bce */

void FUN_1800e5bce(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  
  param_1[2] = 0;
  param_1[3] = 0xf;
  do {
    cVar4 = thunk_FUN_1800e5dc6(param_2,param_3);
    if (cVar4 != '\0') {
      plVar7 = param_1 + 2;
      if (0xf < (ulonglong)param_1[3]) {
        param_1 = (longlong *)*param_1;
      }
      *(undefined1 *)((longlong)param_1 + *plVar7) = 0;
      return;
    }
    uVar1 = param_1[2];
    uVar10 = param_1[3];
    if (uVar1 == uVar10) {
      if (uVar1 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_1800013a5();
      }
      plVar11 = param_1;
      if (0xf < uVar1) {
        plVar11 = (longlong *)*param_1;
      }
      uVar10 = 0x7fffffffffffffff;
      if (-2 < (longlong)uVar1) {
        uVar10 = 0x7fffffffffffffff;
        if (uVar1 <= (uVar1 >> 1 ^ 0x7fffffffffffffff)) {
          uVar8 = uVar1 + 1 | 0xf;
          uVar10 = (uVar1 >> 1) + uVar1;
          if (uVar10 < uVar8) {
            uVar10 = uVar8;
          }
        }
      }
      plVar7 = (longlong *)FUN_1800013e0(uVar10 + 1);
      FUN_1802a82f0(plVar7,plVar11,param_1[2]);
      uVar1 = param_1[3];
      if (0xf < uVar1) {
        lVar2 = *param_1;
        uVar8 = uVar1 + 1;
        lVar9 = lVar2;
        if (0xfff < uVar8) {
          lVar9 = *(longlong *)(lVar2 + -8);
          if (0x1f < (ulonglong)((lVar2 + -8) - lVar9)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar8 = uVar1 + 0x28;
        }
        thunk_FUN_1802464a0(lVar9,uVar8);
      }
      *param_1 = (longlong)plVar7;
      param_1[3] = uVar10;
    }
    else {
      plVar7 = (longlong *)*param_1;
    }
    if (uVar10 < 0x10) {
      plVar7 = param_1;
    }
    if ((char)param_2[1] == '\0') {
      FUN_1800e5e14(param_2);
    }
    *(undefined1 *)((longlong)plVar7 + param_1[2]) = *(undefined1 *)((longlong)param_2 + 9);
    param_1[2] = param_1[2] + 1;
    if ((*param_2 == 0) || (iVar6 = FUN_18008385e(), iVar6 == -1)) {
      *param_2 = 0;
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    *(undefined1 *)(param_2 + 1) = uVar5;
  } while( true );
}

