/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004057fe */

void __fastcall FUN_004057fe(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_004070a0;
  local_1c = ExceptionList;
  local_14 = 6;
  ExceptionList = &local_1c;
  local_24 = param_1;
  FUN_0047f4b0((int)param_1);
  piVar1 = local_24;
  local_14 = 0xffffffff;
  if ((LPVOID)local_24[0xb] != (LPVOID)0x0) {
    thunk_FUN_00495f00((LPVOID)local_24[0xb]);
  }
  piVar2 = local_24;
  piVar1[0xb] = 0;
  if ((LPVOID)local_24[9] != (LPVOID)0x0) {
    thunk_FUN_00495f00((LPVOID)local_24[9]);
  }
  piVar1 = local_24;
  piVar2[9] = 0;
  if ((LPVOID)local_24[7] != (LPVOID)0x0) {
    thunk_FUN_00495f00((LPVOID)local_24[7]);
  }
  piVar2 = local_24;
  piVar1[7] = 0;
  if ((LPVOID)local_24[5] != (LPVOID)0x0) {
    thunk_FUN_00495f00((LPVOID)local_24[5]);
  }
  piVar1 = local_24;
  piVar2[5] = 0;
  if ((LPVOID)local_24[3] != (LPVOID)0x0) {
    thunk_FUN_00495f00((LPVOID)local_24[3]);
  }
  piVar2 = local_24;
  piVar1[3] = 0;
  if ((LPVOID)local_24[1] != (LPVOID)0x0) {
    thunk_FUN_00495f00((LPVOID)local_24[1]);
  }
  piVar2[1] = 0;
  FUN_0047f310(local_24);
  ExceptionList = local_1c;
  return;
}

