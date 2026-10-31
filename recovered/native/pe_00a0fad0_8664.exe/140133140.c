/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140133140 */

/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _msize_base(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_140113dd4();
    *puVar1 = 0x16;
    FUN_140120ee8();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000140133172. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = HeapSize(DAT_1403551d8,0,param_1);
  return uVar2;
}

