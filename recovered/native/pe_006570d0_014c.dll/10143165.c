/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10143165 */

void __fastcall
thunk_FUN_1015273b(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_10142d8c();
  FUN_10151d3f();
  iVar1 = FUN_10151f8b(param_3,param_4);
  if (iVar1 != 0) {
    FUN_10152465(iVar1);
    *param_2 = *param_2 + iVar1;
    *(undefined1 *)((int)param_2 + 0x16) = 0;
  }
  return;
}

