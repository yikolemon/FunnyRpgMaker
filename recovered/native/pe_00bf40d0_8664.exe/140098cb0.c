/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140098cb0 */

ulonglong FUN_140098cb0(undefined1 (*param_1) [32],ulonglong param_2,ulonglong param_3,
                       ulonglong param_4,longlong *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  __acrt_ptd *p_Var5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [32];
  
  if ((param_3 != 0) && (param_4 != 0)) {
    if (param_1 != (undefined1 (*) [32])0x0) {
      if ((param_5 != (longlong *)0x0) &&
         (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
         param_4 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0))) {
LAB_140098d4b:
        if ((*(uint *)((longlong)param_5 + 0x14) & 0x4c0) == 0) {
          uVar9 = 0x1000;
        }
        else {
          uVar9 = *(uint *)(param_5 + 4);
        }
        uVar8 = param_3 * param_4;
        pauVar10 = param_1;
        uVar7 = param_2;
        do {
          while( true ) {
            if (uVar8 == 0) {
              return param_4;
            }
            if ((*(uint *)((longlong)param_5 + 0x14) & 0x4c0) != 0) break;
LAB_140098e29:
            if (uVar9 <= uVar8) {
              uVar6 = uVar8 & 0xffffffff;
              if (0x7fffffff < uVar8) {
                uVar6 = 0x7fffffff;
              }
              if (uVar9 != 0) {
                uVar6 = (ulonglong)(uint)((int)uVar6 - (int)(uVar6 % (ulonglong)uVar9));
              }
              if (uVar6 <= uVar7) {
                *(undefined4 *)(param_5 + 2) = 0;
                *param_5 = param_5[1];
                uVar3 = FUN_1400a5bb4((longlong)param_5);
                iVar4 = FUN_1400ac4d0(uVar3,(LPWSTR)pauVar10,(uint)uVar6);
                if (iVar4 == 0) {
                  LOCK();
                  *(uint *)((longlong)param_5 + 0x14) = *(uint *)((longlong)param_5 + 0x14) | 8;
                  UNLOCK();
                  goto LAB_140098f0a;
                }
                if (-1 < iVar4) {
                  uVar6 = (ulonglong)iVar4;
                  goto LAB_140098e19;
                }
                goto LAB_140098efe;
              }
              goto LAB_140098edb;
            }
            uVar6 = FUN_1400abc58(param_5);
            if ((int)uVar6 == -1) goto LAB_140098f0a;
            if (uVar7 == 0) goto LAB_140098edb;
            (*pauVar10)[0] = (char)uVar6;
            uVar8 = uVar8 - 1;
            uVar9 = *(uint *)(param_5 + 4);
            pauVar10 = (undefined1 (*) [32])(*pauVar10 + 1);
            uVar7 = uVar7 - 1;
          }
          uVar3 = *(uint *)(param_5 + 2);
          if (uVar3 == 0) goto LAB_140098e29;
          if ((int)uVar3 < 0) {
LAB_140098efe:
            LOCK();
            *(uint *)((longlong)param_5 + 0x14) = *(uint *)((longlong)param_5 + 0x14) | 0x10;
            UNLOCK();
LAB_140098f0a:
            return (param_3 * param_4 - uVar8) / param_3;
          }
          if (uVar8 < (ulonglong)(longlong)(int)uVar3) {
            uVar3 = (uint)uVar8;
          }
          if (uVar7 < uVar3) {
LAB_140098edb:
            if (param_2 != 0xffffffffffffffff) {
              FUN_1400b3c00(param_1,0,param_2);
            }
            p_Var5 = FUN_140095e5c();
            *(undefined4 *)p_Var5 = 0x22;
            goto LAB_140098cf4;
          }
          if (uVar3 != 0) {
            if (pauVar10 != (undefined1 (*) [32])0x0) {
              if ((undefined8 *)*param_5 != (undefined8 *)0x0) {
                FUN_1400b3550((undefined8 *)pauVar10,(undefined8 *)*param_5,(ulonglong)uVar3);
                goto LAB_140098e00;
              }
              FUN_1400b3c00(pauVar10,0,uVar7);
            }
            p_Var5 = FUN_140095e5c();
            *(undefined4 *)p_Var5 = 0x16;
            FUN_1400a0ea0();
          }
LAB_140098e00:
          *(uint *)(param_5 + 2) = (int)param_5[2] - uVar3;
          uVar6 = (ulonglong)uVar3;
          *param_5 = *param_5 + (ulonglong)uVar3;
LAB_140098e19:
          uVar8 = uVar8 - uVar6;
          pauVar10 = (undefined1 (*) [32])(*pauVar10 + uVar6);
          uVar7 = uVar7 - uVar6;
        } while( true );
      }
      if (param_2 != 0xffffffffffffffff) {
        FUN_1400b3c00(param_1,0,param_2);
      }
      if ((param_5 != (longlong *)0x0) &&
         (auVar2._8_8_ = 0, auVar2._0_8_ = param_3,
         param_4 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar2,0)))
      goto LAB_140098d4b;
    }
    p_Var5 = FUN_140095e5c();
    *(undefined4 *)p_Var5 = 0x16;
LAB_140098cf4:
    FUN_1400a0ea0();
  }
  return 0;
}

