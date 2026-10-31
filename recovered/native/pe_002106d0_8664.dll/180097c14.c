/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180097c14 */

bool FUN_180097c14(undefined8 *param_1,char *param_2)

{
  size_t *psVar1;
  int iVar2;
  size_t _Size;
  bool bVar3;
  
  _Size = strlen(param_2);
  psVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (*psVar1 == _Size) {
    if (_Size == 0) {
      bVar3 = true;
    }
    else {
      iVar2 = memcmp(param_1,param_2,_Size);
      bVar3 = iVar2 == 0;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

