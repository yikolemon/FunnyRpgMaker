/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00474193 */

int __fastcall FUN_00474193(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    FUN_00407b8c();
    iVar1 = FUN_0041f5df((ushort *)(param_1 + 0x30),&PTR_LAB_004f6a9c,param_1);
    FUN_00407b8c();
    return iVar1;
  }
  iVar1 = FUN_0041f5df((ushort *)(param_1 + 0x30),&PTR_LAB_004f6a9c,param_1);
  return iVar1;
}

