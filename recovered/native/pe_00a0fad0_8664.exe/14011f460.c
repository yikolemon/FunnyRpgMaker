/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011f460 */

ulonglong FUN_14011f460(longlong param_1,longlong *param_2,longlong param_3,byte *param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_3 + 8);
  if ((iVar1 != 0) && (lVar3 = FUN_1401070c0(), lVar3 + iVar1 != 0)) {
    iVar1 = *(int *)(param_3 + 8);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_1401070c0();
      lVar3 = lVar3 + iVar1;
    }
    uVar6 = 0;
    if ((*(char *)(lVar3 + 0x10) != '\0') &&
       ((*(uint *)(param_3 + 0xc) != 0 || (*(int *)(param_3 + 4) < 0)))) {
      uVar2 = *(uint *)(param_3 + 4);
      if (-1 < (int)uVar2) {
        param_2 = (longlong *)((ulonglong)*(uint *)(param_3 + 0xc) + *param_2);
      }
      if ((((char)uVar2 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_140354b08 != 0)) {
        lVar3 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_140115938();
        }
        *param_2 = lVar3;
        lVar3 = FUN_140107cb0(lVar3,param_4 + 8);
        *param_2 = lVar3;
      }
      else if ((uVar2 & 8) == 0) {
        if ((*param_4 & 1) == 0) {
          iVar1 = *(int *)(param_4 + 0x18);
          uVar5 = uVar6;
          if (iVar1 != 0) {
            lVar3 = FUN_140107100();
            uVar5 = lVar3 + iVar1;
          }
          lVar3 = *(longlong *)(param_1 + 0x28);
          if (uVar5 == 0) {
            if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_140115938();
            }
            iVar1 = *(int *)(param_4 + 0x14);
            uVar4 = FUN_140107cb0(lVar3,param_4 + 8);
            FUN_140135ff0(param_2,uVar4,(longlong)iVar1);
          }
          else {
            if (((lVar3 == 0) || (param_2 == (longlong *)0x0)) ||
               ((iVar1 = *(int *)(param_4 + 0x18), iVar1 == 0 ||
                (lVar3 = FUN_140107100(), lVar3 + iVar1 == 0)))) {
                    /* WARNING: Subroutine does not return */
              FUN_140115938();
            }
            uVar6 = (ulonglong)(((*param_4 & 4) != 0) + 1);
          }
        }
        else {
          if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_140115938();
          }
          FUN_140135ff0(param_2,*(longlong *)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
          if ((*(int *)(param_4 + 0x14) == 8) && (*param_2 != 0)) {
            lVar3 = FUN_140107cb0(*param_2,param_4 + 8);
            *param_2 = lVar3;
          }
        }
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x28);
        if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_140115938();
        }
        *param_2 = lVar3;
        lVar3 = FUN_140107cb0(lVar3,param_4 + 8);
        *param_2 = lVar3;
      }
      return uVar6;
    }
  }
  return 0;
}

