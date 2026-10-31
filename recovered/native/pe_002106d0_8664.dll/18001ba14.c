/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001ba14 */

undefined8 FUN_18001ba14(undefined8 *param_1,undefined8 *param_2)

{
  size_t *psVar1;
  size_t _Size;
  int iVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  undefined8 *_Buf2;
  
  _Buf2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    _Buf2 = (undefined8 *)*param_2;
  }
  _Size = param_2[2];
  psVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (*psVar1 == _Size) {
    if (_Size == 0) {
      uVar3 = CONCAT71((int7)(*psVar1 >> 8),1);
    }
    else {
      iVar2 = memcmp(param_1,_Buf2,_Size);
      uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 == 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

