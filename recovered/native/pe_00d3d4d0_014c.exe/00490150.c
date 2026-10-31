/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00490150 */

void __cdecl FUN_00490150(ushort *param_1,ushort *param_2)

{
  if (DAT_005216fc != 0) {
    FUN_004901a0(param_1,param_2,(undefined4 *)0x0);
    return;
  }
  if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    FUN_00490350(param_1,param_2);
    return;
  }
  FUN_004903a0((int)param_1,(int)param_2);
  return;
}

