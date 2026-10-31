/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102178f2 */

undefined4 __fastcall FUN_102178f2(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0xfffffff4;
  while ((*(int *)((int)&DAT_10321fb0 + uVar1) != param_1 ||
         ((*(int *)((int)&DAT_10321fb4 + uVar1) != param_2 &&
          (*(int *)((int)&DAT_10321fb4 + uVar1) != -1))))) {
    uVar1 = uVar1 + 0xc;
    if (0x77 < uVar1) {
      return 0;
    }
  }
  return *(undefined4 *)((int)&DAT_10321fb8 + uVar1);
}

