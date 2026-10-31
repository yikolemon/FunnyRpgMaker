/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a7150 */

ushort * FUN_1400a7150(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = *param_1;
  while( true ) {
    if (uVar1 == 0) {
      return (ushort *)0x0;
    }
    puVar2 = FUN_1400b1c40(param_2,uVar1);
    if (puVar2 != (ushort *)0x0) break;
    uVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return param_1;
}

