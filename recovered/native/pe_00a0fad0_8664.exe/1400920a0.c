/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400920a0 */

void FUN_1400920a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  if (*(int *)(*(longlong *)(param_1 + 0x78) + 0xc + (ulonglong)*(uint *)(param_2 + 0x30) * 0x18) ==
      0) {
    lVar1 = *(longlong *)(param_1 + 0x78) + (ulonglong)*(uint *)(param_2 + 0x30) * 0x18;
    if (((*(byte *)(param_1 + 0xe0) & 0x3e) == 0) &&
       (cVar2 = FUN_140092e6e(param_1,*(undefined8 *)(param_2 + 0x10),lVar1), cVar2 != '\0')) {
      return;
    }
    *(int *)(lVar1 + 0xc) =
         (int)((ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10)) >> 4);
  }
  return;
}

