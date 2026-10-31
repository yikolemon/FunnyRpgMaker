/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b80da */

void __fastcall FUN_100b80da(undefined4 *param_1)

{
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_18;
  local_10 = &LAB_100c4b40;
  local_14 = ExceptionList;
  local_c = 1;
  if (0xf < (uint)param_1[5]) {
    ExceptionList = &local_14;
    (*DAT_1039c964)(*param_1);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  ExceptionList = local_14;
  return;
}

