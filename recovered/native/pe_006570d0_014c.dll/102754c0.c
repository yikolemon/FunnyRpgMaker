/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102754c0 */

int FUN_102754c0(int param_1)

{
  int iVar1;
  undefined1 local_c [4];
  int local_8;
  
  iVar1 = FUN_1026f306(&local_8,param_1,0x100,&DAT_10359c84);
  if (iVar1 != 0) {
    if (iVar1 == 0x22) {
      param_1 = FUN_10274170(local_8 * 2);
      if ((param_1 == 0) ||
         (iVar1 = FUN_1026f306(local_c,param_1,local_8,&DAT_10359c84), iVar1 != 0)) {
        FUN_10274120(param_1);
        param_1 = 0;
      }
      else {
        FUN_10274120(0);
      }
    }
    else {
      param_1 = 0;
    }
  }
  return param_1;
}

