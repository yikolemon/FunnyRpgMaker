/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027031c */

undefined4 FUN_1027031c(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *local_28;
  int *local_24;
  int local_20;
  undefined4 *local_1c;
  undefined1 *local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  local_c[0] = param_1;
  if (param_1 == 0) goto LAB_1027032e;
  if (param_3 == 4) {
LAB_10270362:
    if ((param_3 != 0) && (param_3 != 0x40)) goto LAB_10270378;
  }
  else if (param_3 != 0) {
    if (param_3 != 0x40) goto LAB_1027032e;
    goto LAB_10270362;
  }
  if (0x7ffffffd < param_4 - 2U) {
LAB_1027032e:
    *(undefined1 *)(param_5 + 0x1c) = 1;
    *(undefined4 *)(param_5 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_5);
    return 0xffffffff;
  }
LAB_10270378:
  local_28 = &param_4;
  local_10 = param_1;
  local_24 = local_c;
  local_20 = param_5;
  local_1c = &param_3;
  local_18 = (undefined1 *)&param_2;
  local_14 = param_1;
  uVar1 = operator()<>(&local_14,&local_28,&local_10);
  return uVar1;
}

