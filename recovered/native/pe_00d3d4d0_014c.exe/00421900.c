/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00421900 */

void __cdecl FUN_00421900(int param_1,uint *param_2,int *param_3)

{
  size_t sVar1;
  uint uVar2;
  
  if (param_2 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    sVar1 = _strlen((char *)param_2);
    uVar2 = sVar1 + 1;
  }
  FUN_0042188d(param_1,param_2,uVar2,param_3);
  return;
}

