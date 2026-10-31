/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180233d80 */

int FUN_180233d80(undefined8 *param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_44 = 0;
  if (param_1 == (undefined8 *)0x0) {
    iVar8 = 0x21;
  }
  else {
    iVar8 = 6;
    if (param_3 != (int *)0x0 && param_2 != (int *)0x0) {
      iVar8 = 0;
      if (param_2 != param_3) {
        if (param_2[2] < 0) {
          bVar13 = 0 < param_3[2];
        }
        else if (param_2[2] == 0) {
          bVar13 = false;
        }
        else {
          bVar13 = SUB41((uint)param_3[2] >> 0x1f,0);
        }
        uVar1 = *param_1;
        FUN_1801c9b65(uVar1,*(undefined8 *)(param_3 + 4));
        param_3[4] = 0;
        param_3[5] = 0;
        iVar8 = param_2[1];
        iVar12 = param_2[2];
        iVar2 = param_2[3];
        iVar3 = param_2[4];
        iVar4 = param_2[5];
        iVar5 = param_2[6];
        iVar6 = param_2[7];
        *param_3 = *param_2;
        param_3[1] = iVar8;
        param_3[2] = iVar12;
        param_3[3] = iVar2;
        *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
        param_3[4] = iVar3;
        param_3[5] = iVar4;
        param_3[6] = iVar5;
        param_3[7] = iVar6;
        if (bVar13 != false) {
          param_3[2] = -param_3[2];
        }
        iVar8 = 0;
        if (*(longlong *)(param_2 + 4) != 0) {
          uVar9 = -param_2[2];
          if ((int)uVar9 < 0) {
            uVar9 = param_2[2];
          }
          local_50 = &local_44;
          local_58 = 0;
          lVar7 = FUN_1801cc8d6(uVar1,uVar9,0,*param_3);
          *(longlong *)(param_3 + 4) = lVar7;
          iVar8 = local_44;
          if (local_44 == 0) {
            if (bVar13 == false) {
              FUN_1802a82f0(lVar7,*(undefined8 *)(param_2 + 4),
                            (longlong)(int)uVar9 * (longlong)*param_2);
              iVar8 = local_44;
            }
            else {
              iVar12 = *param_3;
              if (iVar12 != 0) {
                lVar7 = lVar7 + (ulonglong)((iVar12 + -1) * uVar9);
                lVar10 = *(longlong *)(param_2 + 4);
                uVar11 = (ulonglong)uVar9;
                do {
                  FUN_1802a82f0(lVar7,lVar10,uVar11);
                  lVar10 = lVar10 + uVar11;
                  lVar7 = lVar7 - uVar11;
                  iVar12 = iVar12 + -1;
                  iVar8 = local_44;
                } while (iVar12 != 0);
              }
            }
          }
        }
      }
    }
  }
  if (DAT_180402640 != (local_40 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_40 ^ (ulonglong)auStack_78);
  }
  return iVar8;
}

