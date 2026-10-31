/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001b9c8 */

int FUN_18001b9c8(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf2;
  ulonglong _Size;
  
  _Buf2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    _Buf2 = (undefined8 *)*param_2;
  }
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  _Size = uVar2;
  if (uVar1 < uVar2) {
    _Size = uVar1;
  }
  iVar3 = memcmp(param_1,_Buf2,_Size);
  if (iVar3 == 0) {
    iVar3 = (int)(char)((uVar2 >= uVar1 && uVar2 != uVar1) - (uVar2 < uVar1));
  }
  return iVar3;
}

