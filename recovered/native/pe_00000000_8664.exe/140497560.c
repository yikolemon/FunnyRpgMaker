/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140497560 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1404a2310(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != 0) &&
     (iVar2 = (*(code *)s_GetSystemTimePreciseAsFileTime_14059e042._14_8_)(DAT_1406328c8,0,param_1),
     iVar2 == 0)) {
    uVar3 = (*_DAT_14059df60)();
    uVar3 = FUN_14048fbac(uVar3);
    puVar1 = (undefined4 *)FUN_14048fb3c();
    *puVar1 = uVar3;
  }
  return;
}

