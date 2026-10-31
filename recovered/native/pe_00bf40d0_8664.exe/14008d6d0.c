/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008d6d0 */

/* Library Function - Single Match
    _CreateFrameInfo
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 * _CreateFrameInfo(undefined8 *param_1,undefined8 param_2)

{
  PVOID pvVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  pvVar1 = FUN_14009d690();
  if (param_1 < *(undefined8 **)((longlong)pvVar1 + 0x58)) {
    pvVar1 = FUN_14009d690();
    uVar2 = *(undefined8 *)((longlong)pvVar1 + 0x58);
  }
  else {
    uVar2 = 0;
  }
  param_1[1] = uVar2;
  pvVar1 = FUN_14009d690();
  *(undefined8 **)((longlong)pvVar1 + 0x58) = param_1;
  return param_1;
}

