/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10268c70 */

/* Library Function - Single Match
    __initialize_onexit_table
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __initialize_onexit_table(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_10388d00;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_10388d00;
    param_1[1] = iVar1;
    param_1[2] = iVar1;
  }
  return 0;
}

