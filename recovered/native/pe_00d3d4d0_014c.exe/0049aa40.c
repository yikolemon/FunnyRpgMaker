/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049aa40 */

int __cdecl FUN_0049aa40(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  
  uVar1 = *param_1;
  puVar3 = param_1;
  while ((uVar1 != 0 && (puVar2 = FUN_004a57b0(param_2,uVar1), puVar2 == (ushort *)0x0))) {
    uVar1 = puVar3[1];
    puVar3 = puVar3 + 1;
  }
  return (int)puVar3 - (int)param_1 >> 1;
}

