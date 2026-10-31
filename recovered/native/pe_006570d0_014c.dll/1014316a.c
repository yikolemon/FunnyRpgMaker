/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014316a */

void __fastcall FUN_1014316a(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  FUN_10152418(0,*(undefined4 *)(param_1 + 0x10),param_4);
  FUN_10151f58(*(undefined4 *)(param_1 + 0x10));
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  if (0 < param_4) {
    iVar1 = FUN_10151f8b(param_3,param_4);
    if (0 < iVar1) {
      param_2[2] = param_4;
      param_2[1] = param_4;
      *param_2 = param_4;
      *(undefined1 *)((int)param_2 + 0x16) = 0;
    }
  }
  return;
}

