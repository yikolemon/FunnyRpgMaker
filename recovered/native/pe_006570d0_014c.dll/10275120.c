/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10275120 */

int FUN_10275120(void)

{
  int iVar1;
  
  if (DAT_103a9008 == -1) {
    return 0;
  }
  iVar1 = DAT_103a9008;
  if (DAT_103a9008 == 0) {
    iVar1 = FUN_10274ffe(2,"EnumSystemLocalesEx",&DAT_103254e0,&DAT_103254e8);
  }
  return iVar1;
}

