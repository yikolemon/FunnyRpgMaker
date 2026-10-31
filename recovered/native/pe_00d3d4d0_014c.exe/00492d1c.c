/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00492d1c */

int __cdecl FUN_00492d1c(int param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  local_c[0] = param_1;
  if (param_1 == 0) goto LAB_00492d2e;
  if (param_3 == 4) {
LAB_00492d62:
    if ((param_3 != 0) && (param_3 != 0x40)) goto LAB_00492d78;
  }
  else if (param_3 != 0) {
    if (param_3 != 0x40) goto LAB_00492d2e;
    goto LAB_00492d62;
  }
  if (0x7ffffffd < param_4 - 2U) {
LAB_00492d2e:
    *(undefined1 *)(param_5 + 7) = 1;
    param_5[6] = 0x16;
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_5);
    return -1;
  }
LAB_00492d78:
  local_28 = &param_4;
  local_10 = param_1;
  local_24 = local_c;
  local_20 = param_5;
  local_1c = &param_3;
  local_18 = &param_2;
  local_14 = param_1;
  iVar1 = operator()<>(&local_14,&local_28);
  return iVar1;
}

