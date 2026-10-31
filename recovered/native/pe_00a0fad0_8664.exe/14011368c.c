/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011368c */

/* Library Function - Single Match
    _initialize_onexit_table
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _initialize_onexit_table(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_1401c9640;
  if (param_1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_1401c9640;
    param_1[1] = lVar1;
    param_1[2] = lVar1;
  }
  return 0;
}

