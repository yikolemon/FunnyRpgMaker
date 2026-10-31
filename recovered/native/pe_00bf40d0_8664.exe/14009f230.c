/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009f230 */

ulonglong FUN_14009f230(longlong param_1,longlong *param_2,uint *param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = param_3[1];
  if ((uVar1 != 0) && (lVar3 = FUN_14008d650(), lVar3 + (int)uVar1 != 0)) {
    uVar1 = param_3[1];
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_14008d650();
      lVar3 = lVar3 + (int)uVar1;
    }
    uVar6 = 0;
    if ((*(char *)(lVar3 + 0x10) != '\0') && ((param_3[2] != 0 || ((int)*param_3 < 0)))) {
      uVar1 = *param_3;
      if (-1 < (int)uVar1) {
        param_2 = (longlong *)((longlong)(int)param_3[2] + *param_2);
      }
      if ((((char)uVar1 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_140142bc8 != 0)) {
        lVar3 = (*(code *)PTR__guard_dispatch_icall_1401200f0)();
        if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_140096cf8();
        }
        *param_2 = lVar3;
        lVar3 = FUN_14008da60(lVar3,(int *)(param_4 + 8));
        *param_2 = lVar3;
      }
      else if ((uVar1 & 8) == 0) {
        if ((*param_4 & 1) == 0) {
          iVar2 = *(int *)(param_4 + 0x18);
          uVar5 = uVar6;
          if (iVar2 != 0) {
            lVar3 = FUN_14008d690();
            uVar5 = lVar3 + iVar2;
          }
          lVar3 = *(longlong *)(param_1 + 0x28);
          if (uVar5 == 0) {
            if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_140096cf8();
            }
            iVar2 = *(int *)(param_4 + 0x14);
            puVar4 = (undefined8 *)FUN_14008da60(lVar3,(int *)(param_4 + 8));
            FUN_1400b3550(param_2,puVar4,(longlong)iVar2);
          }
          else {
            if (((lVar3 == 0) || (param_2 == (longlong *)0x0)) ||
               ((iVar2 = *(int *)(param_4 + 0x18), iVar2 == 0 ||
                (lVar3 = FUN_14008d690(), lVar3 + iVar2 == 0)))) {
                    /* WARNING: Subroutine does not return */
              FUN_140096cf8();
            }
            uVar6 = (ulonglong)(((*param_4 & 4) != 0) + 1);
          }
        }
        else {
          if ((*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) ||
             (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_140096cf8();
          }
          FUN_1400b3550(param_2,*(undefined8 **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14))
          ;
          if ((*(int *)(param_4 + 0x14) == 8) && (*param_2 != 0)) {
            lVar3 = FUN_14008da60(*param_2,(int *)(param_4 + 8));
            *param_2 = lVar3;
          }
        }
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x28);
        if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_140096cf8();
        }
        *param_2 = lVar3;
        lVar3 = FUN_14008da60(lVar3,(int *)(param_4 + 8));
        *param_2 = lVar3;
      }
      return uVar6;
    }
  }
  return 0;
}

