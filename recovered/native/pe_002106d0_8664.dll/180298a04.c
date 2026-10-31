/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180298a04 */

undefined4 FUN_180298a04(longlong param_1,undefined8 *param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  
  DVar1 = GetFullPathNameW((LPCWSTR)*param_2,*(DWORD *)(param_1 + 0x18),*(LPWSTR *)(param_1 + 0x10),
                           (LPWSTR *)0x0);
  uVar3 = (ulonglong)DVar1;
  if (uVar3 == 0) {
    DVar1 = GetLastError();
    FUN_18027e6b4(DVar1);
    puVar4 = (undefined4 *)FUN_18027e66c();
    uVar2 = *puVar4;
  }
  else if (*(ulonglong *)(param_1 + 0x18) < uVar3) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    puVar4 = (undefined4 *)FUN_18027e66c();
    *puVar4 = 0x22;
    uVar2 = 0x22;
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    *(ulonglong *)(param_1 + 0x20) = uVar3;
    uVar2 = 0;
  }
  return uVar2;
}

