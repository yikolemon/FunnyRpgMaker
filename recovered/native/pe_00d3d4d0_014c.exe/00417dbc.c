/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00417dbc */

byte * __thiscall FUN_00417dbc(void *this,byte *param_1,byte *param_2)

{
  uint uVar1;
  
  if (param_1 != param_2) {
    do {
      uVar1 = FUN_004838c0((uint)*param_1,(UINT *)((int)this + 8));
      *param_1 = (byte)uVar1;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}

