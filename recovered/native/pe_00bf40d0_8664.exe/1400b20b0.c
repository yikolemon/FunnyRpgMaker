/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b20b0 */

/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _msize_base(longlong param_1)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    p_Var1 = FUN_140095e5c();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_1400a0ea0();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400b20e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = HeapSize(DAT_140143390,0,param_1);
  return uVar2;
}

