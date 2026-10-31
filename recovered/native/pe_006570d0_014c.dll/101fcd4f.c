/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fcd4f */

void __fastcall
FUN_101fcd4f(undefined4 param_1,undefined4 param_2,int param_3,undefined1 param_4,int *param_5)

{
  undefined1 auStack_24 [20];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_24;
  if ((*param_5 != 0) && (param_5[1] != 0)) {
    FUN_101fcddc(param_4);
    if (param_3 == 2) {
      FUN_101fcfcc(param_2);
    }
    else if (param_3 == 1) {
      FUN_101fcea3(param_2);
    }
    else if (param_3 == 0) {
      FUN_101fce15(param_2);
    }
  }
  if (DAT_10388d00 != (local_10 ^ (uint)auStack_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

