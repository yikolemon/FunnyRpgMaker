/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026f1e8 */

undefined4 FUN_1026f1e8(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  int local_c [2];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if (param_4 != 0) {
      local_24 = &param_4;
      local_c[0] = param_4;
      local_20 = param_5;
      local_1c = (undefined1 *)&param_1;
      local_18 = &param_2;
      local_14 = &param_3;
      local_10 = param_4;
      uVar1 = operator()<>(&local_10,&local_24,local_c);
      return uVar1;
    }
    *(undefined1 *)(param_5 + 0x1c) = 1;
    *(undefined4 *)(param_5 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_5);
  }
  return 0;
}

