/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018b490 */

void FUN_14018b490(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                  longlong param_4)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 uVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  if (param_4 != 0) {
    if (param_4 == 1) {
      FUN_14018b240(param_1,param_2,*(undefined2 *)*param_3);
    }
    else {
      uVar5 = param_2 - (longlong)param_1;
      uVar2 = param_4 * 2;
      if (uVar2 <= uVar5) {
        if (((DAT_140f1c694 & 0x20) == 0) || (uVar5 < 0x20)) {
          if (((DAT_140f1c694 & 4) == 0) || (uVar5 < 0x10)) {
            pauVar8 = (undefined1 (*) [16])((longlong)param_1 + uVar5 + param_4 * -2 + 2);
            if (param_1 != pauVar8) {
              do {
                if (*(short *)*param_1 == *(short *)*param_3) {
                  lVar6 = 1;
                  while (*(short *)(*param_1 + lVar6 * 2) == *(short *)(*param_3 + lVar6 * 2)) {
                    lVar6 = lVar6 + 1;
                    if (lVar6 == param_4) goto LAB_14018b653;
                  }
                }
                param_1 = (undefined1 (*) [16])(*param_1 + 2);
              } while (param_1 != pauVar8);
            }
          }
          else if (uVar2 < 0x11) {
            uVar3 = (uint)param_4;
            uVar9 = 8 < uVar3;
            FUN_1401c5180(local_58,param_3,uVar2);
            auVar1 = local_58;
            do {
              iVar4 = pcmpestri(local_58,*param_1,0xd,uVar3,8);
              if ((bool)uVar9) {
                param_1 = (undefined1 (*) [16])(*param_1 + (longlong)iVar4 * 2);
                if (iVar4 <= (int)(8 - uVar3)) goto LAB_14018b653;
              }
              else {
                param_1 = param_1 + 1;
              }
              uVar9 = param_1 < (undefined1 (*) [16])(param_2 - 0x10U);
            } while (param_1 <= (undefined1 (*) [16])(param_2 - 0x10U));
            if (param_2 - (longlong)param_1 != 0) {
              FUN_1401c5180(local_58,param_1);
              pcmpestri(auVar1,local_58,0xd,uVar3,
                        (int)((ulonglong)(param_2 - (longlong)param_1) >> 1));
            }
          }
          else {
            auVar1 = *param_3;
            uVar7 = (longlong)param_1 + param_4 * -2;
            bVar10 = CARRY8(uVar7,uVar5);
            pauVar8 = (undefined1 (*) [16])(uVar7 + uVar5);
            do {
              iVar4 = pcmpestri(auVar1,*param_1,0xd,8,8);
              if (bVar10) {
                if (iVar4 == 0) {
LAB_14018b61b:
                  iVar4 = memcmp(param_1 + 1,param_3 + 1,uVar2 - 0x10);
                  if (iVar4 == 0) break;
                }
                else {
                  param_1 = (undefined1 (*) [16])(*param_1 + (longlong)iVar4 * 2);
                  if (pauVar8 < param_1) break;
                  auVar11._0_4_ = auVar1._0_4_ ^ *(uint *)*param_1;
                  auVar11._4_4_ = auVar1._4_4_ ^ *(uint *)(*param_1 + 4);
                  auVar11._8_4_ = auVar1._8_4_ ^ *(uint *)(*param_1 + 8);
                  auVar11._12_4_ = auVar1._12_4_ ^ *(uint *)(*param_1 + 0xc);
                  if (auVar11 == (undefined1  [16])0x0) goto LAB_14018b61b;
                }
                param_1 = (undefined1 (*) [16])(*param_1 + 2);
              }
              else {
                param_1 = param_1 + 1;
              }
              bVar10 = param_1 < pauVar8;
            } while (param_1 <= pauVar8);
          }
        }
        else {
          FUN_14018b9d0(param_1,param_2,param_3,uVar2);
        }
      }
    }
  }
LAB_14018b653:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
}

