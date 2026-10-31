/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102791f0 */

/* Library Function - Single Match
    __recalloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __recalloc_base(void *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  size_t sVar3;
  
  if ((param_2 == 0) || (param_3 <= 0xffffffe0 / param_2)) {
    if (param_1 == (void *)0x0) {
      sVar3 = 0;
    }
    else {
      sVar3 = FID_conflict___msize_base(param_1);
    }
    param_2 = param_2 * param_3;
    iVar2 = __realloc_base(param_1,param_2);
    if ((iVar2 != 0) && (sVar3 < param_2)) {
      _memset((void *)(iVar2 + sVar3),0,param_2 - sVar3);
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0xc;
    iVar2 = 0;
  }
  return iVar2;
}

