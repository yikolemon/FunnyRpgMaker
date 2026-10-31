/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180100266 */

void FUN_180100266(int *param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  if (param_3 != param_4) {
    iVar3 = param_1[4];
    if (((longlong)iVar3 == 0) || (*(char *)(param_2 + -1 + (longlong)iVar3) == '\n')) {
      iVar1 = *param_1;
      if (iVar1 == param_1[1]) {
        if (iVar1 == 0) {
          iVar3 = 8;
        }
        else {
          iVar3 = iVar1 / 2 + iVar1;
        }
        iVar6 = iVar1 + 1;
        if (iVar1 + 1 < iVar3) {
          iVar6 = iVar3;
        }
        lVar2 = FUN_1800fe7f8((longlong)iVar6 << 2);
        if (*(longlong *)(param_1 + 2) != 0) {
          FUN_1802a82f0(lVar2,*(longlong *)(param_1 + 2),(longlong)*param_1 << 2);
          FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
        }
        *(longlong *)(param_1 + 2) = lVar2;
        param_1[1] = iVar6;
        iVar1 = *param_1;
        iVar3 = param_1[4];
      }
      else {
        lVar2 = *(longlong *)(param_1 + 2);
      }
      *(int *)(lVar2 + (longlong)iVar1 * 4) = iVar3;
      *param_1 = *param_1 + 1;
    }
    lVar2 = FUN_1802a8150(param_2 + param_3,10,(longlong)param_4 - (longlong)param_3);
    if (lVar2 != 0) {
      uVar4 = param_4 + param_2;
      do {
        uVar5 = lVar2 + 1;
        if (uVar5 < uVar4) {
          iVar3 = *param_1;
          if (iVar3 == param_1[1]) {
            if (iVar3 == 0) {
              iVar1 = 8;
            }
            else {
              iVar1 = iVar3 / 2 + iVar3;
            }
            iVar6 = iVar3 + 1;
            if (iVar3 + 1 < iVar1) {
              iVar6 = iVar1;
            }
            lVar2 = FUN_1800fe7f8((longlong)iVar6 << 2);
            if (*(longlong *)(param_1 + 2) != 0) {
              FUN_1802a82f0(lVar2,*(longlong *)(param_1 + 2),(longlong)*param_1 << 2);
              FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
            }
            *(longlong *)(param_1 + 2) = lVar2;
            param_1[1] = iVar6;
            iVar3 = *param_1;
          }
          else {
            lVar2 = *(longlong *)(param_1 + 2);
          }
          *(int *)(lVar2 + (longlong)iVar3 * 4) = (int)uVar5 - (int)param_2;
          *param_1 = *param_1 + 1;
        }
        lVar2 = FUN_1802a8150(uVar5,10,uVar4 - uVar5);
      } while (lVar2 != 0);
    }
    iVar3 = FUN_1801003e9(param_1[4],param_4);
    param_1[4] = iVar3;
  }
  return;
}

