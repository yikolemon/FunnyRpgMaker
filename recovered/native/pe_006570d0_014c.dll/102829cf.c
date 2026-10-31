/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102829cf */

undefined4
FUN_102829cf(uint *param_1,undefined2 *param_2,uint param_3,undefined4 param_4,uint param_5,
            int param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_2 == (undefined2 *)0x0) {
    if (param_3 != 0) {
LAB_102829ec:
      *(undefined1 *)(param_6 + 0x1c) = 1;
      *(undefined4 *)(param_6 + 0x18) = 0x16;
      FUN_10274034(0,0,0,0,0,param_6);
      return 0x16;
    }
  }
  else {
    if (param_3 == 0) goto LAB_102829ec;
    *param_2 = 0;
  }
  if (param_1 != (uint *)0x0) {
    *param_1 = 0;
  }
  uVar2 = param_5;
  if (param_3 < param_5) {
    uVar2 = param_3;
  }
  if (0x7fffffff < uVar2) {
    uVar3 = 0x16;
LAB_10282a76:
    *(undefined4 *)(param_6 + 0x18) = uVar3;
    *(undefined1 *)(param_6 + 0x1c) = 1;
    FUN_10274034(0,0,0,0,0,param_6);
    return uVar3;
  }
  iVar1 = FUN_10282806(param_2,param_4,uVar2,param_6);
  if (iVar1 == -1) {
    if (param_2 != (undefined2 *)0x0) {
      *param_2 = 0;
    }
    if (*(char *)(param_6 + 0x1c) == '\0') {
      return 0;
    }
    return *(undefined4 *)(param_6 + 0x18);
  }
  uVar2 = iVar1 + 1;
  if (param_2 != (undefined2 *)0x0) {
    if (param_3 < uVar2) {
      if (param_5 != 0xffffffff) {
        *param_2 = 0;
        uVar3 = 0x22;
        goto LAB_10282a76;
      }
      uVar3 = 0x50;
      uVar2 = param_3;
    }
    param_2[uVar2 - 1] = 0;
  }
  if (param_1 == (uint *)0x0) {
    return uVar3;
  }
  *param_1 = uVar2;
  return uVar3;
}

