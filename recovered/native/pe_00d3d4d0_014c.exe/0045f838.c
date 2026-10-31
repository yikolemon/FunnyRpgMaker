/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045f838 */

int __fastcall FUN_0045f838(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    iVar1 = FUN_0045f88e(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_0045f861(param_1,param_2,param_3);
      return iVar1;
    }
  }
  return iVar1;
}

