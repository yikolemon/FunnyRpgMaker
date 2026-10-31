/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10258c60 */

/* Library Function - Single Match
    __CreateFrameInfo
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 * __CreateFrameInfo(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = FUN_10272260();
  param_1[1] = *(undefined4 *)(iVar1 + 0x24);
  iVar1 = FUN_10272260();
  *(undefined4 **)(iVar1 + 0x24) = param_1;
  return param_1;
}

