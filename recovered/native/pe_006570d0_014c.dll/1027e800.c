/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027e800 */

undefined4 FUN_1027e800(uint param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *local_18;
  int local_14;
  uint local_10;
  uint local_c [2];
  
  if (param_1 == 0xfffffffe) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined1 *)(param_2 + 0x24) = 1;
    *(undefined1 *)(param_2 + 0x1c) = 1;
    *(undefined4 *)(param_2 + 0x18) = 9;
  }
  else {
    if (((-1 < (int)param_1) && (param_1 < DAT_103a5430)) &&
       ((*(byte *)((&DAT_103a5230)[(int)param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38) & 1) != 0))
    {
      local_18 = &param_1;
      local_c[0] = param_1;
      local_14 = param_2;
      local_10 = param_1;
      uVar1 = FUN_1027e8a3(&local_10,&local_18,local_c);
      return uVar1;
    }
    *(undefined1 *)(param_2 + 0x24) = 1;
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined1 *)(param_2 + 0x1c) = 1;
    *(undefined4 *)(param_2 + 0x18) = 9;
    FUN_10274034(0,0,0,0,0,param_2);
  }
  return 0xffffffff;
}

