/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c2bf0 */

/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _msize_base(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_14019e8cc();
    *puVar1 = 0x16;
    FUN_1401ae640();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0001401c2c22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = HeapSize(DAT_140f32da8,0,param_1);
  return uVar2;
}

