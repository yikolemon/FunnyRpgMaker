/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a3388 */

/* Library Function - Single Match
    __acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_multibyte(void)

{
  int iVar1;
  undefined8 in_RAX;
  __acrt_ptd *p_Var2;
  undefined4 extraout_var;
  
  if (DAT_1401437c4 == '\0') {
    DAT_1401437b0 = &DAT_14013c2a0;
    DAT_1401437b8 = &DAT_14013bf60;
    DAT_1401437a8 = &DAT_14013c190;
    p_Var2 = (__acrt_ptd *)FUN_1400a1544();
    iVar1 = FUN_1400a3880(-3,'\x01',p_Var2,(__crt_multibyte_data **)&DAT_1401437b8);
    in_RAX = CONCAT44(extraout_var,iVar1);
    DAT_1401437c4 = '\x01';
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

