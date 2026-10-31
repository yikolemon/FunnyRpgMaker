/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10195c5b */

void __fastcall FUN_10195c5b(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = DAT_103a3264 + param_2;
  if (uVar1 <= DAT_103a325c) {
    if (param_1 < DAT_103a3258) {
      uVar1 = DAT_103a325c + 1;
    }
    else {
      FUN_1025b2d0(DAT_103a3264,param_1,param_2);
    }
  }
  DAT_103a3264 = uVar1;
  return;
}

