/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10272940 */

undefined4
FUN_10272940(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint *param_5,
            int param_6,undefined4 param_7,uint param_8)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_10273380(param_3);
  iVar2 = FUN_10272260();
  if ((((*(int *)(iVar2 + 0x20) != 0) || (*param_1 == -0x1f928c9d)) || (*param_1 == -0x7fffffda)) ||
     (((*param_5 & 0x1fffffff) < 0x19930522 || ((param_5[8] & 1) == 0)))) {
    if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
      if (((param_5[3] != 0) || ((0x19930520 < (*param_5 & 0x1fffffff) && (param_5[7] != 0)))) ||
         ((0x19930521 < (*param_5 & 0x1fffffff) && ((param_5[8] >> 2 & 1) != 0)))) {
        if ((((*param_1 == -0x1f928c9d) && (2 < (uint)param_1[4])) &&
            (0x19930522 < (uint)param_1[5])) &&
           (pcVar1 = *(code **)(param_1[7] + 8), pcVar1 != (code *)0x0)) {
          (*(code *)PTR_guard_check_icall_1035d810)
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8 & 0xff);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
        FUN_10272da0(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
      }
      return 1;
    }
    if ((param_5[1] != 0) && (param_6 == 0)) {
      FUN_10272460(param_2,param_4,param_5,0xffffffff);
    }
  }
  return 1;
}

