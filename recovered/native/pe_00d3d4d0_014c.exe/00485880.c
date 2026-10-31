/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00485880 */

/* Library Function - Single Match
    _ValidateLocalCookies
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void _ValidateLocalCookies(int *param_1,int param_2)

{
  if (*param_1 != -2) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(param_1[1] + param_2 ^ *(uint *)(*param_1 + param_2));
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(param_1[3] + param_2 ^ *(uint *)(param_1[2] + param_2));
}

