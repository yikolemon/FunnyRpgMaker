/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dd874 */

bool FUN_1800dd874(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  void *_Buf2;
  ulonglong _Size;
  
  if (*(char *)(param_2 + 0x19) == '\0') {
    uVar1 = *(ulonglong *)(param_2 + 0x30);
    if (*(ulonglong *)(param_2 + 0x38) < 0x10) {
      _Buf2 = (void *)(param_2 + 0x20);
    }
    else {
      _Buf2 = *(void **)(param_2 + 0x20);
    }
    uVar2 = param_3[1];
    _Size = uVar2;
    if (uVar1 < uVar2) {
      _Size = uVar1;
    }
    iVar4 = memcmp((void *)*param_3,_Buf2,_Size);
    bVar3 = uVar1 <= uVar2;
    if (iVar4 != 0) {
      bVar3 = -1 < iVar4;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

