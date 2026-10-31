/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a59d0 */

void __cdecl FUN_004a59d0(ushort *param_1,ushort *param_2,int param_3)

{
  if (DAT_005216fc != 0) {
    FUN_004a5a20(param_1,param_2,param_3,(undefined4 *)0x0);
    return;
  }
  if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    FUN_004a5be0(param_1,param_2,param_3);
    return;
  }
  FUN_004903a0((int)param_1,(int)param_2);
  return;
}

