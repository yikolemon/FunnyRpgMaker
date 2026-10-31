/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027a4fd */

int FUN_1027a4fd(int param_1,short *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  char local_8;
  
  if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
    uVar3 = 0x7fffffff;
    if (param_3 < 0x7fffffff) {
      uVar3 = param_3;
    }
    iVar2 = FUN_1028673d(param_1,uVar3);
  }
  else {
    local_c = 0;
    local_8 = '\0';
    if (param_1 == 0) {
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      FUN_1027a666(param_2,&local_1c);
      iVar2 = FUN_1027a5b0();
      if (local_8 != '\0') {
        thunk_FUN_10274120(local_14);
      }
    }
    else {
      local_18 = param_3;
      local_10 = param_3;
      local_1c = param_1;
      local_14 = param_1;
      iVar1 = FUN_1027a596(param_2,&local_1c);
      iVar2 = 0;
      if (iVar1 == 0) {
        iVar2 = param_1;
      }
    }
  }
  return iVar2;
}

