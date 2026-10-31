/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a44c0 */

undefined8
FUN_1400a44c0(double *param_1,undefined1 (*param_2) [16],ulonglong param_3,char *param_4,
             longlong param_5,int param_6,uint param_7,ulonglong param_8,
             __acrt_rounding_mode param_9,longlong *param_10)

{
  double dVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  __acrt_rounding_mode _Var5;
  byte bVar6;
  ulonglong uVar7;
  
  if (param_2 == (undefined1 (*) [16])0x0) {
    *(undefined1 *)(param_10 + 6) = 1;
    *(undefined4 *)((longlong)param_10 + 0x2c) = 0x16;
  }
  else {
    if (((param_3 != 0) && (param_4 != (char *)0x0)) && (param_5 != 0)) {
      if ((param_6 == 0x41) || (param_6 - 0x45U < 3)) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      bVar6 = (byte)uVar4;
      if (((param_8 & 8) == 0) &&
         (dVar1 = *param_1, ((uint)((ulonglong)dVar1 >> 0x34) & 0x7ff) == 0x7ff)) {
        if (((ulonglong)dVar1 & 0xfffffffffffff) == 0) {
          lVar3 = 0;
        }
        else if (((longlong)dVar1 < 0) && (((ulonglong)dVar1 & 0xfffffffffffff) == 0x8000000000000))
        {
          lVar3 = 0xc;
        }
        else {
          lVar3 = (-(ulonglong)(((ulonglong)dVar1 & 0x8000000000000) != 0) & 0xfffffffffffffffc) + 8
          ;
        }
        if (param_3 < 4U - ((longlong)dVar1 >> 0x3f)) {
          (*param_2)[0] = 0;
          return 0xc;
        }
        uVar7 = 0xffffffffffffffff;
        if ((longlong)dVar1 < 0) {
          (*param_2)[0] = 0x2d;
          param_2 = (undefined1 (*) [16])(*param_2 + 1);
          (*param_2)[0] = 0;
          if (param_3 != 0xffffffffffffffff) {
            param_3 = param_3 - 1;
          }
        }
        uVar4 = (uVar4 ^ 1) * 2;
        do {
          uVar7 = uVar7 + 1;
        } while ((&PTR_DAT_14010fef0)[(ulonglong)uVar4 + lVar3][uVar7] != '\0');
        uVar2 = FUN_1400a0d40((char *)param_2,param_3,
                              (longlong)
                              (&PTR_DAT_14010fef0)[(ulonglong)(uVar4 + (param_3 <= uVar7)) + lVar3])
        ;
        if ((int)uVar2 == 0) {
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = (uint)(param_8 >> 4);
      _Var5 = -(uint)((param_8 & 0x20) != 0) & param_9;
      if (param_6 != 0x41) {
        if (param_6 == 0x45) {
LAB_1400a470d:
          uVar2 = FUN_1400a498c((ulonglong *)param_1,*param_2,param_3,param_4,param_5,param_7,bVar6,
                                uVar4 & 1 | 2,_Var5,param_10);
          return uVar2;
        }
        if (param_6 == 0x46) {
LAB_1400a46dc:
          uVar2 = FUN_1400a508c((ulonglong *)param_1,(undefined8 *)param_2,param_3,param_4,param_5,
                                param_7,_Var5,param_10);
          return uVar2;
        }
        if (param_6 != 0x47) {
          if (param_6 == 0x61) goto LAB_1400a4747;
          if (param_6 == 0x65) goto LAB_1400a470d;
          if (param_6 == 0x66) goto LAB_1400a46dc;
        }
        uVar2 = FUN_1400a5164((ulonglong *)param_1,(undefined8 *)param_2,param_3,param_4,param_5,
                              param_7,bVar6,uVar4 & 1 | 2,_Var5,param_10);
        return uVar2;
      }
LAB_1400a4747:
      uVar2 = FUN_1400a4ba8(param_1,param_2,param_3,param_4,param_5,param_7,bVar6,uVar4 & 1 | 2,
                            _Var5,param_10);
      return uVar2;
    }
    *(undefined1 *)(param_10 + 6) = 1;
    *(undefined4 *)((longlong)param_10 + 0x2c) = 0x16;
  }
  FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_10);
  return 0x16;
}

