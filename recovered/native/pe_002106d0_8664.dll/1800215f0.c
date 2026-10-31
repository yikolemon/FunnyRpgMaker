/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800215f0 */

undefined1 (*) [16]
FUN_1800215f0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             undefined1 (*param_4) [16],longlong param_5,ulonglong param_6)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  uint uVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_58 [16];
  ulonglong uStack_48;
  
  if ((param_6 & 0x100) != 0) {
    pauVar8 = param_2;
    if (((longlong)param_4 - (longlong)param_3 <= (longlong)param_2 - (longlong)param_1) &&
       (pauVar8 = param_1, param_3 != param_4)) {
      while( true ) {
        lVar7 = 0;
        while( true ) {
          cVar2 = (*param_3)[lVar7];
          uStack_70 = 0x1800216d9;
          cVar4 = (**(code **)(**(longlong **)(param_5 + 8) + 0x20))
                            (*(longlong **)(param_5 + 8),(*param_1)[lVar7]);
          if (cVar4 != cVar2) break;
          lVar3 = lVar7 + 1;
          lVar7 = lVar7 + 1;
          if ((undefined1 (*) [16])(*param_3 + lVar3) == param_4) {
            return param_1;
          }
        }
        pauVar8 = param_2;
        if (param_1 ==
            (undefined1 (*) [16])((longlong)param_2 - ((longlong)param_4 - (longlong)param_3)))
        break;
        param_1 = (undefined1 (*) [16])(*param_1 + 1);
      }
    }
    return pauVar8;
  }
  uVar10 = (longlong)param_4 - (longlong)param_3;
  if ((longlong)param_2 - (longlong)param_1 < (longlong)uVar10) {
    return param_2;
  }
  uStack_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  if (uVar10 != 0) {
    if (uVar10 == 1) {
      FUN_18023aef0(param_1,param_2,(*param_3)[0]);
    }
    else {
      uVar6 = (longlong)param_2 - (longlong)param_1;
      if (uVar10 <= uVar6) {
        if ((((byte)DAT_1804039dc & 4) == 0) || (uVar6 < 0x10)) {
          pauVar8 = (undefined1 (*) [16])((longlong)param_1 + uVar6 + (1 - uVar10));
          if (param_1 != pauVar8) {
            do {
              if ((*param_1)[0] == (*param_3)[0]) {
                uVar6 = 1;
                while ((*param_1)[uVar6] == (*param_3)[uVar6]) {
                  uVar6 = uVar6 + 1;
                  if (uVar6 == uVar10) goto LAB_18023b847;
                }
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 1);
            } while (param_1 != pauVar8);
          }
        }
        else if (uVar10 < 0x11) {
          uVar9 = (uint)uVar10;
          uVar11 = 0x10 < uVar9;
          FUN_1802a82f0(auStack_58,param_3,uVar10);
          auVar1 = auStack_58;
          do {
            iVar5 = pcmpestri(auStack_58,*param_1,0xc,uVar9,0x10);
            if ((bool)uVar11) {
              param_1 = (undefined1 (*) [16])(*param_1 + iVar5);
              if (iVar5 <= (int)(0x10 - uVar9)) goto LAB_18023b847;
            }
            else {
              param_1 = param_1 + 1;
            }
            uVar11 = param_1 < param_2 + -1;
          } while (param_1 <= param_2 + -1);
          lVar7 = (longlong)param_2 - (longlong)param_1;
          if (lVar7 != 0) {
            FUN_1802a82f0(auStack_58,param_1,lVar7);
            pcmpestri(auVar1,auStack_58,0xc,uVar9,(int)lVar7);
          }
        }
        else {
          auVar1 = *param_3;
          bVar12 = CARRY8((longlong)param_1 - uVar10,uVar6);
          pauVar8 = (undefined1 (*) [16])(((longlong)param_1 - uVar10) + uVar6);
          do {
            iVar5 = pcmpestri(auVar1,*param_1,0xc,0x10,0x10);
            if (bVar12) {
              if (iVar5 == 0) {
LAB_18023b819:
                iVar5 = memcmp(param_1 + 1,param_3 + 1,uVar10 - 0x10);
                if (iVar5 == 0) break;
              }
              else {
                param_1 = (undefined1 (*) [16])(*param_1 + iVar5);
                if (pauVar8 < param_1) break;
                auVar13._0_4_ = auVar1._0_4_ ^ *(uint *)*param_1;
                auVar13._4_4_ = auVar1._4_4_ ^ *(uint *)(*param_1 + 4);
                auVar13._8_4_ = auVar1._8_4_ ^ *(uint *)(*param_1 + 8);
                auVar13._12_4_ = auVar1._12_4_ ^ *(uint *)(*param_1 + 0xc);
                if (auVar13 == (undefined1  [16])0x0) goto LAB_18023b819;
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 1);
            }
            else {
              param_1 = param_1 + 1;
            }
            bVar12 = param_1 < pauVar8;
          } while (param_1 <= pauVar8);
        }
      }
    }
  }
LAB_18023b847:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(uStack_48 ^ (ulonglong)auStack_78);
}

