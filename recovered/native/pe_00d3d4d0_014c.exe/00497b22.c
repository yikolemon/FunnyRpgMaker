/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00497b22 */

UINT __cdecl FUN_00497b22(UINT param_1)

{
  int local_14;
  int local_10;
  char local_8;
  
  FUN_0048847b(&local_14,(int *)0x0);
  DAT_00521ed8 = 0;
  if (param_1 == 0xfffffffe) {
    DAT_00521ed8 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    DAT_00521ed8 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    DAT_00521ed8 = 1;
    param_1 = *(UINT *)(local_10 + 8);
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return param_1;
}

