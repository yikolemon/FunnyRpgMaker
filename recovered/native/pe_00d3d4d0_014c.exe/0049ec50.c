/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049ec50 */

undefined4 __cdecl FUN_0049ec50(uint param_1,int *param_2)

{
  undefined4 uVar1;
  uint *local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  
  if (param_1 == 0xfffffffe) {
    param_2[8] = 0;
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 7) = 1;
    param_2[6] = 9;
  }
  else {
    if (((-1 < (int)param_1) && (param_1 < DAT_00521ec8)) &&
       ((*(byte *)((&DAT_00521cc8)[(int)param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38) & 1) != 0))
    {
      local_18 = &param_1;
      local_c = param_1;
      local_14 = param_2;
      local_10 = param_1;
      uVar1 = FUN_0049ecf3(&local_10,&local_18);
      return uVar1;
    }
    *(undefined1 *)(param_2 + 9) = 1;
    param_2[8] = 0;
    *(undefined1 *)(param_2 + 7) = 1;
    param_2[6] = 9;
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  return 0xffffffff;
}

