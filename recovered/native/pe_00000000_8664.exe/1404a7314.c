/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a7314 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1404a7314(int *param_1,undefined1 *param_2,ulonglong param_3,ushort param_4,longlong param_5)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong local_res10;
  ushort local_res20 [4];
  undefined8 in_stack_ffffffffffffffd0;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  if ((param_2 == (undefined1 *)0x0) && (param_3 != 0)) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    *param_1 = 0;
    return 0;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = -1;
  }
  local_res20[0] = param_4;
  if (param_3 < 0x80000000) {
    if (*(char *)(param_5 + 0x28) == '\0') {
      FUN_140484290(param_5);
    }
    iVar1 = *(int *)(*(longlong *)(param_5 + 0x18) + 0xc);
    if (iVar1 == 0xfde9) {
      local_res10 = 0;
      iVar1 = FUN_1404b6170(param_2,local_res20[0],&local_res10,param_5);
      if (param_1 != (int *)0x0) {
        *param_1 = iVar1;
      }
      if (iVar1 < 5) {
        return 0;
      }
      if (*(char *)(param_5 + 0x30) != '\0') {
        return *(undefined4 *)(param_5 + 0x2c);
      }
      return 0;
    }
    if (*(longlong *)(*(longlong *)(param_5 + 0x18) + 0x138) == 0) {
      if (0xff < local_res20[0]) {
        if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
          FUN_1404b9e70(param_2,0,param_3);
        }
        goto LAB_1404a73f6;
      }
      if (param_2 == (undefined1 *)0x0) {
LAB_1404a7422:
        if (param_1 != (int *)0x0) {
          *param_1 = 1;
        }
        return 0;
      }
      if (param_3 != 0) {
        *param_2 = (char)local_res20[0];
        goto LAB_1404a7422;
      }
    }
    else {
      local_res10 = local_res10 & 0xffffffff00000000;
      iVar1 = FUN_1404a2460(iVar1,0,local_res20,1,param_2,CONCAT44(uVar2,(int)param_3),0,
                            &local_res10);
      if (iVar1 != 0) {
        if ((int)local_res10 == 0) {
          if (param_1 == (int *)0x0) {
            return 0;
          }
          *param_1 = iVar1;
          return 0;
        }
LAB_1404a73f6:
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        *(undefined1 *)(param_5 + 0x30) = 1;
        return 0x2a;
      }
      iVar1 = (*_DAT_14059df60)();
      if (iVar1 != 0x7a) goto LAB_1404a73f6;
      if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
        FUN_1404b9e70(param_2,0,param_3);
      }
    }
    uVar2 = 0x22;
  }
  else {
    uVar2 = 0x16;
  }
  *(undefined4 *)(param_5 + 0x2c) = uVar2;
  *(undefined1 *)(param_5 + 0x30) = 1;
  FUN_1404a2100(0,0,0,0,0,param_5);
  return uVar2;
}

