/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140119aa3 */

int FUN_140119aa3(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_140119ae5(*param_1);
  iVar2 = FUN_140119ae5(param_1[1]);
  iVar3 = FUN_140119ae5(param_1[2]);
  return iVar3 + (iVar2 << 8 | iVar1 << 0x10) + -0x1000000;
}

