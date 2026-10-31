/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000d88a */

int __fastcall FUN_1000d88a(int *param_1)

{
  int iVar1;
  undefined1 local_20 [4];
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_10012a30;
  local_18 = ExceptionList;
  iVar1 = *param_1;
  if (iVar1 == 0) {
    ExceptionList = &local_18;
    FUN_1022bea0(0);
    if (*param_1 == 0) {
      DAT_1039ccf0 = DAT_1039ccf0 + 1;
      *param_1 = DAT_1039ccf0;
    }
    local_10 = 0xffffffff;
    FUN_1022bee0();
    iVar1 = *param_1;
  }
  ExceptionList = local_18;
  return iVar1;
}

