/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a70b0 */

longlong FUN_1400a70b0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  
  uVar1 = *param_1;
  puVar3 = param_1;
  while ((uVar1 != 0 && (puVar2 = FUN_1400b1c40(param_2,uVar1), puVar2 == (ushort *)0x0))) {
    uVar1 = puVar3[1];
    puVar3 = puVar3 + 1;
  }
  return (longlong)puVar3 - (longlong)param_1 >> 1;
}

