/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049aae0 */

ushort * __cdecl FUN_0049aae0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = *param_1;
  while( true ) {
    if (uVar1 == 0) {
      return (ushort *)0x0;
    }
    puVar2 = FUN_004a57b0(param_2,uVar1);
    if (puVar2 != (ushort *)0x0) break;
    uVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return param_1;
}

