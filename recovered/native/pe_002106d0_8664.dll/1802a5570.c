/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a5570 */

/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _msize_base(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_18027e66c();
    *puVar1 = 0x16;
    FUN_180290a50();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0001802a55a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = HeapSize(DAT_1804213f8,0,param_1);
  return uVar2;
}

