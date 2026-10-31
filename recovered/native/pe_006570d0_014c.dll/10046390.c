/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10046390 */

void __thiscall FUN_10046390(int *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 auStack_10 [2];
  undefined2 local_e;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_10;
  if (2 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_10006198("Invalid fill (too long).");
  }
  uVar1 = thunk_FUN_100464e4(param_2,param_2 + param_3 * 2,*param_1 + 0x10);
  local_e = 0;
  FUN_1004649e(uVar1,*param_1 + 0x14,&local_e);
  *(char *)(*param_1 + 0xe) = (char)param_3;
  if (DAT_10388d00 == (local_c ^ (uint)auStack_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

