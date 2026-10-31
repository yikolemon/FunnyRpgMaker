/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000d7b8 */

bool FUN_14000d7b8(undefined8 *param_1,char *param_2)

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

