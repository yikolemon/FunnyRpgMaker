/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b9a02 */

void __fastcall FUN_100b9a02(int param_1)

{
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_18;
  local_10 = &LAB_100c4bc0;
  local_14 = ExceptionList;
  local_c = 1;
  if (0xf < *(uint *)(param_1 + 0x18)) {
    ExceptionList = &local_14;
    (*DAT_1039c964)(*(undefined4 *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  ExceptionList = local_14;
  return;
}

