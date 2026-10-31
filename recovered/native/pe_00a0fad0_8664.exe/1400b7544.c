/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b7544 */

bool FUN_1400b7544(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  puVar1 = param_1 + 2;
  uVar2 = param_2[1];
  if (*puVar1 < uVar2) {
    bVar4 = false;
  }
  else {
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    uVar3 = thunk_FUN_1400db6c0((longlong)param_1 + (*puVar1 - uVar2) * 2,*param_2,uVar2);
    bVar4 = uVar3 == uVar2;
  }
  return bVar4;
}

