/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140129b60 */

/* Library Function - Single Match
    _recalloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong _recalloc_base(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if ((param_2 == 0) ||
     (uVar3 = 0xffffffffffffffe0 % param_2, param_3 <= 0xffffffffffffffe0 / param_2)) {
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = _msize_base(param_1,uVar3);
    }
    param_2 = param_2 * param_3;
    lVar2 = _realloc_base(param_1,param_2);
    if ((lVar2 != 0) && (uVar3 < param_2)) {
      FUN_1401366a0(lVar2 + uVar3,0,param_2 - uVar3);
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_140113dd4();
    *puVar1 = 0xc;
    lVar2 = 0;
  }
  return lVar2;
}

