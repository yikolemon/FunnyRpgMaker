/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402bf500 */

bool FUN_1402bf500(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  ulonglong _Size;
  
  if (*(char *)(param_2 + 0x19) == '\0') {
    uVar1 = *(ulonglong *)(param_2 + 0x28);
    uVar2 = param_3[1];
    _Size = uVar2;
    if (uVar1 < uVar2) {
      _Size = uVar1;
    }
    iVar4 = memcmp((void *)*param_3,*(void **)(param_2 + 0x20),_Size);
    bVar3 = -1 < iVar4;
    if (iVar4 == 0) {
      bVar3 = uVar1 <= uVar2;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

