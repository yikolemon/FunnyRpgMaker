/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140015ff2 */

int FUN_140015ff2(undefined8 *param_1,char *param_2)

{
  ulonglong uVar1;
  int iVar2;
  size_t sVar3;
  ulonglong _Size;
  
  sVar3 = strlen(param_2);
  uVar1 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  _Size = uVar1;
  if (sVar3 < uVar1) {
    _Size = sVar3;
  }
  iVar2 = memcmp(param_1,param_2,_Size);
  if (iVar2 == 0) {
    iVar2 = (int)(char)((uVar1 >= sVar3 && uVar1 != sVar3) - (uVar1 < sVar3));
  }
  return iVar2;
}

