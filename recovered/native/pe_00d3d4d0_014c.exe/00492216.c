/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00492216 */

uint __cdecl FUN_00492216(undefined4 param_1,int param_2,int param_3,int param_4,int *param_5)

{
  uint uVar1;
  int *local_24;
  int *local_20;
  undefined4 *local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  int local_c;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if (param_4 != 0) {
      local_24 = &param_4;
      local_c = param_4;
      local_20 = param_5;
      local_1c = &param_1;
      local_18 = &param_2;
      local_14 = &param_3;
      local_10 = param_4;
      uVar1 = operator()<>(&local_10,&local_24);
      return uVar1;
    }
    *(undefined1 *)(param_5 + 7) = 1;
    param_5[6] = 0x16;
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_5);
  }
  return 0;
}

