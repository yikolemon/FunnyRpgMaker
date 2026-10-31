/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140039d2e */

ulonglong FUN_140039d2e(longlong param_1,longlong param_2,uint param_3,undefined4 param_4,
                       undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar4 = FUN_14001f8b9(*(longlong *)(*(longlong *)(param_2 + 0x90) + 8),"sfnt");
  if (lVar4 == 0) {
    return 0xb;
  }
  uVar5 = FUN_140020a41(param_1,0);
  uVar3 = (uint)uVar5;
  if ((uVar3 == 0) &&
     (uVar3 = (**(code **)(lVar4 + 8))(param_1,param_2,param_3,param_4,param_5), uVar3 == 0)) {
    plVar2 = *(longlong **)(param_2 + 0xa0);
    iVar1 = *(int *)(param_2 + 0xf0);
    if (iVar1 < 0x10000) {
      if ((iVar1 != -0x5a949d9c) && (iVar1 != -0x5a938c8c)) {
        return 2;
      }
    }
    else if (((iVar1 != 0x10000) && (iVar1 != 0x74727565)) && (iVar1 != 0x20000)) {
      return 2;
    }
    *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 8;
    if ((int)param_3 < 0) {
      return 0;
    }
    uVar3 = (**(code **)(lVar4 + 0x10))(plVar2,param_2,param_3,param_4,param_5);
    if (uVar3 == 0) {
      uVar5 = FUN_140046756(param_2);
      if ((char)uVar5 != '\0') {
        *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 0x20;
      }
      uVar3 = FUN_14004678e(param_2,plVar2);
      if (uVar3 == 0) {
        if ((*(uint *)(param_2 + 8) & 0x20001) == 0) {
          uVar6 = 0;
        }
        else {
          if (*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x50) == 0) {
            uVar6 = FUN_140046966(param_2,plVar2);
            uVar3 = (uint)uVar6;
            if (*(int *)(param_2 + 0x3f8) != 0 && (uVar3 & 0xff) == 0x8e) goto LAB_140039d96;
            if (*(int *)(param_2 + 0x3f8) == 0 && (uVar3 & 0xff) == 0x90) {
              return 2;
            }
            if (uVar3 != 0) {
              return uVar6 & 0xffffffff;
            }
          }
          uVar3 = FUN_14004003f(param_2,plVar2);
          if ((uVar3 != 0) && ((uVar3 & 0xff) != 0x8e)) {
            return (ulonglong)uVar3;
          }
          uVar6 = FUN_140046b0c(param_2,plVar2);
          if (((uint)uVar6 != 0) && (((uint)uVar6 & 0xff) != 0x8e)) {
            return uVar6 & 0xffffffff;
          }
          uVar7 = FUN_140046b9c(param_2,plVar2);
          uVar6 = uVar7 & 0xffffffff;
          if (((uint)uVar7 != 0) && (((uint)uVar7 & 0xff) != 0x8e)) {
            return uVar6;
          }
          if ((((*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x50) == 0) &&
               (*(int *)(param_2 + 0x28) != 0)) && (*(longlong *)(param_2 + 0x440) != 0)) &&
             (uVar7 = FUN_140046c2c(param_2), (char)uVar7 != '\0')) {
            *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfe;
          }
        }
        if ((param_3 >> 0x10 != 0) && ((*(byte *)(param_2 + 9) & 1) != 0)) {
          uVar3 = FUN_140081d9b(param_2,param_3 >> 0x10);
          if (uVar3 != 0) goto LAB_140039d96;
          uVar6 = 0;
        }
        FUN_140046d30(param_2);
        return uVar6;
      }
    }
  }
LAB_140039d96:
  return (ulonglong)uVar3;
}

