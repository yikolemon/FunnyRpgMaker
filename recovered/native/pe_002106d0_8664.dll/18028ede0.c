/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028ede0 */

ulonglong FUN_18028ede0(longlong param_1,longlong *param_2,uint *param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = param_3[1];
  if ((uVar1 != 0) && (lVar3 = FUN_18026e580(), lVar3 + (int)uVar1 != 0)) {
    uVar1 = param_3[1];
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_18026e580();
      lVar3 = lVar3 + (int)uVar1;
    }
    uVar6 = 0;
    if ((*(char *)(lVar3 + 0x10) != '\0') && ((param_3[2] != 0 || ((int)*param_3 < 0)))) {
      uVar1 = *param_3;
      if (-1 < (int)uVar1) {
        param_2 = (longlong *)((longlong)(int)param_3[2] + *param_2);
      }
      if ((((char)uVar1 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_180420d68 != 0)) {
        lVar3 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *param_2 = lVar3;
        lVar3 = FUN_18026d740(lVar3,param_4 + 8);
        *param_2 = lVar3;
      }
      else if ((uVar1 & 8) == 0) {
        if ((*param_4 & 1) == 0) {
          iVar2 = *(int *)(param_4 + 0x18);
          uVar5 = uVar6;
          if (iVar2 != 0) {
            lVar3 = FUN_18026e5c0();
            uVar5 = lVar3 + iVar2;
          }
          lVar3 = *(longlong *)(param_1 + 0x28);
          if (uVar5 == 0) {
            if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            iVar2 = *(int *)(param_4 + 0x14);
            uVar4 = FUN_18026d740(lVar3,param_4 + 8);
            FUN_1802a82f0(param_2,uVar4,(longlong)iVar2);
          }
          else {
            if (((lVar3 == 0) || (param_2 == (longlong *)0x0)) ||
               ((iVar2 = *(int *)(param_4 + 0x18), iVar2 == 0 ||
                (lVar3 = FUN_18026e5c0(), lVar3 + iVar2 == 0)))) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar6 = (ulonglong)(((*param_4 & 4) != 0) + 1);
          }
        }
        else {
          if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          FUN_1802a82f0(param_2,*(longlong *)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
          if ((*(int *)(param_4 + 0x14) == 8) && (*param_2 != 0)) {
            lVar3 = FUN_18026d740(*param_2,param_4 + 8);
            *param_2 = lVar3;
          }
        }
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x28);
        if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *param_2 = lVar3;
        lVar3 = FUN_18026d740(lVar3,param_4 + 8);
        *param_2 = lVar3;
      }
      return uVar6;
    }
  }
  return 0;
}

