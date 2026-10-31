/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00405392 */

int __fastcall FUN_00405392(int *param_1)

{
  int iVar1;
  int local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_00407070;
  local_18 = ExceptionList;
  iVar1 = *param_1;
  if (iVar1 == 0) {
    ExceptionList = &local_18;
    FUN_0047f2d0(&local_20,0);
    if (*param_1 == 0) {
      DAT_0051bb28 = DAT_0051bb28 + 1;
      *param_1 = DAT_0051bb28;
    }
    local_10 = 0xffffffff;
    FUN_0047f310(&local_20);
    iVar1 = *param_1;
  }
  ExceptionList = local_18;
  return iVar1;
}

