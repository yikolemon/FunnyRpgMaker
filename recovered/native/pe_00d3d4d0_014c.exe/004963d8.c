/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004963d8 */

void __cdecl FUN_004963d8(undefined4 *param_1)

{
  int local_14;
  undefined4 **local_10;
  int local_c [2];
  
  if ((undefined *)*param_1 != &DAT_004f9290) {
    FUN_00495f00((undefined *)*param_1);
  }
  FUN_00495f00((LPVOID)param_1[0xf]);
  FUN_00495f00((LPVOID)param_1[0xc]);
  FUN_00495f00((LPVOID)param_1[0xd]);
  FUN_00495f00((LPVOID)param_1[0xe]);
  FUN_00495f00((LPVOID)param_1[10]);
  FUN_00495f00((LPVOID)param_1[0xb]);
  FUN_00495f00((LPVOID)param_1[0x10]);
  FUN_00495f00((LPVOID)param_1[0x11]);
  FUN_00495f00((LPVOID)param_1[0xd8]);
  local_10 = &param_1;
  local_c[0] = 5;
  local_14 = 5;
  FUN_004965f9(&local_14,&local_10);
  local_10 = &param_1;
  local_14 = 4;
  local_c[0] = 4;
  FUN_00496664(local_c,&local_10);
  return;
}

