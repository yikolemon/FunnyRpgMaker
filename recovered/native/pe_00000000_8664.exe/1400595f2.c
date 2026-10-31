/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400595f2 */

bool FUN_1400595f2(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar1 = FUN_1401aa6d0(param_2);
  if ((ulonglong)param_1[1] < uVar1) {
    bVar3 = false;
  }
  else {
    uVar2 = thunk_FUN_14018b6d0((param_1[1] - uVar1) * 2 + *param_1,param_2,uVar1);
    bVar3 = uVar2 == uVar1;
  }
  return bVar3;
}

