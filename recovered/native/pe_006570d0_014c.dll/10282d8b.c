/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10282d8b */

undefined4
FUN_10282d8b(uint *param_1,undefined1 *param_2,uint param_3,undefined4 param_4,uint param_5,
            int param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2 == (undefined1 *)0x0) {
    if (param_3 != 0) goto LAB_10282dcd;
  }
  else {
    if (param_3 == 0) {
LAB_10282dcd:
      *(undefined1 *)(param_6 + 0x1c) = 1;
      *(undefined4 *)(param_6 + 0x18) = 0x16;
      FUN_10274034(0,0,0,0,0,param_6);
      return 0x16;
    }
    *param_2 = 0;
  }
  if (param_1 != (uint *)0x0) {
    *param_1 = 0;
  }
  uVar2 = param_5;
  if (param_3 < param_5) {
    uVar2 = param_3;
  }
  if (uVar2 < 0x80000000) {
    iVar1 = FUN_10282aea(param_2,param_4,uVar2,param_6);
    if (iVar1 == -1) {
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 0;
      }
      if (*(char *)(param_6 + 0x1c) == '\0') {
        return 0;
      }
      return *(undefined4 *)(param_6 + 0x18);
    }
    uVar2 = iVar1 + 1;
    if (param_2 != (undefined1 *)0x0) {
      if (param_3 < uVar2) {
        if (param_5 != 0xffffffff) {
          *param_2 = 0;
          local_8 = 0x22;
          goto LAB_10282e29;
        }
        local_8 = 0x50;
        uVar2 = param_3;
      }
      param_2[uVar2 - 1] = 0;
    }
    if (param_1 != (uint *)0x0) {
      *param_1 = uVar2;
    }
  }
  else {
    local_8 = 0x16;
LAB_10282e29:
    *(undefined4 *)(param_6 + 0x18) = local_8;
    *(undefined1 *)(param_6 + 0x1c) = 1;
    FUN_10274034(0,0,0,0,0,param_6);
  }
  return local_8;
}

