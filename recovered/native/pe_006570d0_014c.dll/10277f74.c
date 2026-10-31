/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10277f74 */

undefined4 __thiscall
FUN_10277f74(undefined4 param_1,int *param_2,undefined1 *param_3,uint param_4,ushort param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  undefined8 local_c;
  
  iVar1 = param_6;
  local_c = CONCAT44(param_1,param_1);
  if ((param_3 == (undefined1 *)0x0) && (param_4 != 0)) {
    if (param_2 == (int *)0x0) {
      return 0;
    }
    *param_2 = 0;
    return 0;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = -1;
  }
  if (param_4 < 0x80000000) {
    if (*(char *)(param_6 + 0x14) == '\0') {
      FUN_1025ec50();
    }
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
    if (iVar2 == 0xfde9) {
      local_c = 0;
      iVar2 = FUN_10284f0f(param_3,param_5,&local_c,iVar1);
      if (param_2 != (int *)0x0) {
        *param_2 = iVar2;
      }
      if (iVar2 < 5) {
        return 0;
      }
      if (*(char *)(iVar1 + 0x1c) == '\0') {
        return 0;
      }
      return *(undefined4 *)(iVar1 + 0x18);
    }
    if (*(int *)(*(int *)(iVar1 + 0xc) + 0xa8) == 0) {
      if (0xff < param_5) {
        if ((param_3 != (undefined1 *)0x0) && (param_4 != 0)) {
          _memset(param_3,0,param_4);
        }
        goto LAB_10278032;
      }
      if (param_3 == (undefined1 *)0x0) {
LAB_1027804b:
        if (param_2 != (int *)0x0) {
          *param_2 = 1;
        }
        return 0;
      }
      if (param_4 != 0) {
        *param_3 = (char)param_5;
        goto LAB_1027804b;
      }
    }
    else {
      local_c = local_c & 0xffffffff;
      iVar2 = FUN_10274283(iVar2,0,&param_5,1,param_3,param_4,0,(int)&local_c + 4);
      if (iVar2 != 0) {
        if (local_c._4_4_ == 0) {
          if (param_2 == (int *)0x0) {
            return 0;
          }
          *param_2 = iVar2;
          return 0;
        }
LAB_10278032:
        *(undefined4 *)(iVar1 + 0x18) = 0x2a;
        *(undefined1 *)(iVar1 + 0x1c) = 1;
        return 0x2a;
      }
      DVar3 = GetLastError();
      if (DVar3 != 0x7a) goto LAB_10278032;
      if ((param_3 != (undefined1 *)0x0) && (param_4 != 0)) {
        _memset(param_3,0,param_4);
      }
    }
    uVar4 = 0x22;
  }
  else {
    uVar4 = 0x16;
  }
  *(undefined4 *)(iVar1 + 0x18) = uVar4;
  *(undefined1 *)(iVar1 + 0x1c) = 1;
  FUN_10274034(0,0,0,0,0,iVar1);
  return uVar4;
}

