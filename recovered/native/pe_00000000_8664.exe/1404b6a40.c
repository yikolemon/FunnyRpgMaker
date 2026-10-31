/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b6a40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _msize_base(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_14048fb3c();
    *puVar1 = 0x16;
    FUN_1404a1f20();
    return 0xffffffffffffffff;
  }
  uVar2 = (*ram0x00014059e060)(DAT_1406328c8,0,param_1);
  return uVar2;
}

