/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00422a86 */

int __cdecl
FUN_00422a86(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4,uint *param_5)

{
  int iVar1;
  
  *param_4 = 0;
  if (param_2 != (int *)0x0) {
    iVar1 = FUN_00422d47(param_2,0x51600,param_5);
    return iVar1;
  }
  return 0x51;
}

