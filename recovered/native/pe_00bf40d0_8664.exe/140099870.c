/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140099870 */

ulonglong FUN_140099870(WCHAR *param_1,ulonglong param_2,ulonglong param_3,longlong *param_4,
                       longlong *param_5)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_4 != (longlong *)0x0) &&
       ((param_1 != (WCHAR *)0x0 &&
        (auVar1._8_8_ = 0, auVar1._0_8_ = param_2,
        param_3 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0))))) {
      if ((*(uint *)((longlong)param_4 + 0x14) & 0x4c0) == 0) {
        uVar8 = 0x1000;
      }
      else {
        uVar8 = *(uint *)(param_4 + 4);
      }
      uVar6 = param_2 * param_3;
      do {
        if (uVar6 == 0) {
          return param_3;
        }
        if (((*(uint *)((longlong)param_4 + 0x14) & 0xc0) == 0) || ((int)param_4[2] == 0)) {
          if (uVar8 <= uVar6) {
            if (((*(uint *)((longlong)param_4 + 0x14) & 0xc0) != 0) &&
               (uVar3 = FUN_140097d30((int *)param_4,param_5), (int)uVar3 != 0)) goto LAB_140099a27;
            uVar4 = uVar6;
            if (uVar8 != 0) {
              uVar4 = uVar6 - uVar6 % (ulonglong)uVar8;
            }
            uVar7 = 0xfffffffe;
            if (uVar4 < 0xfffffffe) {
              uVar7 = (uint)uVar4;
            }
            uVar2 = FUN_1400a5bb4((longlong)param_4);
            uVar2 = FUN_1400ab30c(uVar2,param_1,uVar7,param_5);
            if (uVar2 != 0xffffffff) {
              uVar5 = uVar2;
              if (uVar7 < uVar2) {
                uVar5 = uVar7;
              }
              uVar4 = (ulonglong)uVar5;
              uVar6 = uVar6 - uVar4;
              if (uVar7 <= uVar2) goto LAB_140099a6e;
            }
LAB_140099a22:
            LOCK();
            *(uint *)((longlong)param_4 + 0x14) = *(uint *)((longlong)param_4 + 0x14) | 0x10;
            UNLOCK();
LAB_140099a27:
            return (param_2 * param_3 - uVar6) / param_2;
          }
          uVar4 = FUN_1400abf9c((byte)*param_1,param_4,param_5);
          if ((int)uVar4 == -1) goto LAB_140099a27;
          uVar8 = *(uint *)(param_4 + 4);
          uVar6 = uVar6 - 1;
          if ((int)uVar8 < 1) {
            uVar8 = 1;
            uVar4 = 1;
          }
          else {
            uVar4 = 1;
          }
        }
        else {
          if ((int)param_4[2] < 0) goto LAB_140099a22;
          if ((*(uint *)((longlong)param_4 + 0x14) & 1) != 0) goto LAB_140099a27;
          uVar4 = uVar6;
          if ((ulonglong)(longlong)(int)param_4[2] <= uVar6) {
            uVar4 = (longlong)(int)param_4[2];
          }
          FUN_1400b3550((undefined8 *)*param_4,(undefined8 *)param_1,uVar4);
          *(int *)(param_4 + 2) = (int)param_4[2] - (int)uVar4;
          uVar6 = uVar6 - uVar4;
          *param_4 = *param_4 + uVar4;
        }
LAB_140099a6e:
        param_1 = (WCHAR *)((longlong)param_1 + uVar4);
      } while( true );
    }
    *(undefined1 *)(param_5 + 6) = 1;
    *(undefined4 *)((longlong)param_5 + 0x2c) = 0x16;
    FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_5);
  }
  return 0;
}

