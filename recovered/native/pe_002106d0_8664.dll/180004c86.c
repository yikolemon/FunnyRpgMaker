/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180004c86 */

void thunk_FUN_18023b6c0(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                        ulonglong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulonglong uVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  if (param_4 != 0) {
    if (param_4 == 1) {
      FUN_18023aef0(param_1,param_2,(*param_3)[0]);
    }
    else {
      uVar3 = param_2 - (longlong)param_1;
      if (param_4 <= uVar3) {
        if ((((byte)DAT_1804039dc & 4) == 0) || (uVar3 < 0x10)) {
          pauVar4 = (undefined1 (*) [16])((longlong)param_1 + uVar3 + (1 - param_4));
          if (param_1 != pauVar4) {
            do {
              if ((*param_1)[0] == (*param_3)[0]) {
                uVar3 = 1;
                while ((*param_1)[uVar3] == (*param_3)[uVar3]) {
                  uVar3 = uVar3 + 1;
                  if (uVar3 == param_4) goto LAB_18023b847;
                }
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 1);
            } while (param_1 != pauVar4);
          }
        }
        else if (param_4 < 0x11) {
          uVar5 = (uint)param_4;
          uVar6 = 0x10 < uVar5;
          FUN_1802a82f0(auStack_58,param_3,param_4);
          auVar1 = auStack_58;
          do {
            iVar2 = pcmpestri(auStack_58,*param_1,0xc,uVar5,0x10);
            if ((bool)uVar6) {
              param_1 = (undefined1 (*) [16])(*param_1 + iVar2);
              if (iVar2 <= (int)(0x10 - uVar5)) goto LAB_18023b847;
            }
            else {
              param_1 = param_1 + 1;
            }
            uVar6 = param_1 < (undefined1 (*) [16])(param_2 - 0x10U);
          } while (param_1 <= (undefined1 (*) [16])(param_2 - 0x10U));
          param_2 = param_2 - (longlong)param_1;
          if (param_2 != 0) {
            FUN_1802a82f0(auStack_58,param_1,param_2);
            pcmpestri(auVar1,auStack_58,0xc,uVar5,(int)param_2);
          }
        }
        else {
          auVar1 = *param_3;
          bVar7 = CARRY8((longlong)param_1 - param_4,uVar3);
          pauVar4 = (undefined1 (*) [16])(((longlong)param_1 - param_4) + uVar3);
          do {
            iVar2 = pcmpestri(auVar1,*param_1,0xc,0x10,0x10);
            if (bVar7) {
              if (iVar2 == 0) {
LAB_18023b819:
                iVar2 = memcmp(param_1 + 1,param_3 + 1,param_4 - 0x10);
                if (iVar2 == 0) break;
              }
              else {
                param_1 = (undefined1 (*) [16])(*param_1 + iVar2);
                if (pauVar4 < param_1) break;
                auVar8._0_4_ = auVar1._0_4_ ^ *(uint *)*param_1;
                auVar8._4_4_ = auVar1._4_4_ ^ *(uint *)(*param_1 + 4);
                auVar8._8_4_ = auVar1._8_4_ ^ *(uint *)(*param_1 + 8);
                auVar8._12_4_ = auVar1._12_4_ ^ *(uint *)(*param_1 + 0xc);
                if (auVar8 == (undefined1  [16])0x0) goto LAB_18023b819;
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 1);
            }
            else {
              param_1 = param_1 + 1;
            }
            bVar7 = param_1 < pauVar4;
          } while (param_1 <= pauVar4);
        }
      }
    }
  }
LAB_18023b847:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(uStack_48 ^ (ulonglong)auStack_78);
}

